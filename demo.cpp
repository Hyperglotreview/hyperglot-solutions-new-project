#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {  
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        cout<<s1<<endl;
        cout<<s2<<endl;
        for (int i = 0; i <s2.size(); i++)
        {
            s2[i]=-1*s2[i];
        }
        
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for (int i = 0; i <s2.size(); i++)
        {
            s2[i]=-1*s2[i];
        }
        cout<<s1<<endl;
        cout<<s2<<endl;
        
        cout<<s1.size()<<endl;
        for (int i = 0; i <s1.size(); i++)
        {
            if (s1[i]==s2[i])
        {
            cout<<"1";
        }
           else{
            cout<<"0";
           }
        }
        
        
        
   

    }

    return 0;
}