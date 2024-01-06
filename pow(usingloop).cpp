// power of any number using for loop
#include <iostream>
using namespace std;
int pw(int m,int n)
{
    int i;
    int p=m;
    for(i=1;i<n;i++)
    p=p*m;
    return p;
}
int main()
{
    int r=pw(2,3);
    cout << r;
}
