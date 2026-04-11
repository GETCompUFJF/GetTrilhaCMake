#ifndef __TREE_HPP__
#define __TREE_HPP__
#include "node.hpp"

class Tree
{
    private:
        Node *root;
        void auxPrint(Node *p);

    public:
        Tree();
        ~Tree();
        Node* getRoot();
        void createTree(int val, Tree* left, Tree* right);
        bool isEmpty();
        void print();
};

#endif // __TREE_HPP__