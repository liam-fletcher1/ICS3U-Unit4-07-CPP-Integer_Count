// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Liam Fletcher
// Created on: Oct 2021
// This program uses a nested loop to print integers from 1000-2000

#include <iostream>


int main() {
    // this function uses a nested loop to print integers

    // process & output
    for (int integerCount = 1000; integerCount < 2000 + 1;
    integerCount++) {
        if (integerCount % 5 == 0) {
            std::cout << "" << std::endl;
            std::cout << integerCount << " ";
        } else {
            std::cout << integerCount << " ";
        }
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
