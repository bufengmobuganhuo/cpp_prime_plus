#include <fstream>
#include <iostream>
//
// Created by tiger on 2025/1/2.
//
int main(int argc, char *argv[]) {
  char automobile[50];
  int year;
  double a_price;
  double b_price;

  std::ofstream outfile;
  outfile.open("carinfo.txt");

  std::cout << "Enter the make and model of automobile: ";
  std::cin.getline(automobile, 50);
  std::cout << "Enter the model year: ";
  std::cin >> year;
  std::cout << "Enter the original asking price: ";
  std::cin >> a_price;

  b_price = 0.913 * a_price;

  std::cout << std::fixed;
  std::cout.precision(2);
  std::cout.setf(std::ios_base::showpoint);
  std::cout << "Make and model: " << automobile << std::endl;
  std::cout << "Year: " << year << std::endl;
  std::cout << "Was asking $" << a_price << std::endl;
  std::cout << "Now asking $" << b_price << std::endl;

  outfile << std::fixed;
  outfile.precision(2);
  outfile.setf(std::ios_base::showpoint);
  outfile << "Make and model: " << automobile << std::endl;
  outfile << "Year: " << year << std::endl;
  outfile << "Was asking $" << a_price << std::endl;
  outfile << "Now asking $" << b_price << std::endl;

  outfile.close();
  return 0;
}
