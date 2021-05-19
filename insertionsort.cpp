#include<iostream>
using namespace std;


void insertionSort(int n, int arr[10])
{
    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = current;
    }
        cout<<"sorted array is:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<", ";
    
    cout<<endl;
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
    insertionSort(n, arr);
}