#include <iostream>
//
// Created by tiger on 2025/1/6.
//
char* buildstr(char c, int n);

int main(int argc, char *argv[]) {
  int times;
  char chr;

  std::cout << "Enter a character: ";
  std::cin >> chr;
  std::cout << "Enter an integer: ";
  std::cin >> times;

  char* ps = buildstr(chr, times);
  std::cout << ps << std::endl;
  delete []ps;
  ps = buildstr('+', 20);
  std::cout << ps << "-DONE-" << ps << std::endl;
  delete []ps;
  return 0;
}

char *buildstr(char c, int n) {
  char * pstr = new char[n + 1];
  pstr[n] = '\0';
  while (n-- > 0) {
    pstr[n] = c;
  }
  return pstr;
}

