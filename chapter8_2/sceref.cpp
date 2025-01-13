#include <iostream>
//
// Created by tiger on 2025/1/10.
//
int main(int argc, char *argv[]) {
  int rats = 101;
  int & rodents = rats;

  std::cout << "rats = " << rats;
  std::cout << ", rodents = " << rodents << std::endl;

  std::cout << "rats address = " << &rats;
  std::cout << ", rodents addres = " << &rodents << std::endl;

  int bunnies = 50;
  rodents = bunnies;
  std::cout << "bunnies = " << bunnies;
  std::cout << ", rats = " << rats;
  std::cout << ", rodents = " << rodents << std::endl;

  std::cout << "bunnies address = " << &bunnies;
  std::cout << ", rodents address = " << &rodents << std::endl;
  return 0;
}
