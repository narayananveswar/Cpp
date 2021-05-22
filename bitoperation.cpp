#include<iostream>
using namespace std;

int getBit(int n, int pos)
{
    return (n & (1<<pos)) != 0;
}

int setBit(int n, int pos)
{
    return (n | (1<<pos));
}

int clearBit(int n, int pos)
{
    return n & (~(1<<pos));
}

int updateBit(int n, int pos, int value)
{
    n = clearBit(n, pos);
    n = setBit(n, value);
    return n;
}

int main()
{
    int bit;
    //bit = getBit(5,2);
    //bit = setBit(5,1);
    //bit = clearBit(5,0);
    bit = updateBit(5, 1, 1);
    cout<<bit<<endl;
}