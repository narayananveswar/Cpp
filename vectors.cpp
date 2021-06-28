#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> v;
    v.push_back(4);//add element to a vector
    v.push_back(5);
    v.push_back(6);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    for(auto element:v)
    {
        cout<<element<<endl;   // way to access elements in an array
    }
    
    v.pop_back();               // popint element from a vector
    cout<<"element after pop_back()"<<endl;
    for(auto element:v)
    {
        cout<<element<<endl;
    }

    vector<int> v2(5,1);
    cout<<"initialise the element"<<endl;
    for(auto element:v2)
    {
        cout<<element<<endl;
    }
    cout<<"Swap(v,v2)"<<endl;
    swap(v,v2);
    for(auto element:v)
    {
        cout<<element<<endl;
    }

}