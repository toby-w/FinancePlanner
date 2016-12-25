#ifndef __FINANCE_TREE_DELEGATE_H__
#define __FINANCE_TREE_DELEGATE_H__

#include <string>
#include <memory>

class FinanceTree;

class FinanceTreeDelegate {
    std::unique_ptr<FinanceTree> tree;

  public:
    void addNode(std::string name, int amount, int repetitions);
    void deleteNode(std::string name); // make sure two nodes cant have same name

    FinanceTreeDelegate();
    ~FinanceTreeDelegate()=default;
    FinanceTreeDelegate(const FinanceTreeDelegate& other)=default;
    FinanceTreeDelegate(FinanceTreeDelegate&& other)=default;
    FinanceTreeDelegate& operator=(const FinanceTreeDelegate& other)=default;
    FinanceTreeDelegate& operator=(FinanceTreeDelegate&& other)=default;
}

#endif
