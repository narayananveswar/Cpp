#include<iostream>
using namespace std;

void bubbleSort(int n, int a[10])
{
    int i, j, temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;                
            }
        }
    }
    cout<<"sorted array is:"<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<", ";
}

int main()
{
    int n, arr[10];
    cout<<"enter the number of elements: ";
    cin>>n;

    cout<<"enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(n, arr);
}