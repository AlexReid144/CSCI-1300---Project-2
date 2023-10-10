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
    
int searchNameCategory(string cat, string word, Product products[], int numprod)
{
    int track = 0; 
    int count = 0; 
    for(int i =0; i < numprod; i++)
    {
        string temp = products[i].getCategory();
        if( temp == cat)
        {
            string name = products[i].getName();
            int len = word.length(); 
            if(name.find(word) != string :: npos)
            {
                if(track == 0)
                {
                    cout << "Here is a list of products that match this category-search word pair:" << endl;
                    track++; 
                }
                count ++; 
                cout << name << endl; 
            }
        }
    }
    if(count == 0)
    {
        cout << "No matching products found." << endl;
    }
    return count; 
}