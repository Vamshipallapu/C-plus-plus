#include<utility>
#include<iostream>
using namespace std;
int main()
{
    pair<int,int>p1(1,12),p2(1,13);
    cout<<(p1==p2)<<" ";
    cout<<(p1!=p2)<<" ";
    cout<<(p1>p2)<<" ";
    cout<<(p1<p2)<<endl;
}
