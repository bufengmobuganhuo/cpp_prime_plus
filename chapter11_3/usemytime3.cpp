#include <iostream>
//
// Created by tiger on 2025/1/23.
//
#include "mytime3.h"

int main(int argc, char *argv[]) {
  using std::cout;
  using std::endl;

  Time planning;
  Time coding(2, 40);
  Time fixing(5, 55);
  Time total;

  cout << "coding time = ";
  cout << coding << endl;

  cout << "fixing time = ";
  cout << fixing << endl;

  total = coding + fixing;
  cout << "total time = ";
  cout << total << endl;

  planning = 2 * coding;
  cout << "planning time = ";
  cout << planning << endl;
}
