// write a program which will return the sum of two numbers if we pass the numbers to the calling function or concat the strings if we pass the strings to the function

#include<iostream>
using namespace std;
float sum(float a,float b)
{
    return a+b;
}
string sum(string a,string b)
{
    return a+b;
}

int main(){
    
   cout<<sum(5,6);  // this statement is returning the sum of two numbers
   cout<<sum("my Name is"," Momin Zahoor"); // this statment will concatinate the two strings
}
