#include <memory>
#include "FinanceTree.h"
#include "FinanceNode.h"

using namespace std;


FinanceTree::FinanceTree(unique_ptr<FinanceNode> newRoot) {
    this.root = newRoot;
}
