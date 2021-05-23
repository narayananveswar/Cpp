#include<iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int Xor = 0;
    for(int i=0; i<n; i++)
        Xor = Xor ^ arr[i];
    return Xor;
}

int main()
{
    int arr[] = {1,2,3,4,3,2,1};
    cout<<findUnique(arr,7 )<<endl;

}