#include "stock00.h"
//
// Created by tiger on 2025/1/21.
//
int main(int argc, char *argv[]) {
  Stock fluffy_the_cat;
  fluffy_the_cat.acquire("NanoSmart", 20, 12.5);
  fluffy_the_cat.show();
  fluffy_the_cat.buy(15, 18.125);
  fluffy_the_cat.show();
  fluffy_the_cat.sell(400, 20.00);
  fluffy_the_cat.show();
}
