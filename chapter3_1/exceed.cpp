//
// Created by yuzhang on 2024/12/22.
//
#include <iostream>
#define ZERO 0
#include <climits>

int main(int argc, char *argv[]) {
    using  namespace  std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl << "Now ";
    sam += 1;
    sue += 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor sam" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\n" << endl;
    cout << "Take $1 from each account." << endl << "Now ";
    sam -= 1;
    sue -= 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\n" << endl << "Lucky Sue!" << endl;
    return 0;
}
