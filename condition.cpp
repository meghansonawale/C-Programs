#include <iostream>
using namespace std;

int main()
{
    int num; // Change to int to handle numeric input
    cin >> num; // Read integer input into num

    if (num > 32) {
        cout << "Pass" << endl;
    }
    else {
        cout<< "Fail" << endl;
    }
    return 0;
}
