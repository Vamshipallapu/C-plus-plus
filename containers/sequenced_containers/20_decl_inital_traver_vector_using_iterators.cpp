#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=3, x=10;   
    vector<int>v(n,x); //this created vector with 3 size and 10 no on each index 10,10,10
    for (auto it= v.begin(); it!=v.end(); it++) // we can also use vector<int>::iterator if not auto it , it is initalization of iterator
    {
        cout<<(*it)<<" "; // we use (*it) because this is the address as we need to de reference it (as iterator gives address of the element)
    }
    return 0;
}