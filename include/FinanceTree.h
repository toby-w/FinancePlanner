#ifndef __FINANCE_TREE_H__
#define __FINANCE_TREE_H__

#include <memory>

class FinanceNode;

class FinanceTree {
    std::unique_ptr<FinanceNode> root;

  public:
    // construct/copy/move
    FinanceTree(std::unique_ptr<FinanceNode> newRoot);
    // For now, do not copy/move FinanceTree 
    ~FinanceTree()=default;
    FinanceTree(const FinanceTree& other)=default;
    FinanceTree(FinanceTree&& other)=default;
    FinanceTree& operator=(const FinanceTree& other)=default;
    FinanceTree& operator=(FinanceTree&& other)=default;
}

#endif
