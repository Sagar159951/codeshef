#include<iostream>
#include<typeinfo>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string a ="shayak sagar aman rohit gopal";
    string b = "jawahar navodaya vidhalaya";
    int c[10] = {1,2,3,4,5,6,7,8,9,0};
    fstream fin;
    fin.open("out.txt");
    fin << a<<"\n";
    for(int x : c){
        fin <<" "<< x;
    }
    
    fin.close();
}
