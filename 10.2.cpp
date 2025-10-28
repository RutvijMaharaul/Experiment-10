#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp; // Using 'temp' instead of 'swap' to avoid shadowing the function name
    
  temp = *x; 
    
   *x = *y;
    
 *y = temp;
}

int main() {
    int x = 500, y = 100;

  swap(&x, &y); 

   cout << "value of x is " << x << endl;
    cout << "value of y is " << y << endl;

    return 0;
}
