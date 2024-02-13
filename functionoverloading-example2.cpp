// write a program which will return the sum of two numbers if we pass the numbers to the calling function or concat the strings if we pass the strings to the function

#include<iostream>
using namespace std;
int area(int a, int b)
{
    cout<<"calculating  the  area of rectangle"<<endl;
    return a*b;
}
int area(int a){
     cout<<"calculating  the  area of square"<<endl;
     return a*a;
}
double area(double a,double b)
{
     cout<<"calculating  the  area of triangle"<<endl;
     return (a*b)/2;
     
}
double area(double a)
{
     cout<<"calculating  the  area of circle"<<endl;
     return 3.14*a*a;
}
int main(){
    cout<<area(6)<<endl;// calculating the area of square
    cout<<area(5,6)<<endl;//calculating the area of rectangle
    cout<<area(5.45,9.55)<<endl;//calculating the area of triangle
    cout<<area(5.5)<<endl;// calculating the area of circle
    
}
