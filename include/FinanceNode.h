#ifndef __FINANCE_NODE_H__
#define __FINANCE_NODE_H__

#include <vector>
#include <string>

class FinanceNode;

class FinanceNode {
    std::string name;
    int amount;
    int repetitions;

  public:
    FinanceNode* parent;
    std::vector<FinanceNode*> children;
    
    std::string getName();
    std::string setName(std::string newName);
    int getAmount();
    int setAmount(int newAmount);
    int getReps();
    int setReps(int newRepetitions);    

    // construct/copy/move
    FinanceNode(std::string name="", int amount=0, int repetitions=0,
                FinanceNode* parent=nullptr);
    ~FinanceNode();
    // For now, should not copy/move any FinanceNodes
    FinanceNode(FinanceNode&& other)=default;
    FinanceNode(const FinanceNode& other)=default;
    FinanceNode& operator=(const FinanceNode& other)=default;
    FinanceNode& operator=(FinanceNode&& other)=default;
};

#endif
