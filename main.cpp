#include <iostream>
#include "Tree.h"
#include <assert.h>

int main() {
    Tree arb;
    arb.insert(2, arb.root);
    arb.insert(3,arb.root);
    arb.insert(5,arb.root);
    arb.insert(8,arb.root);
    arb.insert(7,arb.root);
    return 0;
}
