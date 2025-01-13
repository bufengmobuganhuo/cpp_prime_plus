#include <iostream>
//
// Created by tiger on 2025/1/3.
//
long double probability(unsigned numbers, unsigned picks);

int main(int argc, char *argv[]) {
  double total, choices;
  std::cout << "Enter the total number of choices on the game card and\n"
            << "the number of picks allowed:\n";
  while ((std::cin >> total >> choices) && choices < total) {
    std::cout << "You have one chance in ";
    std::cout << probability(total, choices);
    std::cout << " of winning.\n";
    std::cout << "Next two numbers (q to quit): ";
  }
  std::cout << "bye\n";
  return 0;
}

long double probability(unsigned numbers, unsigned picks) {
  long double result = 1.0;
  long double n;
  unsigned p;

  for (n = numbers, p = picks; p > 0; n--, p--) {
    result = result * n / p;
  }
  return result;
}
