// including the library
#include <iostream>
using namespace std;
int main()
{
// define the variables
int x,y,z;
// print the numbers
cout<<"Enter first number: "<<endl;
cin>>x;
cout<<"Enter second number: "<<endl;
cin>>y;
cout<<"Enter third number: "<<endl;
cin>>z;
// if condition
if(x>y && x>z)
{
cout<<"First number "<<x<<" is the largest"<<endl;
// if the condition is true then print
}
if(y>x && y>z)
{
cout<<"Second number "<<y<<" is the largest"<<endl;
// if the condition is true then print
}
if(z>x && z>y)
{
cout<<"Third number "<<z<<" is the largest"<<endl;
// if the condition is true then print
}
return 0;
}
 
