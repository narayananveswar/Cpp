#include<iostream>
using namespace std;


int napsack(int value[], int wt[], int n, int W)
{
    if(n == 0)
        return 0;
    if(W-wt[n-1] < 0)
    {
        return 0;
    }
    return max(napsack(value, wt, n-1, W-wt[n-1])+value[n-1], napsack(value, wt, n-1, W));
}

int main()
{
    int wt[]={10, 20, 30}, value[] = {100, 50, 150};
    int n = 3, W = 50;  
    cout<<napsack(value, wt, n, W)<<endl;
}