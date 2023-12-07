//write a program to find a factorial of any number 
#include<iostream>
using namespace std;
int main()
{
    int fact;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(fact=1;n>=1;--n)
    {
        fact = fact*n;
        
    }
    cout<<"The factorial is:"<<fact;
}