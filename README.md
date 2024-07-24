Build Specifications :

Write a C++ program to manage a POS System. The main user is an employee
at a convenience store.
1. The system should load a catalog of all products in the inventory, which includes
products such as soda, and chocolate, ... You can make the products into 2-3 categories.
2. A user can search the inventory: The user of the system can search the inventory by
using the category, exact product, or price range.
3. A user can sell products.
4. Add new inventory.
5. Remove inventory.
The program must have the following properties :

- You should do error handling and exception handling (Ex: An employee cannot sell a
product that does not exist) (5 points)
- You should use inheritance: Example: You can design a generic product class, then
design derived classes for different kinds of products. The product class may have the
following data members: ID (string), Category (string), Name (string), exp-date (date),
and price (floating number). The product class will have a virtual function called
compute price that will calculate the price of the product. (5 points)
- You must use polymorphism.: Use functions overloading and overriding. (5 points)
- You can add as many derived classes as you wish, but the following two classes are a
must: Tobacco, and LotteryTickets. The Tobacco class must have a special field and the
LotteryTickets class has two tax fields, one for the city, and the other for the county. (5
points)
Also, design a menu (which should still appear until the exit option is chosen) in the Main
program that has the following options implemented to test your classes’ functionality:

1. Search Inventory
2. Sell products
3. Add new inventory.
4. Remove inventory.
5. Exit
