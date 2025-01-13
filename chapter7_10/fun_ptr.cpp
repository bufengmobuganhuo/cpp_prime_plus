#include <iostream>
//
// Created by tiger on 2025/1/9.
//
double betsy(int);
double pam(int);
void estimate(int lines, double (*pf) (int));

int main(int argc, char *argv[]) {
  int code = 0;
  std::cout << "How many lines of code do you need? ";
  std::cin >> code;
  std::cout << "Here's Betsy's estimate:\n";
  estimate(code, betsy);
  std::cout << "Here's Pam's estimate:\n";
  estimate(code, pam);
  return 0;
}

double betsy(int lns) {
  return 0.05 * lns;
}

double pam(int lns) {
  return 0.03 * lns + 0.004 * lns * lns;
}

void estimate(int lines, double (*pf)(int)) {
  std::cout << lines << " lines will take ";
  std::cout << (*pf)(lines) << " hour(s)\n";
}





