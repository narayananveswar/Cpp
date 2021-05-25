#include<iostream>
using namespace std;


int fibbonachi(int n)
{
    if(n==0||n==1)
        return n;
    return fibbonachi(n-1)+fibbonachi(n-2);
}

int main()
{
    cout<<fibbonachi(5)<<endl;
}