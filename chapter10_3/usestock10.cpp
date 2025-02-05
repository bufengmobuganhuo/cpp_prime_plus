#include "../chapter10_2/stock00.h"
#include "stock10.h"

#include <iostream>
//
// Created by tiger on 2025/1/22.
//
int main(int argc, char *argv[]) {
  using std::cout;
  cout << "Using constructors to create new objects\n";
  Stock2 stock21 = Stock2("Boffo Objects", 2, 2.0);
  stock21.show();
  stock21.buy(2, 2.9);
  stock21.show();
  stock21.update(2.7);
  stock21.show();
  stock21.sell(1, 8.9);
  stock21.show();

  Stock2 stock22("NanoSmart", 123, 23.4);
  stock22.show();
}
