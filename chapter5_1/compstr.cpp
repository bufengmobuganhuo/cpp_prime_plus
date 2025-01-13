//
// Created by tiger on 2024/12/31.
//

#include<iostream>
#include<cstring>

int main(int argc, char *argv[])
{
  using namespace std;

  char word[5] = "?ate";
  for (char chr = 'a'; strcmp(word, "mate") != 0; chr++)
  {
    cout << word << endl;
    word[0] = chr;
  }
  cout << "After loop ends, word is " << word << endl;
  return 0;
}