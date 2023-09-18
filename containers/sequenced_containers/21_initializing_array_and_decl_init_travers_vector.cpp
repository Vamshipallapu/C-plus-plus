#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={10,25,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for (auto it= v.begin(); it!=v.end(); it++) // we can also use vector<int>::iterator if not auto it , it is initalization of iterator
    {
        cout<<(*it)<<" "; // we use (*it) because this is the address as we need to de reference it (as iterator gives address of the element)
    }
    for(auto it=v.rbegin();it!=v.rend();it++)
    {
        cout<<(*it)<<" ";
    }
    return 0;
}