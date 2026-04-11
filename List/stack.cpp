#include "Stack.hpp"
#include <iostream>

using namespace std;

Stack::Stack(int size) {
  max = size;
  last = -1;
  vet = new int[max];
}

Stack::~Stack() { 
    delete[] vet;
}

bool Stack::empty() {
    return (last == -1);
}

int Stack::top() {
  if (last != -1)
    return vet[last];
  else {
    cout << "ERROR: empty stack!" << endl;
    exit(1);
  }
}

void Stack::push(int val) {
  if (last == (max - 1)) {
    cout << "ERROR: Full Stack!" << endl;
    exit(2);
  }
  last = last + 1;
  vet[last] = val;
}

int Stack::pop() {
  if (last == -1) {
    cout << "ERROR: empty stack!" << endl;
    exit(1);
  }
  last = last - 1;
  return vet[last + 1];
}

void Stack::print() {
  if (last == -1) {
    cout << "ERROR: empty stack!" << endl;
    exit(1);
  }
  for (int i = 0; i <= last; i++) {
    cout << vet[i] << " ";
  }
  cout << endl;
}