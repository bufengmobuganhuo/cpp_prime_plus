#include <iostream>
//
// Created by tiger on 2025/1/13.
//
const int ArSize = 80;
char * left(const char * str, int n = 1);

int main(int argc, char *argv[]) {
  char sample[ArSize];
  std::cout << "Enter a string:\n";
  std::cin.get(sample, ArSize);
  char * ps = left(sample, 4);
  std::cout << ps << std::endl;
  delete []ps;

  ps = left(sample);
  std::cout << ps << std::endl;
  delete []ps;
  return 0;
}

char *left(const char *str, int n) {
  if (n < 0) {
    n = 0;
  } else if (n > strlen(str)) {
    n = strlen(str);
  }
  char *p = new char[n + 1];
  for (int i = 0; i < n; ++i) {
    p[i] = str[i];
  }
  return p;
}

