#include "Stack.h"

#include <iostream>
//
// Created by tiger on 2025/1/22.
//
int main(int argc, char *argv[]) {
  using namespace std;
  Stack st;
  char ch;
  unsigned long po;
  cout << "Please enter A to add a purchase order,\n" << "P to process a PO, or Q to quit.\n";
  while (cin >> ch && toupper(ch) != 'Q') {
    while (cin.get() != '\n') {
      continue;
    }
    if (!isalpha(ch)) {
      cout << '\n';
      continue;
    }
    switch (ch) {
    case 'A':
    case 'a':
      cout << "Enter a PO number to add: ";
      cin >> po;
      if (st.isfull()) {
        cout << "Stack already full\n";
      } else {
        st.push(po);
      }
      break;
    case 'P':
    case 'p':
      if (st.isempty()) {
        cout << "stack already empty\n";
      } else {
        st.pop(po);
        cout << "PO #" << po << " popped\n";
      }
      break;
    }
    cout << "Please enter A to add a purchase order,\n" << "P to process a PO, or Q to quit.\n";
  }
  cout << "Bye\n";
  return 0;
}
