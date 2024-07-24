#pragma once
#include <string>

using namespace std;

class Product {
protected:
    string ID;
    string Category;
    string Name;
    string ExpDate;
    float Price;
public:
    Product(string id, string category, string name, string expDate, float price);
    virtual float computePrice();
    virtual void display();
    string getID();
    string getCategory();
    float getPrice();
    string getName() const {
        return Name;
    }
};

class Tobacco : public Product {
private:
    float SpecialTax;
public:
    Tobacco(string id, string category, string name, string expDate, float price, float specialTax);
    float computePrice() override;
};

class LotteryTickets : public Product {
private:
    float CityTax;
    float CountyTax;
public:
    LotteryTickets(string id, string category, string name, string expDate, float price, float cityTax, float countyTax);
    float computePrice() override;
};



