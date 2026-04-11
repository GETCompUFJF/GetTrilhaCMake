#include "tree.hpp"

int main()
{
    Tree *t1 = new Tree();
    Tree *t2 = new Tree();
    Tree *t3 = new Tree();
    Tree *t4 = new Tree();
    Tree *t5 = new Tree();

    t5->createTree(5, new Tree(), new Tree());
    t4->createTree(4, new Tree(), new Tree());
    t3->createTree(3, new Tree(), new Tree());
    t2->createTree(2, t4, t5);
    t1->createTree(1, t2, t3);

    t1->print();

    delete t1;
    delete t2;
    delete t3;
    delete t4;
    delete t5;

    return 0;
}