// fibonacci series is an excessive recursion which is calling itself for same paramter. and there will be more function calls .
// to decrease funcion calls we use Memoization approach of recursion 
int f[10]; //static array

int fib(int n)
{
   if(n<=1)
  {
       f[n]=n;
   return n;
  }
  else
  {
      if(f[n-2]==-1)
          f[n-2]=fib(n-2);
          if(f[n-1]==-1)
          f[n-1]=fib(n-1);
      return f[n-2] +f[n-1];
  }
}
#include <iostream>

using namespace std;

int main()
{
    int i;
 for(i=0;i<10;i++)
 f[i]=-1;
    int r=fib(7);
    cout<<r;

    return 0;
}
