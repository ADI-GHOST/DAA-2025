#include <iostream>
using namespace std;

int main() {
    float costPrice, sellingPrice;
    cin >> costPrice >> sellingPrice;

    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        float profitPercent = (profit / costPrice) * 100;
        cout << "Profit Percentage: " << profitPercent << "%";
    } else if (costPrice > sellingPrice) {
        float loss = costPrice - sellingPrice;
        float lossPercent = (loss / costPrice) * 100;
        cout << "Loss Percentage: " << lossPercent << "%";
    } else {
        cout << "No Profit No Loss";
    }

    return 0;
}
