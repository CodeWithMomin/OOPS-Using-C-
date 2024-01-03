// sum of first N natural numbers using  loops
#include<iostream>
using namespace std;
int sum(int n)
{
    int i;
    int s=0;
    for(i=1;i<=n;i++)
    
            s=s+i;
            return s;    
}
int main(){
    int num;
    cout<<"enter any number"<<endl;
    cin>>num;
    int r=sum(num);
    cout<<r;
}
