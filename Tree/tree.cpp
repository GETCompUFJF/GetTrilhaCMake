#include "tree.hpp"
#include <iostream>

using namespace std;

Tree::Tree()
{
    root = nullptr;
}

Tree::~Tree(){

}

Node* Tree::getRoot(){
    return root;
}

void  Tree::createTree(int val, Tree* left, Tree* right){
    Node *p = new Node();
    p->setVal(val);
    p->setLeft(left->getRoot());
    p->setRight(right->getRoot());
    root = p;
}

bool  Tree::isEmpty(){
    return root == nullptr;
}

void  Tree::print(){
    auxPrint(root);
    cout << endl;
}

void Tree::auxPrint(Node *p){
    if(p != nullptr){
        cout << p->getVal() << " ";
        auxPrint(p->getLeft());
        auxPrint(p->getRight());
    }
}