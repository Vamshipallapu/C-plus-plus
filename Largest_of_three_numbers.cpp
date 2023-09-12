# include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b and a>=c)
        cout<<"a is larger";
    else if (b>=a and b>=c)
    {
        cout<<"b is larger";
    }
    else
    {
        cout<<"c is larger";
    }
        return 0;  
}