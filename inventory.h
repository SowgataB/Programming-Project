#pragma once
#include "product.h"
#include <vector>

using namespace std;

class Inventory {
private:
    vector<Product*> products;
public:
    void addProduct(Product* product);
    void removeProduct(string id);
    void searchByCategory(string category);
    void searchByExactProduct(string name);
    void searchByPriceRange(float minPrice, float maxPrice);
    void sellProduct(string id);
    void addNewInventory();
};


