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
    FinanceNode parent;
    std::vector<FinanceNode> children;
    
    std::string getName();
    std::string setName(std::string name);
    int getAmount();
    int setAmount(int amount);
    int getReps();
    int setReps(int repetitions);    

    FinanceNode();
    ~FinanceNode();
    FinanceNode(FinanceNode&& other);
    FinanceNode(const FinanceNode& other);
    FinanceNode& operator=(const FinanceNode& other);
    FinanceNode& operator=(FinanceNode&& other);
}


#endif
