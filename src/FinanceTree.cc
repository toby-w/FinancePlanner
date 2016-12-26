#include <memory>
#include "../include/FinanceTree.h"
#include "../include/FinanceNode.h"

using namespace std;


FinanceTree::FinanceTree(FinanceNode* newRoot) {
    this->root = newRoot;
}


FinanceTree::~FinanceTree() {
    delete root;
}
