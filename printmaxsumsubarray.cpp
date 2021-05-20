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
    int sum =0, maxsum =0;
    for(i=0;i<n;i++)
    {
        sum =arr[i];
        for(j=i+1;j<n;j++)
        {
            sum += arr[j];
        }
        if(sum>maxsum)
        {
            maxsum = sum;
        }
    }
    cout<<"maximum sum is "<<maxsum<<endl;

}