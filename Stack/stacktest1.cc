#include <iostream>
#include "stack.h"

using namespace std;

int main() {
  int n,d;
  Stack
    s;

  cout << "Enter a positive integer: ";
  cin >> n;

  while (n) {
    d = n % 10;
    s.push(d);

    n /= 10;
  }

  while (!s.isEmpty()) {
    d = s.pop();
    cout << d << endl;
  }

  return 0;
}

