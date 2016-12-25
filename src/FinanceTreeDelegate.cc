#include <memory>
#include "FinanceTreeDelegate.h"
#include "FinanceNode.h"

using namespace std;


void FinanceTreeDelegate::addNode(string name, int amount, int repetitions) {
    if (tree->root == nullptr) {
        tree->root = unique_ptr<FinanceNode>(new FinanceNode(name, amount, repetitions)); 
    } else {
        // find the leaf of the tree and add a child to it
}


void FinanceTreeDelegate::deleteNode() {

}


FinanceTreeDelegate::FinanceTreeDelegate() {
    this.tree = unique_ptr<FinanceTree>(nullptr);
}
