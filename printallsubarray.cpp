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

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=i; k<j; k++)
            {
                cout<<arr[k];
            }
            cout<<"---";
        }
        cout<<endl;
    }
}