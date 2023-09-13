#include<iostream>
using namespace std;
void printdetails(int id,string name="NA",string address="NA")//here if we dont give the variabes for the arguments then the default value of NA will be taken
{
    cout<<"ID is"<<id<<"\n";
    cout<<"name is"<<name<<"\n";
    cout<<"address is"<<address<<"\n";
}
int main()
{
    printdetails(101,"vamshi","bangalore");
    cout<<"\n";
    printdetails(102,"john");
    cout<<"\n";
    printdetails(101);
    cout<<"\n";
    return 0;
}