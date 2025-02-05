//
// Created by tiger on 2025/1/23.
//

#ifndef MYTIME3_H
#define MYTIME3_H
#include <ostream>

class Time {
private:
  int hours;
  int minutes;
public:
  Time();
  Time(int h, int m = 0);
  void AddMin(int m);
  void AddHr(int h);
  void Reset(int h = 0, int m = 0);
  Time operator+(Time &t) const;
  Time operator-(Time &t) const;
  Time operator*(double n) const;
  friend Time operator*(double n, const Time &t) {
    return t * n;
  }
  friend std::ostream & operator<<(std::ostream &os, const Time &t);
};

#endif //MYTIME3_H
