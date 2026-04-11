#ifndef __STACK_HPP__
#define __STACK_HPP__

class Stack
{
private:
  int max;
  int last;
  int *vet;

public:
  Stack(int size);
  ~Stack();
  int top();
  void push(int val);
  int pop();
  bool empty();
  void print();
};

#endif // __STACK_HPP__