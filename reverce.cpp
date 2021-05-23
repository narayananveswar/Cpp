#include<iostream>
#include<string>
using namespace std;


void reverce(string s, int len)
{
    if(len!=0)
    {
    cout<< s[len];
    reverce(s, len-1);
    }
    else
        cout<<s[len]<<endl;
}

int main()
{
    string str = "hai";
    reverce(str, str.length());
}