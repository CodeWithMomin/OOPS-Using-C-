// this is an example of head recursion and its itreative version
#include<iostream>
using namespace std;
/*
int func(int n)
{
    if(n>0)
    {
        func(n-1);
        cout<<n<<endl;
    }
    return 0;
    
}
int main()
{
    func(5);
}*/
void func(int n)
{
    int i=1;
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }
}
int main()
{
    func(5);
}
