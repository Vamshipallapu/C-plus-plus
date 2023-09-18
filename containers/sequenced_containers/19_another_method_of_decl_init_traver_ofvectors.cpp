#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{10,5,20}; //Initializing an array
    for (int x :v) //traversing across each element in the array every x in vector v
    {
        cout<<x<<" ";
    }
    for (int &x :v) //if we want to change the elements just adding x=6 wont help we need to add & at (int &x:v)
        x=6;
    for (int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}