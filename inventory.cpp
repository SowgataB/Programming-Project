#include "inventory.h"
#include <iostream>
#include <stdexcept>
using namespace std;

void Inventory::addProduct(Product* product) {
    products.push_back(product);
}

void Inventory::removeProduct(string id) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if ((*it)->getID() == id) {
            delete* it;
            products.erase(it);
            return;
        }
    }
    throw invalid_argument("Product not found");
}

void Inventory::searchByCategory(string category) {
    for (Product* product : products) {
        if (product->getCategory() == category) {
            product->display();
        }
    }
}

void Inventory::searchByExactProduct(string name) {
    for (Product* product : products) {
        if (product->getName() == name) {
            product->display();
            return;
        }
    }
    throw invalid_argument("Product not found");
}

void Inventory::searchByPriceRange(float minPrice, float maxPrice) {
    for (Product* product : products) {
        if (product->getPrice() >= minPrice && product->getPrice() <= maxPrice) {
            product->display();
        }
    }
}

void Inventory::sellProduct(string id) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if ((*it)->getID() == id) {
            delete* it;
            products.erase(it);
            return;
        }
    }
    throw invalid_argument("Product not found");
}

void Inventory::addNewInventory() {
    string id, category, name, expDate;
    float price;

    cout << "Enter product ID: ";
    cin >> id;
    cout << "Enter product category: ";
    cin >> category;
    cout << "Enter product name: ";
    cin >> name;
    cout << "Enter product expiration date (YYYY-MM-DD): ";
    cin >> expDate;
    cout << "Enter product price: ";
    cin >> price;

    // Create a new product and add it to the inventory
    addProduct(new Product(id, category, name, expDate, price));
}
