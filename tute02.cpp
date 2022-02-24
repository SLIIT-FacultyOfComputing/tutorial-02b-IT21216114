Y
/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
int main()
{ //main function begins program execution
   double salary, netSalary; //declaring variables
   int etype, otHrs, otRate; //declaring variables
  
  std::cout << "Enter Employee Type : "; //prompt employee tyep
  std::cin >> etype; //read employee type
  
  std::cout << "Enter Salary  : "; //prompt salary
  std::cin >> salary; //read salary
  
  std::cout << "Enter OtHrs : "; //prompt ot hours
  std::cin >> otHrs;  //read ot hours
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }

  netSalary = salary + otHrs* otRate; //calculation
   
  std::cout<<"Net Salary is "<<netSalary; //print
  
   return 0;
} //end of the main function