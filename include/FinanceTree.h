#ifndef __FINANCE_TREE_H__
#define __FINANCE_TREE_H__

#include <memory>

class FinanceNode;

class FinanceTree {
  public:
    FinanceNode* root;

    // construct/copy/move
    FinanceTree(FinanceNode* newRoot);
    ~FinanceTree();
    // For now, do not copy/move FinanceTree 
    FinanceTree(const FinanceTree& other)=default;
    FinanceTree(FinanceTree&& other)=default;
    FinanceTree& operator=(const FinanceTree& other)=default;
    FinanceTree& operator=(FinanceTree&& other)=default;
};

#endif
