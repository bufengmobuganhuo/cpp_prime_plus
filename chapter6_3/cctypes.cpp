#include <iostream>
//
// Created by tiger on 2025/1/2.
//
int main(int argc, char *argv[]) {
  std::cout << "Enter text for analysis, and type @ to terminate input.\n";

  char chr;
  int whitespace = 0;
  int digits = 0;
  int chars = 0;
  int punct = 0;
  int others = 0;

  std::cin.get(chr);
  while (chr != '@') {
    if (isalpha(chr)) {
      chars++;
    } else if (isspace(chr)) {
      whitespace++;
    } else if (isdigit(chr)) {
      digits++;
    } else if (ispunct(chr)) {
      punct++;
    } else {
      others++;
    }
    std::cin.get(chr);
  }

  std::cout << chars << " letters, " << whitespace << " whitespace, " << digits
            << " digits, " << punct << " puncts, " << others << " others.\n";
  return 0;
}
