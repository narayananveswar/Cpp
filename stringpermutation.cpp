#include<iostream>
#include<string>
using namespace std;


void permutationOfString(string str, int len, int fixed, int count)
{
    if(fixed > str.length())
    {
        return;
    }
    else
    {
        if(count == len)
        {
            fixed++;
        }
        cout<<str[fixed];
        permutationOfString(str, len, fixed, count+1);
    }
    cout<<endl;
}
int main()
{
    string str = "abc";
    permutationOfString(str, str.length(), 0, 0);
}