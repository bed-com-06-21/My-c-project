#include<iostream>
#include<string>
using namespace std;
int main(){
      string numbers[]{"B123","C234","A345","C15","B177","G300","C235" "B179"};
      for(int i = 0; i<8; i++){
        if(numbers[i][0]=='B'){
            cout<< numbers[i] <<endl;
        }
      }
      return 0;
    }