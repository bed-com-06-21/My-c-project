#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main(){
    srand(time(0));
    int daysUntilExpiration = (rand()% 12);
   if (daysUntilExpiration <= 10){
    cout<<"Your subscrition will expire soon.Renew now!";
   } 
   else if(daysUntilExpiration<=5){
    cout<<"Renew now and save 10%";
   }
   else if (daysUntilExpiration==1)
   {
    cout<<"your subscription expire within a day!Renew now and save 20%";
   }
   else if (daysUntilExpiration == 0)
   {
    cout<<"Your subscription has expired";
   }
   else if(daysUntilExpiration >= 10){
    cout<<"You have active subscription";
   }
   return 0;
}

