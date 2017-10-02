


// File: Boca_Juniors_hw3_task2.cpp

// Created by Joshua Stammen on 9/26/2017 for CS1410.

// Copyright (c) 2017 WSU

//


#include <iostream>

using namespace std;

// Constants,Structs, Classes


// Prototypes
enum serial {ObjectZero, ObjectOne, ObjectTwo, ObjectThree};

void ShowSerial(serial);

// Main Program Program

//A little closer to what is needed

int main(void) {
    
serial alpha, beta, gamma; //make some objects

    alpha = ObjectOne;
    beta = ObjectTwo;
    gamma = ObjectThree;
    cout << "I am object number " << alpha <<endl;
    cout << "I am object number " << beta <<endl;
    cout << "I am object number " << gamma <<endl;


 //ShowSerial(alpha);
 //ShowSerial(beta);
 //ShowSerial(gamma);
    return 0;

}
// Function Definitions
