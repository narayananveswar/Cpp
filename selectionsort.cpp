#include<iostream>
using namespace std;

void selectionSort(int size, int arr[10])
{
    int i,j, temp;
    
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"sorted array is"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<", ";
    }
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
    selectionSort(n, arr);
}