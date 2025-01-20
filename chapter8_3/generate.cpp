#include <__fwd/string.h>
#include <iostream>
#include <string>
//
// Created by tiger on 2025/1/14.
//
int main(int argc, char *argv[]) {
  std::string str = "";
  for (int i = 1; i < 1001; ++i) {
    str += i;
    if (i != 1000) {
      str += ",";
    }
  }
  std::cout << str;
}
