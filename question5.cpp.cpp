#include <iostream>
using namespace std;
   
int main(){
    double side,base, length,height;
    double areaOfSquare, areaOfTriangle, areaOfRectangle;
    
    while(true){
        cout <<"Please select the area of the shape to calculate:\n";
        cout <<"1. Square\n";
        cout <<"2. Triangle\n";
        cout <<"3. Rectangle\n";
        cout <<"4. Quit the program\n"; 
     
        int select;

        cout <<"Enter selection: ";
        cin >> selection;
        if(selection == 1){
           cout << "Enter the side length of the Square:";
           cin >> side;
           areaOfSquare = side*side;
           cout << "The area of square is: " << areaOfSquare <<endl;

    }  else if(selection == 2){
           cout << "Enter the base length of the triangle: ";
           cin >> length;
           cout << "Enter the height of the triangle: ";
           cin >> height;
           areaOfTriangle = (0.5*height*length);
           cout << "The area of the Triangle is: " <<areaOfTriangle <<endl;
     } else if(selection == 3){
           cout << "Enter the length of the rectangle: ";
           cin >> length;
           cout << "Enter the width of the rectangle: ";
           cin >> base;
           areaOfRectangle = base*height;
           cout << "The area of the rectangle is: " << areaOfRectangle << endl;
     } else if(selection == 4){
           cout << "Quiting the program. " <<endl;
           break;

     } else{
           cout << "invalid input! Please try again. " << endl;
     }
     return 0;


  } 
  
   

  
















   }
  
