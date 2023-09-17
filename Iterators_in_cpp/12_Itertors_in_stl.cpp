#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50};
    vector<int>::iterator i=v.begin(); // syntax to create iterator to the container and  similary we can use this to any container
    cout<<(*i)<<" "; // we can use auto i short cut in place of above syntax for iterator creation for the container.
    i++;
    cout<<(*i)<<" ";
    i=v.end();
    i--;
    cout<<(*i)<<" ";
    return 0;
}