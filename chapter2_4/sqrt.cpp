//
// Created by yuzhang on 2024/12/21.
//

#include <iostream>
using namespace std;

void simon(int);

int main()
{
    using namespace std;

    cout << "Pick an integer" << endl;

    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n)
{
    cout << "Simon says touch your toes " << n << " times." << endl;
}
