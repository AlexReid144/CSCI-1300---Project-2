// CS1300 Spring 2021
// Author: Sourav Chakraborty
// Recitation: 122 – Favorite TA
// Homework 7 - Problem 5

#include "Product.cpp"
#include <string>
#include <iostream>
#include <cmath>

using namespace std; 
void printAllProducts(Product products[], int numproducts);


int main()
{
    Product products[3];
    products[0] = Product("Airpods Pro", 249.00, "electronics");
    products[1] = Product("Echo Dot 4th Gen", 49.99, "electronics");
    products[2] = Product("Mellani Bed Sheet set", 32.97, "sheeets");
    printAllProducts(products, 3); 

}
void printAllProducts(Product products[], int numproducts)
    {
        if(numproducts <= 0)
        {
           cout << "No products are stored"; 
        }
        else
        {
            cout << "Here is a list of products" << endl; 
             
            for(int i = 0; i < numproducts; i++)
            {
                cout << products[i].getName() << " costs ";
                double pr = products[i].getPrice();
                cout << pr << endl; 
               
          
                //cout << p << endl;
            }
        }
    }