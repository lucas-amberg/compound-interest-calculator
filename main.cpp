#include <iostream>
#include <math.h>

//Gathers the input from the user depending on option 1, 2, or 3
//Option 1 gathers the initial investment amount
//Option 2 gathers the amount of interest
//Option 3 gathers the amount of years
double getInputFromUser(int choice)
{
  switch(choice)
  {
    case 1: //Initial investment
    {
      std::cout << "Please enter the initial investment amount: $";
      double x{};
      std::cin >> x;
      return x;
    }
    case 2: //Interest
    {
      std::cout << "Please enter the amount of interest (or gains) added each year (eg. 5 for 5% increase): ";
      double x{};
      std::cin >> x;
      return x;
    }
    case 3: //Amount of years
    {
      std::cout << "Please enter the amount of years for the calculation: ";
      double x{};
      std::cin >> x;
      return x;
    }
    case 4: //Compounding periods
    {
      std::cout << "Please enter the amount of compounding periods per year (eg. 1 for 1 per year, 4 for quarterly): ";
      double x{};
      std::cin >> x;
      return x;
    }
  }
  return 0.0;
}

void calculateValue(double investment, double interest, double years, double compoundingPeriods)
{
  double result {investment*pow(1.0+((0.01*interest)/compoundingPeriods), (compoundingPeriods*years))};
  std::cout << "The result for compounding " << investment << " at " << interest << "% interest for " << years << " years (compounded " << compoundingPeriods << " times a year) is:\n";
  std::cout << "$" << result << "\n";
}

int main()
{
  double investment{getInputFromUser(1)};
  double interest{getInputFromUser(2)};
  double years{getInputFromUser(3)};
  double compoundingPeriods{getInputFromUser(4)};
  
  calculateValue(investment, interest, years, compoundingPeriods);

  return 0;
}
