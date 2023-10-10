#include "Product.h"
#include <string>
#include <iostream> 

string Product :: getName()
    {
        return name;
    }
    void Product :: setName(string name1)
    {
        name = name1; 
    }
    double Product :: getPrice()
    {
        return price;
    }
    void Product :: setPrice(double price1)
    {
        price = price1;
    }
     string Product :: getCategory()
    {
        return category; 
    }
    void Product :: setCategory(string c)
    {
        category = c; 
    }



