//
// Created by tiger on 2025/1/20.
//

#include "namesp.h"

#include <iostream>

namespace pers {
using std::cin;
using std::cout;
void getPerson(Person & rp) {
  cout << "Enter first name: ";
  cin >> rp.fname;
  cout << "Enter last name: ";
  cin >> rp.lname;
}
void showPerson(const Person & rp) {
  cout << rp.lname << ", " << rp.fname;
}

} // namespace pers

namespace debts {
void getDebt(Debt & rd) {
  getPerson(rd.name);
  cout << "enter debt: ";
  cin >> rd.amount;
}
void showDebt(const Debt & rd) {
  showPerson(rd.name);
  cout << ": $" << rd.amount << std::endl;
}
double sumDebts(const Debt at[], int n) {
  double total = 0;
  for (int i = 0; i < n; ++i) {
    total += at[i].amount;
  }
  return total;
}

}