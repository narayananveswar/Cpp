#include<iostream>
using namespace std;


int main()
{
    int i, j, k, arr[10], n;
    cout<<"enter size of array";
    cin>>n;
    
    cout<<"enter elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int currentsum[10];
    currentsum[0] = arr[0];
    if(currentsum[0] < 0)
        currentsum[0] = 0;
    for(i=1;i<n;i++)
    {
        currentsum[i] = currentsum[i-1] + arr[i];
        if(currentsum[i] < 0)
            currentsum[i] = 0;
    }
    int max = currentsum[0];
    for(i=1;i<n;i++)
    {
        if(currentsum[i]>max)
            max = currentsum[i];
    }
    cout<<"max sum = "<<max<<endl;
}