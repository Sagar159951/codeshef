#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n,m,flag=0;
    vector<char> s;
    string w ;
    getline(cin,w);
    vector<char> t;
    for(char x : w)
    {
        t.push_back(x);
    }
    for(int x=0; x<t.size(); x++)
    {
        for(int y=t.size()-1; y>x; y--)
        {
            if(t[x]==t[y])
            {
                for(n=x,m=y; m>=n; n++,m--)
                {
                    if(t[n]==t[m])
                    {
                        flag=0;
                        continue;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(!flag)
            {
                for(int a=x; a<y; a++)
                {
                    s.push_back(t[a]);
                }
            }
            if(!flag)
            {
                break;
            }
        }
    }
    for(char a : s)
    {
        cout<<a;
    }
}
    