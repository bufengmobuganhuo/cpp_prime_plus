#include <iostream>
//
// Created by tiger on 2025/1/17.
//
extern int tom;
static int dick = 10;
int harry = 200;

void remote_access() {
  std::cout << "remote_access() reports the following addresses:\n";
  std::cout << &tom << " = &tom, " << &dick << " = &dick, ";
  std::cout << &harry << " = &harry\n";
}