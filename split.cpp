// CSCI1300 Spring 2021
// Author: Alex Reid 
// Recitation: 107 – Sourav Chakraborty
// HW#5 - Problem #5
#include <iostream>
#include <string> 
#include <iomanip> 
using namespace std;
int split(string test, char sep, string arr[], int len);

//nt main()
//{
  //  string word = "Apples,Oranges,Bananas";
    //char sep = ','; 
   // string arr[3]; 
   // int len = 3; 
   // cout << split(word, sep, arr, len);

//}
int split(string test, char sep, string arr[], int len)
{
    int count = 0; 
    string word = "";
    //if the string is empty return 0
    if(test == "")
    {
        return 0; 
    }
    //at the tested character to the end of the string
    test += sep;
    int strlen = test.length();
    int indx = 0; 
    int i = 0; 
    while(i < strlen)
    {
        //check to see if the char in the string is the one that was passed as a parameter
        if(test[i] != sep)
        {
            //add the char to the word for the array as long as it is not sep
            word = word + test[i]; 
        }
        
        else
        {
            //if it is the char from the parameter char then print whatever came before until the beginining for the string or the last sep char
            if(len > count)
            {
               arr[indx] = word; 
               //cout << "array[" << indx << "] = " << arr[indx] << endl;
               indx++;
               count++; 
                
            }
            else
            {
                return -1;
            }
            //reset the string so you can make a new string for the next element of the array
            word = ""; 
        }
       i++; 
        
    }
    return count; 
}