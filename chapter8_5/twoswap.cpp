#include <iostream>
//
// Created by tiger on 2025/1/14.
//
template <typename T> void swap(T &a, T &b);

struct job {
  char name[40];
  double salary;
  int floor;
};

template<> void swap<job>(job &j1, job &j2);

void show(job& j);

int main(int argc, char *argv[]) {
  std::cout.precision(2);
  std::cout.setf(std::ios::fixed, std::ios::floatfield);
  int i = 10, j = 20;
  std::cout << "i, j = " << i << ", " << j << ".\n";
  std::cout << "Using compiler-generated int swapper:\n";
  swap(i, j);
  std::cout << "Now i, j = " << i << "," << j << ".\n";

  job sue = {"Susan Yaffee", 73000.7, 7};
  job sidney = {"Sidney Taffee", 79877.0, 9};
  std::cout << "Before job swapping:\n";
  show(sue);
  show(sidney);

  swap(sue, sidney);
  std::cout << "After job swapping:\n";
  show(sue);
  show(sidney);

  return 0;
}

template <typename T> void swap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template <> void swap<job>(job &j1, job &j2) {
  double t1;
  int t2;
  t1 = j1.salary;
  j1.salary = j2.salary;
  j2.salary = t1;
  t2 = j1.floor;
  j1.floor = j2.floor;
  j2.floor = t2;
}

void show(job &j) {
  std::cout << j.name << ": $" << j.salary << " on floor " << j.floor << std::endl;
}

