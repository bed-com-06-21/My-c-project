#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main(){
    srand(time(0));
    int daysUntilExpiration = (rand() % 11)+1;
    switch(daysUntilExpiration){
    case 1:
    cout<<"Your subscription will expire soon.Renew now";
    break;
    case 2:
    cout<<"your subscription expires in value of dayUntilExpirationdays Renew now and save 10%";
    break;
    case 3:
    cout<<"Your subscrition  expires within a day!Renew now and save 20%!";
    break;
    case 4:
    cout<<"Your subscription has expired";
    break;
    default:
    cout<<"You have active subscription";

    }
    return 0;
}



