#include <memory>
#include "../include/FinanceTree.h"
#include "../include/FinanceNode.h"

using namespace std;


FinanceTree::FinanceTree(unique_ptr<FinanceNode> newRoot) {
    this.root = newRoot;
}
