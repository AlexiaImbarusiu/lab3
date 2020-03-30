//
// Created by a on 3/29/2020.
//

#include "Tree.h"
#include "Node.h"

Tree::Tree(){
    root= nullptr;
};

void Tree::insert(int key, Node* leaf){
    if(key < leaf->kn){
        if(leaf->left != NULL){
            insert(key, leaf->left);
        }else{
            leaf->left = new Node;
            leaf->left->kn = key;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
        }
    }else if(key >= leaf->kn){
        if(leaf->right != NULL){
            insert(key, leaf->right);
        }else{
            leaf->right = new Node;
            leaf->right->kn = key;
            leaf->right->right = NULL;
            leaf->right->left = NULL;
        }
    }

}
