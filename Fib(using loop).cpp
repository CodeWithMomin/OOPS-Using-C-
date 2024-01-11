// fibonacci series using loop
int fib(int n)
{
    int t0=0; // first term
    int t1=1; // second term
    int s; // stores the value of sum
    int i; 
    if(n<=1)
    return n;
    
   for(i=2;i<=n;i++)
   {
       s=t0+t1; 
       t0=t1; // value of t0 will get updated now it will store the value of t1
       t1=s;// t1 will store the value of s
       
   }
   return s;
}
#include <iostream>

using namespace std;

int main()
{
    int r=fib(7);
    cout<<r;

    return 0;
}
