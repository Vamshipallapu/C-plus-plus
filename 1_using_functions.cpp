# include <iostream>
using namespace std;
int getmax(int x,int y)
{
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a=10,b=23;
    cout<<getmax(a,b);
    return 0;
}    