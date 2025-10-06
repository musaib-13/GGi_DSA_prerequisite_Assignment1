#include <iostream>
using namespace std;

int main() {
	
    float costPricePerDozen, sellingPricePerDozen;
    
    float costPricePerBanana, sellingPricePerBanana;
    
    float totalCostPrice, totalSellingPrice, profitOrLoss;

    
    cout << "Enter the cost price of bananas per dozen: ";
    cin >> costPricePerDozen;

    cout << "Enter the selling price of bananas per dozen: ";
    cin >> sellingPricePerDozen;

    
    costPricePerBanana = costPricePerDozen / 12;
    
    sellingPricePerBanana = sellingPricePerDozen / 12;

    
    totalCostPrice = costPricePerBanana * 25;
    
    totalSellingPrice = sellingPricePerBanana * 25;


    profitOrLoss = totalSellingPrice - totalCostPrice;

    
    if (profitOrLoss > 0) {
    	
        cout << "Profit earned: " << profitOrLoss << endl;
        
    } else if (profitOrLoss < 0) {
    	
        cout << "Loss incurred: " << -profitOrLoss << endl;
    } else {
    	
        cout << "No profit, no loss." << endl;
    }

    return 0;
}

