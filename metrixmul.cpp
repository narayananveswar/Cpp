#include<iostream>
using namespace std;


int main()
{
    int i, j, a[10][10],b[10][10],c[10][10], row1, colm1, row2, colm2;
    cout<<"enter the size: ";
    cin>>row1>>colm1;

    cout<<"enter the matrix: ";
    for(i=0; i<row1; i++)
    {
        for(j=0; j<colm1; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the size of second metrx: ";
    cin>>row2>>colm2;
    cout<<"enter metrix";
    for(i=0; i<row2; i++)
    {
        for(j=0; j<colm2; j++)
        {
            cin>>b[i][j];
        }
    }
    // row1*colm1    row2*colm2
    // n1*n2        n2*n3   
    //Multiplication

    for(i=0;i<row1; i++)
    {
        for(j=0;j<colm2;j++)
        {
            int sum = 0;
            for(int k=0;k<row2;k++)
            {
                sum += a[i][k] * b[k][j];
            }
            
            c[i][j] = sum;
        }
    }
    cout<<"the metrix is:"<<endl;
    for(i=0;i<row1;i++)
    {
        for(j=0;j<colm2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    
}