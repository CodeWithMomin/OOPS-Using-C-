// write a program in c++ to display the cube of the number upto an interger number;
#include<iostream>
using namespace std;
int main()
{
    int n,i,cube=1;
    cout<<"Enter an integer: ";
    cin>>n;
    while(i<n)
    {
        cube=i*i*i;
        cout<<cube<<endl;
        i++;
    }
}