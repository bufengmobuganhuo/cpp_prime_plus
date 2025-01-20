#include <iostream>
//
// Created by tiger on 2025/1/17.
//
int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main(int argc, char *argv[]) {
  std::cout << "main() reports the following addresses.\n";
  std::cout << &tom << " = &tom, " << &dick << " = &dick, ";
  std::cout << &harry << " = &harry\n";
  remote_access();
  return 0;
}
