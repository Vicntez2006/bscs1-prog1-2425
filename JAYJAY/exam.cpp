#include <iostream>
using namespace std;

int main() {

    string FirstName, LastName;
    
    int BirthYear, prelim, midterm, prefinal, finalGrade;
    double average;


    cout << " This was a Prelim Exam!" << endl;
    cout << "" << endl;
    
    cout << "First Name: ";
    cin >> FirstName;
    
    cout << "Last Name: ";
    cin >> LastName;
    
    cout << "Birth Year: ";
    cin >> BirthYear;


    int age = 2024 - BirthYear;
    cout << "hi, " << FirstName << " " << LastName << ", you are " << age << " years old today." << endl;
    cout << "" << endl;


    cout << "Please enter your Grades!" << endl;
    cout << "" << endl;
    cout << "Prelim: ";
    cin >> prelim;
    cout << "Midterm: ";
    cin >> midterm;
    cout << "Prefinal: ";
    cin >> prefinal;
    cout << "Final: ";
    cin >> finalGrade;

    average = (prelim + midterm + prefinal + finalGrade) / 4.0;


    cout << "Your average will be: " << average << endl;
    cout << "" << endl;

    int num = (average);
   int num1 = (num);
   float num2 = (num1);
   
   
      if (num >= 50 && num <= 100){
           cout << "CONGRATULATIONS! You Passed!" << endl;
      } else {
           cout << "CONGRATULATIONS YOU DID YOUR BEST! BUT YOU FAILED!" << endl;     
      }
      
            if(num1 >= 97 && num1 <= 100){
                 cout << "You got a 1.00 Grade Point!" << endl;
            } else if(num1 >= 94 && num1 <= 95){
                 cout << "You got a 1.25 Grade Point!" << endl;
            } else if(num1 >= 86 && num1 <= 90){
                 cout << "You got a 1.50 Grade Point!" << endl;
            } else if(num1 >= 83 && num1 <= 85){
                 cout << "You got a 1.75 Grade Point!" << endl;
            } else if(num1 >= 77 && num1 <= 80){
                 cout << "You got a 2.00 Grade Point!" << endl;
            } else if(num1 >= 70 && num1 <= 73){
                 cout << "You got a 2.25 Grade Point!" << endl;   
            } else if(num1 >= 63 && num1 <= 67){
                 cout << "You got a 2.50 Grade Point!" << endl;
            } else if(num1 >= 56 && num1 <= 61){
                 cout << "You got a 2.75 Grade Point!" << endl;
            } else if(num1 >= 50 && num1 <= 55){
                 cout << "You got a 3.00 Grade Point!" << endl;
            } else { 
                 cout << "You got a 5.00 Grade Point!" << endl;
            }     
      
       
      cout << " " <<endl;
      
      if (num2 >= 96 && num2 <= 100){
          cout << "EXCELLENT!" << endl;
      } else if (num2 >= 91 && num2 <= 95){
          cout << "VERY GOOD!" << endl;
      } else if (num2 >= 86 && num2 <= 90){
          cout << "VERY GOOD!" << endl;
      } else if (num2 >= 81 && num2 <= 85){
          cout << "GOOD!" << endl;
      } else if (num2 >= 75 && num2 <= 80){
          cout << "GOOD!" << endl;
      } else if (num2 >= 69 && num2 <= 74) {
          cout << "GOOD!" << endl;
      } else if (num2 >= 63 && num2 <= 68){
          cout << "FAIR!" << endl;
      } else if (num2 >= 57 && num2 <= 62){
          cout << "FAIR!" << endl;
      } else if (num2 >= 50 && num2 <= 56){
          cout << "FAIR!" << endl;
      } else {  
          cout << "FAILED!" << endl;
      }
    return 0;
}
