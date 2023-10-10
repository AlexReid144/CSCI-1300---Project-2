#include <iostream>
#include <fstream>
#include <string> 
#include <cmath>
#include <iomanip>
#include "split.cpp"
using namespace std; 

class Customer
{
    private:
        string customerName ;
        const int size = 50;
        int purchases[50];

    public:
        Customer()
        {
            customerName = " ";
            for(int i = 0; i<size; i++)
            {
            purchases[i] = 0;
            }
        }
        Customer(string name, int items[], int num)
        {
            customerName = name;
            for(int i = 0; i<num; i++)
            {
            purchases[i] = items[i];
            }
        }

    string getCustomerName();
    void setCustomerName(string name);
    int getPurchasesAt(int index);
    bool setPurchasesAt(int index, int value);
    int getTotalPurchaseCount();
    int getNumUniquePurchases();
    int getSize();
};

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
    else if(purchases[index] < 0) 
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
    if(index>0 && index < size)
    {
        purchases[index] = value;
        return true;
    }
    else
    {
        return false;
    }
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


int readPurchases(string filename, Customer customers[], int numcust, int custarrsize, int maxcol)
{
    if(numcust >= custarrsize)
    {
        return -2; 
    }
    ifstream inFile;
    inFile.open(filename);
    string temp = "";
    string arr[50]; 
    int purchases1[custarrsize];
    if(inFile.is_open())
    {
        int cust = 0; 
            for(int i = 0; i < numcust; i++)
            {
            
                while(getline(inFile, temp))
                {
                    int count = 0; 
                 split(temp, ',', arr, 50);
                 string name = arr[0]; 
                 for(int a = 1; a < custarrsize - 1; a++)
                 {
                     int p = stoi(arr[a]);
                     if(p != 0)
                     {
                         count ++; 
                        purchases1[a] =  p;
                     }
                 }
                 //Customer c1 = Customer(name, purchases1, count);
                // customers[i] = c1;
                 cust ++; 
                }
            }
            return cust; 
    }
    else
    {
        return -1; 
    }
}
 

 

 





