#include<iostream>
using namespace std;
int main()
{
    float n; // n will hold the value of richter scale number
    cout<<"Enter the richter scale number"<<endl;
    cin>>n;
    if(n<=5.0)    //added equal to sign here otherwise not working fine
    cout<<"Little or no Damage"<<endl;    //Corrected the "Damage" spelling
    else if(n>5.0 && n<=5.5)    //Added equal to sign
    cout<<"Some Damage"<<endl;
    else if(n>5.5 && n<=6.5)    //Added equal to sign
    cout<<"Serious Damage:walls may crack or fall"<<endl;
    else if(n>6.5 && n<=7.5)    //Added equal to sign
    cout<<"Disaster:houses and Buildings may collapse"<<endl;
    else
    cout<<"Catastrophe: most of the Buildings destroyed"<<endl;
    
}
