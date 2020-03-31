//
// Created by a on 3/29/2020.
//

#include "Tree.h"
#include "Node.h"

Tree::Tree(){
    root = nullptr;
}

void Tree::insert(int key, Node* leaf){
    if(key < leaf->kn){
        if(leaf->left != nullptr){
            insert(key, leaf->left);
        }else{
            leaf->left = new Node(key);
            leaf->left->kn = key;
            leaf->left->left = nullptr;
            leaf->left->right = nullptr;
        }
    }else if(key >= leaf->kn){
        if(leaf->right != nullptr){
            insert(key, leaf->right);
        }else{
            leaf->right = new Node(key);
            leaf->right->kn = key;
            leaf->right->right = nullptr;
            leaf->right->left = nullptr;
        }
    }

}

int Tree::countnode(Node *k) {
    if (k == nullptr)
        return 0;
    else
        //if(n->links != nullptr)
        return 1 + countnode(k->left) + countnode(k->right);
}
