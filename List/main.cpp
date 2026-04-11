#include "Stack.hpp"

int main() {
  Stack stack(10);
  stack.push(1);
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(5);
  stack.push(8);
  stack.push(13);
  stack.push(21);
  stack.push(34);
  stack.push(55);
  stack.print();

  return 0;
}