//
// problemOne.cpp
// COMP241
// Fall 2015
// PA1 Problem 1
// 17 September, 2015
// Nate McCain
//

#include <iostream>
#include <string>


using namespace std;


// Required functions. One repeatedly inserts each node into an array representing
// the linked list. The other one iterates through the list and prints out each value.
void storeList(int startPos, int value, int next);
void printList();


// The array
int arrayProj[16];

// These integers are to be inserted into the array as long as they are positive integers.
int valOne, valTwo, valThree, valFour, valFive, valSix, valSeven, valEight;
// These point to the next value in the array. pEight will always be -1, but the user
// must enter that value in order to continue the program. Failure to do so will prompt
// the user that they must enter -1 as the value.
int pOne, pTwo, pThree, pFour, pFive, pSix, pSeven, pEight;

int main()
{
    
    // Ask for the first value for the array.
    cout << "Please enter a value for the first position in the array." << endl;
    cin >> valOne;
    // Error Check
    while (valOne < 0)
    {
        cout << "Error. Please enter a positive integer for the first position in the array." << endl;
        cin >> valOne;
    }
    
    // Ask for the index position of the next value.
    cout << "Please enter an available integer to point towards the next number in the array." << endl
         << "The following integers can be chosen as long as they have not already been entered:" << endl
         << "2, 4, 6, 8, 10, 12, and 14." << endl;
    cin >> pOne;
    // Error Check
    while (pOne != 2 && pOne != 4 && pOne != 6 && pOne != 8 && pOne != 10 && pOne != 12 && pOne != 14)
    {
        cout << "Error. Please enter one of the following integers:" << endl
             << "2, 4, 6, 8, 10, 12, or 14." << endl;
        cin >> pOne;
    }
    
    //********************************
    // Ask for the next integer value.
    cout << "Please enter a positive integer value for the list." << endl;
    cin >> valTwo;
    // Error Check
    while (valTwo < 0)
    {
        cout << "Error. Please enter a positive integer for the first position in the array." << endl;
        cin >> valTwo;
    }
    
    // Ask for the index position of the next value.
    cout << "Please enter an available integer to point towards the next number in the array." << endl
         << "The following integers can be chosen as long as they have not already been entered:" << endl
         << "2, 4, 6, 8, 10, 12, and 14." << endl;
    cin >> pTwo;
    // Error Check
    while ((pTwo != 2 && pTwo != 4 && pTwo != 6 && pTwo != 8 && pTwo != 10 && pTwo != 12 && pTwo != 14) || pTwo == pOne)
    {
        cout << "Error. Please enter one of the following integers:" << endl
             << "2, 4, 6, 8, 10, 12, or 14." << endl;
        cin >> pTwo;
    }
    
    //********************************
    // Ask for the next integer value.
    cout << "Please enter a positive integer value for the list." << endl;
    cin >> valThree;
    // Error Check
    while (valThree < 0)
    {
        cout << "Error. Please enter a positive integer for the first position in the array." << endl;
        cin >> valThree;
    }
    
    // Ask for the index position of the next value.
    cout << "Please enter an available integer to point towards the next number in the array." << endl
         << "The following integers can be chosen as long as they have not already been entered:" << endl
         << "2, 4, 6, 8, 10, 12, and 14." << endl;
    cin >> pThree;
    // Error Check
    while ((pThree != 2 && pThree != 4 && pThree != 6 && pThree != 8 && pThree != 10 && pThree != 12 && pThree != 14) || pThree == pOne || pThree == pTwo)
    {
        cout << "Error. Please enter one of the following integers:" << endl
             << "2, 4, 6, 8, 10, 12, or 14." << endl;
        cin >> pThree;
    }

    //********************************
    // Ask for the next integer value.
    cout << "Please enter a positive integer value for the list." << endl;
    cin >> valFour;
    // Error Check
    while (valFour < 0)
    {
        cout << "Error. Please enter a positive integer for the first position in the array." << endl;
        cin >> valFour;
    }
    
    // Ask for the index position of the next value.
    cout << "Please enter an available integer to point towards the next number in the array." << endl
         << "The following integers can be chosen as long as they have not already been entered:" << endl
         << "2, 4, 6, 8, 10, 12, and 14." << endl;
    cin >> pFour;
    // Error Check
    while ((pFour != 4 && pFour != 6 && pFour != 8 && pFour != 10 && pFour != 12 && pFour != 14) || pFour == pOne || pFour == pTwo || pFour == pThree)
    {
        cout << "Error. Please enter one of the following integers:" << endl
             << "2, 4, 6, 8, 10, 12, or 14." << endl;
        cin >> pFour;
    }

    //********************************
    // Ask for the next integer value.
    cout << "Please enter a positive integer value for the list." << endl;
    cin >> valFive;
    // Error Check
    while (valFive < 0)
    {
        cout << "Error. Please enter a positive integer for the first position in the array." << endl;
        cin >> valFive;
    }
    
    // Ask for the index position of the next value.
    cout << "Please enter an available integer to point towards the next number in the array." << endl
         << "The following integers can be chosen as long as they have not already been entered:" << endl
         << "2, 4, 6, 8, 10, 12, and 14." << endl;
    cin >> pFive;
    // Error Check
    while ((pFive != 2 && pFive != 4 && pFive != 6 && pFive != 8 && pFive != 10 && pFive != 12 && pFive != 14) || pFive == pOne || pFive == pTwo || pFive == pThree || pFive == pFour)
    {
        cout << "Error. Please enter one of the following integers:" << endl
             << "2, 4, 6, 8, 10, 12, or 14." << endl;
        cin >> pFive;
    }
    
    //********************************
    // Ask for the next integer value.
    cout << "Please enter a positive integer value for the list." << endl;
    cin >> valSix;
    // Error Check
    while (valSix < 0)
    {
        cout << "Error. Please enter a positive integer for the first position in the array." << endl;
        cin >> valSix;
    }
    
    // Ask for the index position of the next value.
    cout << "Please enter an available integer to point towards the next number in the array." << endl
         << "The following integers can be chosen as long as they have not already been entered:" << endl
         << "2, 4, 6, 8, 10, 12, and 14." << endl;
    cin >> pSix;
    // Error Check
    while ((pSix != 2 && pSix != 4 && pSix != 6 && pSix != 8 && pSix != 10 && pSix != 12 &&pSix != 14) || pSix == pOne || pSix == pTwo || pSix == pThree || pSix == pFour || pSix == pFive)
    {
        cout << "Error. Please enter one of the following integers:" << endl
             << "2, 4, 6, 8, 10, 12, or 14." << endl;
        cin >> pSix;
    }
    
    //********************************
    // Ask for the next integer value.
    cout << "Please enter a positive integer value for the list." << endl;
    cin >> valSeven;
    // Error Check
    while (valSeven < 0)
    {
        cout << "Error. Please enter a positive integer for the first position in the array." << endl;
        cin >> valSeven;
    }
    
    // Ask for the index position of the next value.
    cout << "Please enter an available integer to point towards the next number in the array." << endl
         << "The following integers can be chosen as long as they have not already been entered:" << endl
         << "2, 4, 6, 8, 10, 12, and 14." << endl;
    cin >> pSeven;
    // Error Check
    while ((pSeven != 2 && pSeven != 4 && pSeven != 6 && pSeven != 8 && pSeven != 10 && pSeven != 12 &&pSeven != 14) || pSeven == pOne || pSeven == pTwo || pSeven == pThree || pSeven == pFour || pSeven == pFive || pSeven == pSix)
    {
        cout << "Error. Please enter one of the following integers:" << endl
             << "2, 4, 6, 8, 10, 12, or 14." << endl;
        cin >> pSeven;
    }
    
    //********************************
    // Ask for the next integer value.
    cout << "Please enter a positive integer value for the list." << endl;
    cin >> valEight;
    // Error Check
    while (valEight < 0)
    {
        cout << "Error. Please enter a positive integer for the first position in the array." << endl;
        cin >> valEight;
    }
    
    // Ask for the index position of the next value. This one must be -1.
    cout << "Please enter -1 as the integer. This represents the end of the list." << endl;
    cin >> pEight;
    // Error Check
    while (pEight != -1)
    {
        cout << "Error. Please enter -1 as the integer. " << endl;
        cin >> pEight;
    }

    //********************************
    
    // Begin to store the values and pointers in the array.
    storeList(0, valOne, pOne);
    storeList(pOne, valTwo, pTwo);
    storeList(pTwo, valThree, pThree);
    storeList(pThree, valFour, pFour);
    storeList(pFour, valFive, pFive);
    storeList(pFive, valSix, pSix);
    storeList(pSix, valSeven, pSeven);
    storeList(pSeven, valEight, pEight);
    
    // Prints the entire list in order.
    printList();
    
    
    return 0;
}


// Stores the values into the array.
void storeList(int startPos, int value, int next)
{
    arrayProj[startPos] = value;
    arrayProj[startPos + 1] = next;
    
}

// Prints out the entire array.
void printList()
{
    // This finds the end of the list so we
    // can tell the user where the list ends.
    int currPos = 0;
    int endPos;
    
    for (int i = 0; i < 16; i++)
    {
        cout << arrayProj[currPos] << " -> ";
        endPos = arrayProj[currPos + 1];
        
        if (endPos == -1)
        {
            i = 15;
            
        }
        else
        {
            currPos = endPos;
        }
        
    }
    // Tells the location of the end of the list.
    cout << "The end of the list is at position " << currPos + 1 << endl;
    
}





















