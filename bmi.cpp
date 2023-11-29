#include<iostream>
using namespace std;
int main()
{
    float bmi;
    float pounds;
    float height;
    cout<<"enter your weight in pounds"<<endl;
    cin>>pounds;
    cout<<"enter your height in inches"<<endl;
    cin>>height;
    if(pounds<=0||height<=0)
    {
        cout<<"invalid input";
        }
        else
        {
            bmi=pounds/(height*height);
            cout<<"your BMI is "<<bmi<<endl;
            }
            
            if(bmi<=18.5)
            {
                cout<<" You are Under Weight"<<endl;
            }
            else if(bmi>18.5 && bmi>=24.9)
            {
                cout<<"You are Normal"<<endl;
            }
            else if (bmi>24.9 && bmi<29.9)
            {
             cout<<"You are OverWeight"<<endl;
            }
            else
            {
                cout<<"you are Obese"<<endl;
            
            }
            
            

}