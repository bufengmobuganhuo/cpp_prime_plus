//
// Created by tiger on 2025/1/23.
//
#include "mytime.h"

#include <iostream>

Time::Time() { hours = minutes = 0; }

Time::Time(int h, int m) {
  hours = h;
  minutes = m;
}

void Time::AddMin(int m) {
  hours += m / 60;
  minutes += m % 60;
}

void Time::AddHr(int h) { hours += h; }

void Time::Reset(int h, int m) {
  hours = h;
  minutes = m;
}

void Time::Show() const {
  std::cout << hours << " hours, " << minutes << " minutes";
}

Time Time::operator+(const Time &t) const {
  Time sum(0, 0);
  sum.hours = hours + t.hours;
  sum.minutes = (minutes + t.minutes) % 60;
  sum.hours = sum.hours + (minutes + t.minutes) / 60;
  return sum;
}

Time Time::operator-(const Time &t) const {
  Time diff;
  int tot1, tot2;
  tot1 = t.minutes + 60 * t.hours;
  tot2 = minutes + 60 * hours;
  diff.minutes = (tot2 - tot1) % 60;
  diff.hours = (tot2 - tot1) / 60;
  return diff;
}

Time Time::operator*(double mult) const {
  Time result;
  long totalminutes = hours * mult * 60 + minutes * mult;
  result.hours = totalminutes / 60;
  result.minutes = totalminutes % 60;
  return result;
}


