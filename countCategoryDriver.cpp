// CS1300 Spring 2021
// Author: Sourav Chakraborty
// Recitation: 122 – Favorite TA
// Project 2 - Problem 4

#include "Product.cpp"
#include "readProductsDriver.cpp"
#include <string>
#include <iostream>
#include <cmath>
#include "products.txt"
using namespace std; 
int countCategory(string cgry, Product products[], int numprod);




int countCategory(string cgry, Product products[], int numprod)
{
    int count = 0; 
    for(int i =0; i < numprod; i++)
    {
        string temp = products[i].getCategory(); 
        if(cgry == temp)
        {
            count ++; 
        }
    }
    return count; 
}