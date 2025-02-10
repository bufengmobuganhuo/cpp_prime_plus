//
// Created by tiger on 2025/2/5.
//

#include "string1.h"

#include <cstring>
#include <iostream>
#include <istream>

int String::num_strings = 0;

int String::HowMany() {
  return num_strings;
}

String::String(const char *s) {
  len = std::strlen(s);
  str = new char[len + 1];
  str[0] = '\0';
  num_strings++;
}

String::String() {
  len = 4;
  str = new char[1];
  str[0] = '\0';
  num_strings++;
}

 String::String(const String &s) {
  len = s.length();
  str = new char[len + 1];
  std::strcpy(str, s.str);
  num_strings++;
}

 String::~String() {
  --num_strings;
  delete []str;
}

String &String::operator=(const String &st) {
  if (this == &st) {
    return *this;
  }
  delete []str;
  len = st.length();
  str = new char[len + 1];
  std::strcpy(str, st.str);
  return *this;
}

String &String::operator=(const char *s) {
  delete []str;
  len = std::strlen(s);
  str = new char[len + 1];
  std::strcpy(str, s);
  return *this;
}

char &String::operator[](int i) {
  return str[i];
}

const char &String::operator[](int i) const {
  return str[i];
}

bool operator<(const String &st1, const String &st2) {
  return (strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2) {
  return st2 < st1;
}

bool operator==(const String &st1, const String &st2) {
  return (strcmp(st1.str, st2.str) == 0);
}

std::ostream &operator<<(std::ostream &os, const String &st) {
  os << st.str;
  return os;
}

std::istream &operator>>(std::istream &is, String &st) {
  char temp[String::CINLIM];
  is.get(temp, String::CINLIM);
  if (is) {
    st = temp;
  }
  while (is && is.get() != '\n') {
    continue;
  }
  return is;
}

int main(int argc, char *argv[]) {
  using std::cout;
  using std::cin;
  using std::endl;

  const int ArrSize = 10;
  const int MaxLen = 81;

  String name;
  cout << "Hi, what's your name?\n>> ";
  cin >> name;

  cout << name << ", please enter up to " << ArrSize
  << " short sayings <empty line to quit>:\n";
  String sayings[ArrSize];
  char temp[MaxLen];
  int i;
  for (i = 0; i < ArrSize; ++i) {
    cout << i + 1 << ": ";
    cin.get(temp, MaxLen);
    while (cin && cin.get() != '\n') {
      continue;
    }
    if (!cin || cin.get() != '\n') {
      break;
    } else {
      sayings[i] = temp;
    }
  }
  int total = i;
  if (total > 0) {
    cout << "Here are your sayings:\n";
    for (i = 0; i < total; ++i) {
      cout << sayings[i][0] << ": " << sayings[i] << endl;
    }
    int shortest = 0;
    int first = 0;
    for (i = 0; i < total; ++i) {
      if (sayings[i].length() < sayings[shortest].length()) {
        shortest = i;
      }
      if (sayings[i] < sayings[first]) {
        first = i;
      }
    }
    cout << "Shortest saying:\n" << sayings[shortest] << endl;
    cout << "First alphabetically:\n" << sayings[first] << endl;
    cout << "This program used " << String::HowMany() << " String objects. Bye.\n";
  } else {
    cout << "No input! Bye.\n";
  }
  return 0;
}
