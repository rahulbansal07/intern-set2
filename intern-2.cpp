Ques 1. Write a program to print all the LEADERS in the array.
 An element is leader if it is greater than all the elements to its right side. 
And the rightmost element is always a leader.
For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.

#include<iostream>
using namespace std;
 

void Leaders(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i+1; j < size; j++)
        {
            if (arr[i] <=arr[j])
                break;
        }   
        if (j == size) 
            cout << arr[i] << " ";
  }
}
 

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Leaders(arr, n);
    return 0;
}
***********************************************************************************
Ques 2 Program to print following pattern
#include <iostream>
using namespace std; 
int main()
{
    int i, j, n=5;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j) 
                cout << "*";
            else
                cout << " ";
            if(i >= (2 * n - 1) - j)  
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1)  
                cout << "*";
            else
                cout << " ";
            if((i + n) <= j)  
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}