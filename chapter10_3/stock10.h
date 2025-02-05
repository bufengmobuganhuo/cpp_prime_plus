//
// Created by tiger on 2025/1/22.
//

#ifndef STOCK10_H
#define STOCK10_H
#include <string>
class Stock2 {
private:
  std::string company;
  long shares;
  double share_val;
  double total_val;
  void set_tot() {
    total_val = shares * share_val;
  }
public:
  Stock2();
  Stock2(const std::string & co, long n = 0, double pr = 0);
  ~Stock2();
  void buy(long num, double price);
  void sell(long num, double price);
  void update(double price);
  void show();
};
#endif //STOCK10_H
