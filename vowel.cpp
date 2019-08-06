#include<iostream>
#include <string>
using namespace std;
int main()
{
    int count=0;
    string str,rev="";
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
    return 0;
}
