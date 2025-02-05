#include "../chapter9_3/namesp.h"
#include "mytime.h"

#include <iostream>
//
// Created by tiger on 2025/1/23.
//
int main(int argc, char *argv[]) {
  using std::cout;
  using std::endl;

  Time planning;
  Time coding(2, 40);
  Time fixing(5, 55);
  Time total;

  cout << "coding time = ";
  coding.Show();
  cout << endl;

  cout << "fixing time = ";
  fixing.Show();
  cout << endl;

  total = coding + fixing;
  cout << "total time = ";
  total.Show();
  cout << endl;

  planning = coding * 2.4;
  cout << "planning time = ";
  planning.Show();
  cout << endl;
}
