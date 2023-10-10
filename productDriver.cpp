// CS1300 Spring 2021
// Author: Sourav Chakraborty
// Recitation: 122 – Favorite TA
// Homework 7 - Problem 3
#include "Product.cpp"
#include <string>
#include <iostream> 

int main()
{
// default constructor
Product p1 = Product();
cout << p1.getName() << endl;
cout << p1.getPrice() << endl;
cout << p1.getCategory() << endl;

// checking setter for product name
Product p2 = Product();
string name = "Apple Macbook Pro Laptop";
p2.setName(name);
cout << p2.getName() << endl;

// checking setter for category
Product p3 = Product();
string category = "Computers and Tablets";
p3.setCategory(category);
cout << p3.getCategory() << endl;

// checking setter for price
Product p4 = Product();
double price = 1000;
p4.setPrice(price);
cout << p4.getPrice() << endl;

// parameterized constructor
 name = "Bosch 800 Series Dishwasher";
 price = 1150;
 category = "Dishwashers";
Product p5 = Product(name, price, category);
cout << p5.getName() << endl;
cout << p5.getPrice() << endl;
cout << p5.getCategory() << endl;

// checking parameterized constructor
 name = "iPhone 12 Pro";
 price = 999.99;
 category = "Cellphones";
Product p6 = Product(name, price, category);
cout << p6.getName() << endl;
cout << p6.getPrice() << endl;
cout << p6.getCategory() << endl;

// checking default constructor and setter for name
Product p7 = Product();
 name = "Bose SoundLink Wireless Headphones";
p7.setName(name);
cout<<p7.getName()<<endl;
cout<<p7.getPrice()<<endl;
cout<<p7.getCategory()<<endl;

}