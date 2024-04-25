#include <iostream>
#include <limits>
using namespace std;
int main(){
    int values;

    //prompt user to enter values between 5 and 10.

    cout<<"enter values between 5 and 10 :"<<values;
    while(!(cin >> values) || values < 5 || values > 10){
    //clear the  input stream

    cin.clear();
    cin.ignore(numeric_limits < streamsize > :: max(), '\n');
    //prompt the user to enter values  for valid input.

    cout<<"sorry,have entred an  invalid number, please try gain.";
    }
    // if the has entered collect value it will print input accepted.
    
    cout<<"input value accepted :"<<values<<endl;
    return 0;
}