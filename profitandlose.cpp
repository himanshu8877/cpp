#include <iostream>
using namespace std;

int main() {
    double costPrice, sellingPrice, profit, loss, percentage;

    cout << "Enter Cost Price: ";
    cin >> costPrice;

    cout << "Enter Selling Price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;
        cout << "Profit = " << profit << endl;
        cout << "Profit Percentage = " << percentage << "%" << endl;
    }
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;
        cout << "Loss = " << loss << endl;
        cout << "Loss Percentage = " << percentage << "%" << endl;
    }
    else {
        cout << "No Profit, No Loss." << endl;
    }

    return 0;
}
