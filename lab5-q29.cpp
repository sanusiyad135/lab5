#include<iostream>
using namespace std;
int main(){
   //declaration of variables
   int a,n,sum;
   a=1;
   cout<<"what is n"<<endl;
   cin>>n;
   //finding the sum of all odd numbers b/w 1 and n
   //giving condition
   for(a=1;a<=n;a+=2){
   sum+=a;}
   cout<<sum<<" is sum of all odd"<<endl;
   
   return 0;
}
