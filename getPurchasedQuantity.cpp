// CS1300 Spring 2021
// Author: Sourav Chakraborty
// Recitation: 122 – Favorite TA
// Project 2 - Problem 4


#include "Product.h"
#include "Customer.cpp"
#include <string>
#include <iostream>
#include <cmath>
using namespace std; 

 
getPurchasedQuantity(string custName, string prodName, Customer customers[], Product products[], int numCust, int numProd)
{
   
  int i =0; 
  int j = 0; 
    for(;i<numCust;i++)
    {
        if(custName == customers[i].getCustomerName())
        {
            break;
        }
    }
    for(;j<numProd;j++)
    {
        if(prodName == products[j].getName())
        {
            break;
        }
    }
    if(i<numCust && j<numProd)
    {
        return customers->getPurchasesAt(i);
    }
    return -3;
}


