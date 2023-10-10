// CS1300 Spring 2021
// Author: Sourav Chakraborty
// Recitation: 122 – Favorite TA
// Homework 7 - Problem 3
#ifndef Product_H
#define Product_H
#include <string> 
using namespace std; 
class Product
{

    public: 
    Product()
    {
        name = "";
        price = 0.0;
        category = ""; 
    }
    Product(string n, double p, string c)
    {
        name = n; 
        price = p;
        category = c; 
    }
    string getName();
    void setName(string name); 
    double getPrice(); 
    void setPrice(double price);
    string getCategory();
    void setCategory(string c); 
    
    private:
    string name; 
    double price; 
    string category; 

    
};
#endif