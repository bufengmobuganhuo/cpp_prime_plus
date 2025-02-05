//
// Created by tiger on 2025/1/23.
//

#ifndef MYTIME_H
#define MYTIME_H

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
  Time operator+(const Time &t) const;
  Time operator-(const Time &t) const;
  Time operator*(double mult) const;
  void Show() const;
};

#endif // MYTIME_H
