#include <iostream>
#include <string>
#include "../include/FinanceTreeDelegate.h"
#include "../include/FinanceTree.h"
#include "../include/FinanceNode.h"

using namespace std;


int main(int argc, char** argv) {
    FinanceTreeDelegate ftd = FinanceTreeDelegate();
    ftd.addNode("Assets", 1000, 1, nullptr);
    ftd.deleteNode(ftd.tree->root);
}
