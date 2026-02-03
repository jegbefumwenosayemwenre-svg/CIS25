#include <iostream>
#include <string>
using namespace std;

int main()
{
    // sample test input:
    // item name: apple
    // quantity: 3
    // cost per item: 1.25

    string itemName;
    int quantity;
    float cost;
    float totalCost;

    cout << "Enter item name: ";
    cin >> itemName;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter cost per item: ";
    cin >> cost;

    totalCost = quantity * cost;

    cout << "\nTotal cost for " << itemName << ": $"
         << totalCost << endl;

    return 0;
}

