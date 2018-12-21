#include <iostream>
#include "stack.h"

using namespace std;

int main() {
  char
    line[80];
  int
    i;
  Stack
    s;

  cout << "Enter a parenthesis string: ";
  cin >> line;

  for (i=0;line[i] != 0;i++)
    if (line[i] == '(')
      s.push('(');
    else if (line[i] == ')')
      try {
        s.pop();
      } catch (ContainerEmptyException e) {
        cout << "Error: close parenthesis without matching open" << endl;
        return 1;
      }
    else {
      cout << "Invalid character '" << line[i] << "'" << endl;
      return 1;
    }

  if (s.isEmpty())
    cout << "Parentheses are balanced" << endl;
  else
    cout << "Error: open parenthesis without matching close" << endl;

  return 0;
}

