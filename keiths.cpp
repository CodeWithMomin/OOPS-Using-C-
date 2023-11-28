#include<iostream>
using namespace std;

float calculateaTeacherAmount()
{
    float discountAmount;
    float totalPurchase;
    float salestex=0.05;
    float discountedTotal;
   cout<<"Enter the amount of purchase: "<<endl;
   cin>>totalPurchase;
   cout<<" Total Purchases :"<<totalPurchase<<endl;

   if(totalPurchase>=100){
  
    discountAmount=totalPurchase*0.12;
    cout<<"Teacher's Discount (12%)"<<discountAmount<<endl;
    cout<<"sales tex"<<salestex<<endl;
    discountedTotal=totalPurchase-discountAmount;
    cout<<"Discounted Total is:"<<discountedTotal<<endl;
    totalPurchase-=discountAmount;
    totalPurchase*=1+salestex;
    cout<<"TotalAmount is:"<<totalPurchase<<endl;

   }
   else
    {
        discountAmount=totalPurchase*0.10;
        cout<<"Teacher's Discount (10%)"<<discountAmount<<endl;
        discountedTotal=totalPurchase-discountAmount;
    cout<<"Discounted Total is:"<<discountedTotal<<endl;
        cout<<"salesTex"<<salestex<<endl;
        totalPurchase-=discountAmount;
        totalPurchase*=1+salestex;
         cout<<"Total is:"<<totalPurchase<<endl;

    }
         return totalPurchase;
    }

float calculate_Non_teacher()
{
     float totalPurchase;
     float salesTex=0.05;
     cout<<"enter your total purchase"<<endl;
     cin>>totalPurchase;
     cout<<" Total Purchases :"<<totalPurchase<<endl;
     cout<<"SalesTex(5%)"<<salesTex<<endl;
     totalPurchase += totalPurchase * salesTex;
        cout<<"Total"<<totalPurchase;
        return totalPurchase;

    } 

int main()
{
    string profession=" ";
    cout<<"Enter your Profession"<<endl;
    cin>>profession;
    if(profession=="teacher")
    {
        calculateaTeacherAmount();
    }
    else
    {
        calculate_Non_teacher();
    }
   
} 