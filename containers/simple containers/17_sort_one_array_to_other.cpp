#include<utility>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void sortchar(int a[],char b[],int n)
{
    pair<int,char>pa[n];
    for (int i = 0; i < n; i++)
    {
        pa[i]={a[i],b[i]};
    }
    sort(pa,pa+n);
    for (int i = 0; i < n; i++)
    {
        cout<<pa[i].second<<" ";
    }
}
int main()
{
    int a[] = {2, 1, 5, 4, 9, 3, 6, 7, 10, 8};
    char b[] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J'};
    int n=sizeof(a)/sizeof(a[0]);

    sortchar(a,b,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}