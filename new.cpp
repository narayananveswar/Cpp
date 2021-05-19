#include<iostream>
using namespace std;

void binerySearch(int a[10], int n, int search)
{
    int mid = n/2, last = n, beg =0, flag = 0;

    while(beg<mid)
    {
        if(a[mid]== search)
        {
            cout<<"element found"<<endl;
            flag = 1;
            break;
        }       
        else
        {
            if(a[mid]>search)
            {
                last = mid -1;
                mid = (beg+last)/2;
            }
            else{
                beg = mid +1;
                mid = (beg+last)/2;
            }
        }
    }
    if(flag == 0)
        cout<<"element not found"<<endl;
}

int main()
{
    int n, a[10],search;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    cout<<"Enter the numbers:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter number to be searched"<<endl;
    cin>>search;
    binerySearch(a, n, search);
}