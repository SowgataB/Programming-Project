#include "product.h"
#include <iostream>
#include <stdexcept>

Product::Product(std::string id, std::string category, std::string name, std::string expDate, float price)
    : ID(id), Category(category), Name(name), ExpDate(expDate), Price(price) {}

float Product::computePrice() {
    return Price;
}

void Product::display() {
    std::cout << "ID: " << ID << ", Category: " << Category << ", Name: " << Name
        << ", Exp Date: " << ExpDate << ", Price: " << Price << std::endl;
}

std::string Product::getID() {
    return ID;
}

std::string Product::getCategory() {
    return Category;
}

float Product::getPrice() {
    return Price;
}

Tobacco::Tobacco(std::string id, std::string category, std::string name, std::string expDate, float price, float specialTax)
    : Product(id, category, name, expDate, price), SpecialTax(specialTax) {}

float Tobacco::computePrice() {
    return Price + SpecialTax;
}

LotteryTickets::LotteryTickets(std::string id, std::string category, std::string name, std::string expDate, float price, float cityTax, float countyTax)
    : Product(id, category, name, expDate, price), CityTax(cityTax), CountyTax(countyTax) {}

float LotteryTickets::computePrice() {
    return Price + CityTax + CountyTax;
}
