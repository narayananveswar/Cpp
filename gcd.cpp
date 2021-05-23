#include<iostream>
using namespace std;


int findGCD(int n, int m)
{
    int max, min;
    if(n>m)
    {
        max = n;
        min = m;
    }    
    else
    {
        max = m;
        min = n;
    }
    while (max%min != 0)
    {
        int temp;
        temp = max%min;
        max = min;
        min = temp;
    }
    return(min);
}

int main()
{
    int m,n;
    // cin>>m,n;
    cout<<findGCD(24, 42)<<endl;
}