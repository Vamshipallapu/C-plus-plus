#include<iostream>
using namespace std;
void func2()
{
    cout<<"inside func2\n";
}
void func1()
{
    cout<<"Inside func1\n";
    func2();
    cout<<"after func2\n";
}
int main()
{
    cout<<"Before main func\n";
    func1();
    cout<<"after main func\n";
}