
// Name: Andrew Martin
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
int main()
{
// Identifing varibles
  std::string location;
  int days;
  double hotel;
  double meal;
  double total;
// The String for the questions
  std::cout << "What is the business trip location? ";
  std::cin >> location;
  std::cout << "How many days will the trip take? ";
  std::cin >> days;
  std::cout << "What is the total hotel expense? ";
  std::cin >> hotel;
  std::cout << "what is the total meal expense? ";
  std::cin >> meal;
  total = meal + hotel;
  // The insertion of dollars signs
  std::stringstream sshotel, ssmeal, sstotal;
  sshotel << std::setprecision(2) << std::fixed << '$' << hotel;
  ssmeal << std::setprecision(2) << std::fixed << '$' << meal;
  sstotal << std::setprecision(2) << std::fixed << '$' << total;

  std::cout << std::setw(15) << "location" << std::setw(6) << "days" << std::setw(10) << "hotel" << std::setw(10) << "meal" << std::setw(10) << "total" << "\n";
  std::cout << std::setw(15) << location << std::setw(6) << days << std::setw(10) << sshotel.str() << std::setw(10) << ssmeal.str() << std::setw(10) << sstotal.str() <<"\n";
}
