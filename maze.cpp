#include<iostream>
using namespace std;


int mazeGame(int size, int i, int j)
{
    if(i==size-1 && j==size-1)
    {
        return 1;
    }
    if(i>=size || j>=size)
    {
        return 0;
    }
    int count;
    return mazeGame(size, i+1, j) + mazeGame(size, i, j+1);
}

int main()
{
    cout<<mazeGame(3, 0, 0)<<endl;
}