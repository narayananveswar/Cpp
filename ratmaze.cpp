#include<iostream>
using namespace std;


bool isSafe(int **arr, int i, int j, int n)
{
    if(j<n && i<n && arr[i][j] == 1)
        return true;
    return false;
}

bool moveMaze(int **arr, int i, int j, int n, int **solArr)
{
    if(i==n-1 && j==n-1)
    {
        solArr[i][j] = 1;
        return true;
    }
    if(isSafe(arr, i, j, n))
    {
        solArr[i][j] = 1;
        if(moveMaze(arr, i+1, j, n, solArr))
        {
             return true;
        }
        if(moveMaze(arr, i, j+1, n, solArr))
        {
            return true;
        }
        solArr[i][j] = 0;
        return false; 
    }
    return false;
}

int main()
{
    int **arr, **solArr;
    int n;
    cin>>n;
    

    arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    solArr = new int*[n];
    for(int i=0;i<n;i++)
    {
        solArr[i] = new int[n];
        for(int j=0; j<n;j++)
        {
            solArr[i][j] = 0;
        }
    }
    cout<<endl;

    if(moveMaze(arr, 0, 0, n, solArr))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0; j<n;j++)
            {
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}