#include<iostream>
using namespace std;
int n;
int rev;
int temp;
bool ispal(int n)
{
    int rev=0;
    int temp=n;
    while (temp!=0)
    {
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    return (rev==n);
}
int main()
{
    int n = 7007;
    if (ispal(n) == 1) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
    return 0;
}
