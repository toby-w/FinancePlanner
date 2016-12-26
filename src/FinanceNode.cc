#include <vector>
#include <string>
#include "../include/FinanceNode.h"

using namespace std;


string FinanceNode::getName() {
    return name;
} 


string FinanceNode::setName(string newName) { 
    name = newName; return newName;
}


int FinanceNode::getAmount() {
    return amount;
}


int FinanceNode::setAmount(int newAmount) {
    amount = newAmount;
    return newAmount;
}


int FinanceNode::getReps() {
    return repetitions;
}


int FinanceNode::setReps(int newRepetitions) {
    repetitions = newRepetitions;
    return newRepetitions;
}


FinanceNode::FinanceNode(string name, int amount, int repetitions,
                         FinanceNode* parent) {
    this->name = name;
    this->amount = amount;
    this->repetitions = repetitions;
    this->parent = parent;
}


FinanceNode::~FinanceNode() {
    // Delete all the children
    for (auto it = children.begin(); it != children.end(); ++it) {
        delete *it;
    }

    // Delete this node from the parent's list of children
    if (parent != nullptr) {
        for (auto it = parent->children.begin(); it != parent->children.end(); ++it) {
            if (this == *it) {
                parent->children.erase(it);
                break;
            } // if
        } // for
    } // if
}
