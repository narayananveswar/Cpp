#include<iostream>
using namespace std;


void firstRepeatingElement(int n, int arr[10])
{
    int find[10][2], temp, pos;
    for(int i=0; i<n; i++)
    {
        temp = arr[i];
        pos  = temp % 10;
        if(find[pos][0] == temp)
            cout<<"first repeating element's position "<< find[pos][1] + 1;
        else
            find[pos][0] = temp;
            find[pos][1] = i;
    }
    cout<<endl;
}
int main()
{
    int n, arr[10];
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    firstRepeatingElement(n, arr);
}