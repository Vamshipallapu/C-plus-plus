# include <iostream>
using namespace std;
void fun()
{
    cout<<"function called";
}
int main()
{
    cout<<"before function call";
    fun();
    fun();
    fun();
    cout<<"after function call";
    return 0;
}