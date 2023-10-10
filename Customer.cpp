
// CS1300 Spring 2021
// Author: Sourav Chakraborty
// Recitation: 122 – Favorite TA
// Project 2 - Problem 4


#include "Customer.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std; 
string Customer::getCustomerName()
{
    return customerName;
}

void Customer::setCustomerName(string name)
{
    customerName = name;
}


int Customer::getPurchasesAt(int index)
{
    if(index < 0  || index > (size-1))
    {
        return -1;
    }
    else if(purchases[index] < 0 || purchases[index] > 10000)
    {
        return 0; 
    }
    else
    {
    return purchases[index];
    }
}


bool Customer::setPurchasesAt(int index, int value)
{
    if(index>=0 && index < size)
    {
        if(value != 0)
        {
        purchases[index] = value;
        return true;
        }
    }
        return false;
}

//return total count of purchases
int Customer::getTotalPurchaseCount(){
    int total =0;
    for(int i =0; i<size; i++){
        total += purchases[i];
    }
    return total;
}

//Number of items uniquely purchased
int Customer::getNumUniquePurchases(){
    int unique =0;
    for(int i=0; i <size; i++)
    {
        if(purchases[i]!=0)
        {
            unique++;
        }
    }
    return unique;
}

int Customer::getSize(){
    return size;
}

 

 

 





