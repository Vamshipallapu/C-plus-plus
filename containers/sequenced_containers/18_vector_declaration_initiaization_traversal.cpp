#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "; //if we put v[i]=5 like at any index we can change the element that is present
    }
    return 0;
    
}