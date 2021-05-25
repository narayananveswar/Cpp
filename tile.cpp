#include<iostream>
using namespace std;


int tile(int bsl, int bsw, int maxLength)
{
    if(bsl==maxLength && bsw == 2)
    {
        return 1;
    }
    if(bsl>maxLength || bsw > 2)
    {
        return 0;
    }

    return tile(bsl+2, bsw, maxLength) + tile(bsl, bsw+1, maxLength);
}

int main()
{
    cout<<tile(0, 0, 4)/2<<endl;
}