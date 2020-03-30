//
// Created by a on 3/26/2020.
//

#ifndef LAB3_NODE_H
#define LAB3_NODE_H
#include "Tree.h"

class Node {
    friend class Tree;
private:
    int kn;
    Node* left;
    Node* right;
protected:
    explicit Node(int n){
        kn = n;
        left=right=nullptr;
    }

};


#endif //LAB3_NODE_H
