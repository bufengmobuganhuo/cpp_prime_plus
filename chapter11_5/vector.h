//
// Created by tiger on 2025/1/24.
//

#ifndef VECTOR_H
#define VECTOR_H
#include <ostream>

namespace VECTOR {

class Vector {
public:
  enum Mode {RECT, POL};
private:
  double x;
  double y;
  double mag;
  double ang;
  Mode mode;
  void set_mag();
  void set_ang();
  void set_x();
  void set_y();
public:
  Vector();
  Vector(double n1, double n2, Mode form = RECT);
  void reset(double n1, double n2, Mode form = RECT);
  ~Vector();

  double xval() const {return x;}
  double yval() const {return y;}
  double magval() const {return mag;}
  double angval() const {return ang;}
  void polar_mode() {mode = POL;};
  void rect_mode() {mode = RECT;};

  Vector operator+(const Vector &b) const;
  Vector operator-(const Vector &b) const;
  Vector operator-() const;
  Vector operator*(double n) const;

  friend Vector operator*(double n, const Vector &v);
  friend std::ostream & operator<<(std::ostream &os, const Vector &v);
};

} // VECTOR

#endif //VECTOR_H
