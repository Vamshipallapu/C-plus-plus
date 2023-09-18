#include<utility>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void sortchar(int a[],char b[],int n) //creating a sort function over here
{
    pair<int,char>pa[n]; //intializing pair array over here
    for (int i = 0; i < n; i++)
    {
        pa[i]={a[i],b[i]}; //[10,5] & ['a','c]==> {(10,'x),(5,'c)} this makes pairing of variables available
    }
    sort(pa,pa+n); //sorting array till last element
    for (int i = 0; i < n; i++)
    {
        cout<<pa[i].second<<" "; // printing only second elements pnce we sort the abpve array
    }
}
int main()
{
    int a[] = {2, 1, 5, 4, 9, 3, 6, 7, 10, 8};
    char b[] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J'};
    int n=sizeof(a)/sizeof(a[0]); //giving inputs

    sortchar(a,b,n);//calling the funnction with the given inputs
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" "; //just printing arrays individually
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}