#ifndef __NODE_CPP__
#define __NODE_CPP__

#include <iostream>

class Node
{
private:
  int value;
  Node* left;
  Node* right;

public:
  Node();
  ~Node();
  int getVal();
  Node* getLeft();
  void setLeft(Node *left);
  Node* getRight();
  void setRight(Node *right);
  void setVal(int val);
};

#endif // __NODE_HPP__