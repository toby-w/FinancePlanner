#include <string>
#include <memory>
#include "../include/FinanceTreeDelegate.h"
#include "../include/FinanceTree.h"
#include "../include/FinanceNode.h"

using namespace std;


// requires: parent is a valid FinanceNode within tree
void FinanceTreeDelegate::addNode(string name, int amount, int repetitions,
                                  FinanceNode* parent) {
    if (tree->root == nullptr) {
        tree->root = make_unique<FinanceNode>(new FinanceNode(name, amount, 
                                                              repetitions, nullptr)); 
    } else {
        parent->children.emplace_back(new FinanceNode(name, amount, repetitions, parent));
    }
}


// requires: node is valid FinanceNode within tree
void FinanceTreeDelegate::deleteNode(FinanceNode* node) {
    delete node;
}


FinanceTreeDelegate::FinanceTreeDelegate() {
    this.tree = make_unique<FinanceTree>(new FinanceTree(nullptr));
}
