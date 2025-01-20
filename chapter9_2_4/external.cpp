#include <iostream>
//
// Created by tiger on 2025/1/17.
//
using namespace std;
double warming = 0.3;
void update(double dt);
void local();

int main(int argc, char *argv[]) {
  std::cout << "Global warming is " << warming << " degrees.\n";
  update(0.1);
  cout << "Global warming is " << warming << " degrees.\n";
  local();
  cout << "Global warming is " << warming << " degrees.\n";
}


