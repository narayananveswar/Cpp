#include<iostream>
using namespace std;


int numberOfOnes(int n)
{
    int m, count, o;
    m = n-1;
    count = 0;
    while(n!=0)
    {
        n = m & n;
        count++;
        m = n-1;
    }
    return count;
}

int main()
{
    int n;
    int onesCount;

    onesCount = numberOfOnes(1);
    cout<<onesCount<<endl;
}