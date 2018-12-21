#ifndef _STACK_H
#define _STACK_H

#include <exceptions.h>

const int STACK_SIZE = 16;

//typedef int StackType;
//typedef char StackType;

template <typename T>
class Stack {
 public:
  template <typename T>
  Stack();
  template <typename T>
  ~Stack() { }
  template <typename T>
  void clear();

  template <typename T>
  bool isEmpty();
  template <typename T>
  int size();

  template <typename T>

  void push(T d);
  template <typename T>
  T pop();
  template <typename T>
  T peek();

 private:
  T
    data[STACK_SIZE];
  int
    top;
};

#endif

