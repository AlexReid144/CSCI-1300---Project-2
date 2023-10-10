// CS1300 Spring 2021
// Author: Sourav Chakraborty
// Recitation: 122 – Favorite TA
// Homework 7 - Problem 4
#include "Product.cpp"
#include "split.cpp"
#include <string>
#include <iostream>
#include <fstream> 
using namespace std; 
int readProducts(string filename, Product products[], int numprod, int size);
int main()
{
    Product products[10];

// calling my readProducts function with a string of the file I just created
   int num = readProducts("filename.txt", products, 0, 10);
   // Code to print the values
   cout<<products[0].getName()<<endl;
   cout<<products[1].getName()<<endl;
   // Expected Output
  // Special Deluxe Toaster
  // Burn-Ye-Toast Toaster
}

int readProducts(string filename, Product products[], int numprod, int size)
    {
        Product products1[numprod]; 
        string arr[50]; 
        int i = 0; 
        int a = 0; 
        string line = "";
        int count = 0;
        ifstream inFile; 
        inFile.open(filename);
        if(numprod == size)
        {
            return -2; 
        }
        if(inFile.is_open())
        {
            while(getline(inFile, line))
            {
                if(line != "")
                {
                count ++; 
               
               split(line, ',', arr, 50); 
               double pr = stod(arr[1]);
               if(a < size)
               {
              Product p = Product(arr[0],pr, arr[2]);
               products[a] = p;
               a++;
               }
                }
            }
            
            return count; 
        }
        else
        {
            return -1; 
        }
        
        
    }