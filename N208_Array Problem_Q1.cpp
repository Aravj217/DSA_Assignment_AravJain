#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of prices: ";
    cin >> n; // read no of prices in integer as count
    int prices[n]; // array to store prices
    cout << "Enter prices separated by spaces: ";
    for(int i = 0; i < n; i++) {
        cin >> prices[i]; // read each price
    }
    int minPrice = prices[0]; // minimum price so far
    int maxProfit = 0;        // maximum profit
    int buyDay = 1;           // day to buy
    int sellDay = 1;          // day to sell
    int tempBuyDay = 1;       // temporary buy day tracker
    for(int i = 1; i < n; i++) {  //Use for loop iterate through all days starting from second day
        if(prices[i] < minPrice) {
            minPrice = prices[i]; // update minimum price
            tempBuyDay = i + 1;   // potential buy day
        } else {
            int profit = prices[i] - minPrice; // calculate profit
            if(profit > maxProfit) {
                maxProfit = profit;   // update maximum profit
                buyDay = tempBuyDay;  // update buy day
                sellDay = i + 1;      // update sell day
            }
        }
    }
    cout << "Maximum Profit: " << maxProfit << endl;
    if(maxProfit > 0) {
        cout << "Buy on day " << buyDay << " (price = " << prices[buyDay-1] << ") ";
        cout << "and sell on day " << sellDay << " (price = " << prices[sellDay-1] << ")" << endl;
    } else {
        cout << "No profitable transaction possible." << endl;
    }
    return 0;
}
