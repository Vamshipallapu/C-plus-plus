#include<iostream>
using namespace std;
struct point //defining data type
{
    int x;
    int y;
};
int main()
{
    struct point p; //giving alias name for the user defined struct
    p.x=10;
    p.y=12;
    cout<<p.x<<" "<<p.y;
    return 0;
}
