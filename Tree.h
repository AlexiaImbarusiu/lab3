//
// Created by a on 3/29/2020.
//

#ifndef LAB3_TREE_H
#define LAB3_TREE_H
#include "Node.h"

class Tree {
    friend class Node;
public:

    Node* root;
    Tree();
    void insert(int key, Node*leaf);
};


#endif //LAB3_TREE_H
