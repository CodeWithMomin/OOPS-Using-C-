// power of any number using for Recursion 
#include <iostream>
using namespace std;
int pw(int m,int n)
{
    if(n==0)
    return 1;
    else
    return pw(m,n-1)*m;
}
int main()
{
    int r=pw(2,3);
    cout << r;
}
