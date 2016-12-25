#ifndef __FINANCE_TREE_DELEGATE_H__
#define __FINANCE_TREE_DELEGATE_H__

#include <string>
#include <memory>

class FinanceTree;

class FinanceTreeDelegate {
    std::unique_ptr<FinanceTree> tree;

  public:
    // requires: parent is a valid FinanceNode within tree
    void addNode(std::string name, int amount, int repetitions,
                 FinanceNode* parent);
    // requires: node is a valid FinanceNode within tree
    void deleteNode(FinanceNode* node); 

    // construct/copy/move
    FinanceTreeDelegate();
    // For now, do not copy/move FinanceTreeDelegate
    ~FinanceTreeDelegate()=default;
    FinanceTreeDelegate(const FinanceTreeDelegate& other)=default;
    FinanceTreeDelegate(FinanceTreeDelegate&& other)=default;
    FinanceTreeDelegate& operator=(const FinanceTreeDelegate& other)=default;
    FinanceTreeDelegate& operator=(FinanceTreeDelegate&& other)=default;
}

#endif
