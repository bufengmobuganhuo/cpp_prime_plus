#include "namesp.h"

#include <iostream>
//
// Created by tiger on 2025/1/20.
//
void other(void);
void another(void);
int main(void) {
  using debts::Debt;

  using debts::showDebt;
  Debt golf = {{"Benny", "Goatsniff"}, 120.0};
  showDebt(golf);
  other();
  another();
  return 0;
}

void other() {
  using std::cout;
  using std::endl;
  using namespace debts;
  Person dg = {"Doodles", "Glister"};
  showPerson(dg);
  cout << endl;
  Debt zippy[3];
  int i;
  for (int i = 0; i < 3; ++i) {
    getDebt(zippy[i]);
  }
  for (int i = 0; i < 3; ++i) {
    showDebt(zippy[i]);
  }
  cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
}

void another() {
  using pers::Person;
  Person collector = {"Milo", "Rightshitf"};
  showPerson(collector);
  std::cout << std::endl;
}

