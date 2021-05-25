#include<iostream>
#include<string>
using namespace std;


void printPermutation(string str, string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }   
    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        string ros = str.substr(0,i)+str.substr(i+1);
        printPermutation(ros, ans+ch);
    }
}


int main()
{
    printPermutation("abc", "");
}
/* a b c

    a b c
    a c b
    b a c
    b c a
    c a b 
    c b a

*/

