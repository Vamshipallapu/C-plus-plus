#include<iostream>
using namespace std;
template<typename T> //defining template over here with datatype parameter T
T arrmax(T arr[],int n)
{
    T res=arr[0];
    for (int i=1; i < n; i++)
    {
        if (arr[i]>res)
        {
            res=arr[i];
        }
    }
    return res;
} 
int main()
{
    int arr1[]={10,20,40,30};
    cout<<arrmax<int>(arr1,4);
    float arr2[]={1.2,3.4,5.6,4.3,2.1};
    cout<<arrmax<float>(arr2,5);
    return 0;
}