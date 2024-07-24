#include <iostream>
#include "product.h"
#include "inventory.h"

using namespace std;

int main() {
    Inventory inventory;
    inventory.addProduct(new Product("001", "Soda", "Coke", "2024-12-31", 1.99));
    inventory.addProduct(new Tobacco("002", "Tobacco", "Marlboro", "2024-12-31", 7.99, 2.50));
    inventory.addProduct(new LotteryTickets("003", "Lottery", "Powerball", "2024-12-31", 2.00, 0.50, 0.25));

    int choice;
    string input;
    float minPrice, maxPrice;

    do {
        cout << "1. Search Inventory\n2. Sell products\n3. Add new inventory\n4. Remove inventory\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter category: ";
            cin >> input;
            inventory.searchByCategory(input);
            break;
        case 2:
            cout << "Enter product ID to sell: ";
            cin >> input;
            try {
                inventory.sellProduct(input);
                cout << "Product sold successfully!\n";
            }
            catch (const invalid_argument& e) {
                cerr << e.what() << endl;
            }
            break;
        case 3:
            // Add new inventory
            inventory.addNewInventory();
            break;
        case 4:
            cout << "Enter product ID to remove: ";
            cin >> input;
            try {
                inventory.removeProduct(input);
                cout << "Product removed successfully!\n";
            }
            catch (const invalid_argument& e) {
                cerr << e.what() << endl;
            }
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
