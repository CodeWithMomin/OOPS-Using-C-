// this is an iterative version 
#include <iostream>

using namespace std;
 double e(double x,double n)
 {
     double s=1;
     for(;n>0;n--)
     
         s=1+x/n*s;
      return s;
    
 }
int main()
{
   
   double r=e(1,10);
   cout<<r;
}