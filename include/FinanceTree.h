#ifndef __FINANCE_TREE_H__
#define __FINANCE_TREE_H__

#include <memory>

class FinanceNode;

class FinanceTree {
    std::unique_ptr<FinanceNode> root;

  public:
    FinanceTree(std::unique_ptr<FinanceNode> newRoot);
    ~FinanceTree()=default;
    FinanceTree(const FinanceTree& other)=default;
    FinanceTree(FinanceTree&& other)=default;
    FinanceTree& operator=(const FinanceTree& other)=default;
    FinanceTree& operator=(FinanceTree&& other)=default;
}

#endif
