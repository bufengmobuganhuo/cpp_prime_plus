#include <iostream>
int main(int argc, char *argv[])
{
  using namespace std;
  char chr;
  int count = 0;
  cin.get(chr);
  while (!cin.fail())
  {
    cout << chr;
    ++count;
    cin.get(chr);
  }
  cout << endl << count << " characters read\n";
  return 0;
}