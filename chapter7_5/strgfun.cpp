#include <iostream>
#include <ostream>
//
// Created by tiger on 2025/1/6.
//
unsigned int c_in_str(const char* str, char ch);

int main(int argc, char *argv[]) {
  char mm[15] = "minumum";
  char* wail = "ululate";

  unsigned int ms = c_in_str(mm, 'm');
  unsigned int us = c_in_str(wail, 'u');

  std::cout << ms << "m characters in " << mm << std::endl;
  std::cout << us << "u characters in" << wail << std::endl;
}

unsigned int c_in_str(const char *str, char ch) {
  unsigned int count = 0;
  while (*str) {
    if (*str == ch) {
      count++;
    }
    str++;
  }
  return count;
}
