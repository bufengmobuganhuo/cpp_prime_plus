//
// Created by tiger on 2025/1/23.
//
#include "mytime3.h"

 Time::Time() {
   hours = 0;
   minutes = 0;
 }

 Time::Time(int h, int m) {
   hours = h;
   minutes = m;
 }

void Time::AddMin(int m) {
   minutes = minutes + m;
   hours += minutes / 60;
   minutes = minutes % 60;
 }

void Time::AddHr(int h) {
   hours += h;
 }

void Time::Reset(int h, int m) {
   hours = h;
   minutes = m;
 }

Time Time::operator-(Time &t) const {
   Time diff;
   int total1 = minutes + hours * 60;
   int total2 = t.minutes + t.hours * 60;
   diff.minutes = (total1 - total2) % 60;
   diff.hours = (total1 - total2) / 60;
   return diff;
 }

Time Time::operator+(Time &t) const {
   Time sum;
   sum.minutes = minutes + t.minutes;
   sum.hours = hours + t.hours + sum.minutes / 60;
   sum.minutes = sum.minutes % 60;
   return sum;
 }

Time Time::operator*(double n) const {
   Time result;
   long totalminutes = hours * n * 60 + minutes * n;
   result.hours = totalminutes / 60;
   result.minutes = totalminutes % 60;
   return result;
 }

std::ostream &operator<<(std::ostream &os, const Time &t) {
   os << t.hours << " hours, " << t.minutes << " minutes";
   return os;
 }






