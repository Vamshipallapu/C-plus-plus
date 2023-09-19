#include<iostream>
using namespace std;
int main()
{
    int x;
    int sum=0;
    cout<<"enter the number:"<<endl;
    cin>>x;
    while (x>0)
    {
        x=x/10;
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}