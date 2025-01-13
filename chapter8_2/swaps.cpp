#include <iostream>
//
// Created by tiger on 2025/1/10.
//
void swapr(int & a, int & b);
void swapp(int *a, int *b);
void swapv(int a, int b);

int main(int argc, char *argv[]) {
  int wallet1 = 300;
  int wallet2 = 350;

  std::cout << "wallet1 = $" << wallet1;
  std::cout << "wallet2 = $" << wallet2 << std::endl;

  std::cout << "Using references to swap contents:\n";
  swapr(wallet1, wallet2);
  std::cout << "wallet1 = $" << wallet1;
  std::cout << "wallet2 = $" << wallet2 << std::endl;

  std::cout << "Using pointers to swap contents:\n";
  swapp(&wallet1, &wallet2);
  std::cout << "wallet1 = $" << wallet1;
  std::cout << "wallet2 = $" << wallet2 << std::endl;

  std::cout << "Using value to swap contents:\n";
  swapv(wallet1, wallet2);
  std::cout << "wallet1 = $" << wallet1;
  std::cout << "wallet2 = $" << wallet2 << std::endl;
}

void swapr(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void swapp(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void swapv(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
}


