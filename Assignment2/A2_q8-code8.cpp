#include <iostream>

using namespace std;

int main() {
    double purchaseAmount;
    
    cout << "Enter the total purchase amount: $";
    cin >> purchaseAmount;

    double discount = 0.0;

    if (purchaseAmount < 50) {
        discount = 0.0;
    } else if (purchaseAmount >= 50 && purchaseAmount < 100) {
        discount = 0.1; 
    } else if (purchaseAmount >= 100 && purchaseAmount < 200) {
        discount = 0.15;
    } else {
        discount = 0.2; 
    }

    double totalCost = purchaseAmount - (purchaseAmount * discount);

    cout << "Discount applied: " << (discount * 100) << "%\n";
    cout << "Total cost after discount: $" << totalCost << endl;

    return 0;
}
