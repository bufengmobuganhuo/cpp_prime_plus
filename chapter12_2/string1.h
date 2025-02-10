//
// Created by tiger on 2025/2/5.
//

#ifndef STRING1_H
#define STRING1_H
#include <ostream>

class String {
private:
  char *str;
  int len;
  static int num_strings;
  static const int CINLIM = 80;
public:
  String(const char *s);
  String();
  String(const String &);
  ~String();
  int length() const {
    return len;
  }

  String & operator=(const String &);
  String & operator=(const char *);
  char & operator[](int i);
  const char & operator[](int i)const;

  friend bool operator<(const String &st, const String &st2);
  friend bool operator>(const String &st, const String &st2);
  friend bool operator==(const String &st, const String &st2);
  friend std::ostream & operator<<(std::ostream &os, const String &st);
  friend std::istream &operator>>(std::istream &is, String &st);

  static int HowMany();
};



#endif //STRING1_H
