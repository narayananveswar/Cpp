// 10000 1000 100 10 

#include<iostream>
using namespace std;

int isPower2(int n)
{
    int a;
    a = n-1;
    return(!(n&a));
    
}
 int main()
 {
     if(isPower2(16))
        cout<<"true";
    else
        cout<<"false";
    cout<<endl;
 }