#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<bits/stdc++.h>
#include<map>
#include<fstream>
using namespace std;

vector<int> read(vector<int> &take,vector<long> &scanned_books,int days,int scan){
    vector<int> aa;
    aa.clear();
    int size = 0;
    long day = (long)scan*(long)days;
    while(day>0 && size<take.size()-2){
        if(scanned_books[take[size]]==0){
            aa.push_back(take[size]);
            scanned_books[take[size]] = 1;
            day--;
        }
        size++;
    }
    return aa;
}

int main(){
    int book_score,lib_no,days,k;
    vector<vector<int>> lib_detailsl; //space complex = lib_no
    vector<int> temp;//temp
    multimap<int,int> temp2;
    multimap<int,int>::reverse_iterator itr2;
    multimap<double,pair<int,vector<int>>>queue;
    multimap<double,pair<int,vector<int>>>::reverse_iterator itr;
    pair<int,vector<int>> aa; //temp
    cin>>book_score>>lib_no>>days;
    vector<long> score; //space complex = book_score
    vector<long> scanned_books(book_score); //space complex = book_score
    vector<pair<int,vector<int>>> output;  //space complex = totally different###
    
    for(int i=0;i<book_score;i++){
        cin>>k;
        score.push_back(k);
    }
    int book_no,login,scan;

    double percent;
    for(int i=0;i<lib_no;i++){
        cin>>book_no>>login>>scan;
        percent = (((double)book_no/(double)book_score)*100.0) + ((1-((double)login/(double)days))*100.0);
        temp.clear();
        for(int j=0;j<book_no;j++){
            cin>>k;
            temp.push_back(k);
        }
        temp.push_back(login);
        temp.push_back(scan);
        aa.first = i;
        aa.second = temp;
        queue.insert(pair<float,pair<int,vector<int>>>(percent,aa));
  
    }
     int flag=0;
    itr = queue.rbegin();
    cout<<endl;
    while(days>0 && itr != queue.rend()){
        temp.clear();
        temp2.clear();
        days-= *(itr->second.second.end()-2);
        if(days<1){
            break;
        }
       
        //cout<<"\n"<<(long)days*(long)(*(itr->second.second.end()-1));
        
        if(itr->second.second.size()-2 > (long)days*(long)(*(itr->second.second.end()-1))){
            for(int x=0;x<itr->second.second.size()-2;x++){
                temp2.insert(pair<int,int>(score[itr->second.second[x]],itr->second.second[x]));
            }
            int x=0;
            for(itr2 = temp2.rbegin();itr2!=temp2.rend();itr2++){
                itr->second.second[x] = itr2->second;
                x++;
            }
        }
        temp = read(itr->second.second,scanned_books,days,*(itr->second.second.end()-1));
        if(temp.size()==0){
            days+= *(itr->second.second.end()-2);
        }
        else{
            aa.first = itr->second.first;
            aa.second = temp;
            output.push_back(aa);
        }
        itr++;
    }
    
    cout<<endl;
    //output
    fstream fin;
    fin.open("out.txt");
    fin<<output.size()<<endl;
    for(int i=0;i<output.size();i++){
        fin<<output[i].first<<" "<<output[i].second.size()<<endl;
        for(int j : output[i].second){
            fin<<j<<" ";
        }
        fin<<endl;
    }
    fin.close();
    
}
