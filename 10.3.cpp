#include <iostream>
using namespace std;
void swap(int &x, int &y) {
    int temp;
    temp = x; // This line uses the value of the variable referenced by x
    x = y;    // This line changes the value of the variable referenced by x (m)
    y = temp; // This line changes the value of the variable referenced by y (n)
}

int main() {
    int m = 250, n = 300;
  swap(m, n);

  cout << "value of m is " << m << endl;
    cout << "value of n is " << n << endl;

    return 0;
}
