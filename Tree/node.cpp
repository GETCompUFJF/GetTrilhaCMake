#include  "node.hpp"

using namespace std;

Node:: Node() {
    value = 0;
    left = nullptr;
    right = nullptr;
}

Node:: ~Node() {
    delete left;
    delete right;
    value = 0;
}

int  Node::getVal(){
    return value;
}

Node* Node::getLeft(){
    return left;
}

void Node::setLeft(Node* left){
    this->left = left; 
}

Node* Node::getRight(){
    return right;
}
void Node::setRight(Node* right){
    this->right =  right;
}

void Node::setVal(int val){
    value = val;
}