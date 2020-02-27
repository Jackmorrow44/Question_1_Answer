#include <iostream>
#include <cmath>
using namespace std; 
int main (){
    double num1, num2, num3, num4;
    double sum= sqrt(num1) + sqrt(num2) + sqrt(num3) + sqrt(num4);
    double aveOfSquares = (sqrt(num1) + sqrt(num2) + sqrt(num3) + sqrt(num4)) / 4;
     cout << "Please enter the first number: "; 
    cin >> num1;
      cout << "Please enter the second number: ";
     cin >> num2;
     cout << "Please enter the third number: "; 
    cin >> num3;
     cout << "Please enter fourth number: ";
    cin >> num4;
    cout << "This is the first number squared" << sqrt(num1) << "This is the second number squared" <<  sqrt(num2) << "This is the third numer squared" <<  sqrt (num3) << "This is the fourth number squared" << sqrt (num4);  
    cout << "The sum of all four numbers: " <<  sum;
    cout << "The average of all four number: " << aveOfSquares;
    return 0; 
}