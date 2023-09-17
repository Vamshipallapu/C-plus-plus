#include<iostream>
using namespace std;
template<typename T> // here we are defining the template and giving a type name (Data type parameter) here as we need to give gere type name is T
T mymax(T x,T y) //defining template name hhere as mymax and we are passing data type parameter over here the use of this is when ever we pass the inputs to the template we provide input data type variables in the place of T itself
{
    return (x>y)?x:y;
}
int main()
{
    cout<<mymax<int>(3,7)<<endl; //here we are calling template with integers given in the place of T so template checks whether the given data type variables here integers are there or not in the place of T and process it.
    cout<<mymax<char>('c','g')<<endl;
    return 0;
}

// now we can call the same template again and again rather than creating new code and again and call the 
// same function for different data types.

