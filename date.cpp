// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: October 2019
// This program tells you if you can date a grandmother's grandchild

#include <iostream>
#include <string>

int main() {
    // This function tells you if you can date a grandmother's grandchild

    // variables
    std::string userRich;
    std::string userGoodLooking;

    // Input
    std::cout << "Can you date her grandchild?" << std::endl;
    std::cout << "Are you rich (answer yes or no): " << std::endl;
    std::cin >> userRich;
    std::cout << "Are you good looking (answer yes or no):" << std::endl;
    std::cin >> userGoodLooking;
    std::cout << "" << std::endl;

    // Process
    if (userRich == "yes" || userGoodLooking == "yes") {
        std::cout << "You can date her grandchild!" << std::endl;
    } else {
          std::cout << "Sorry, you can't date her grandchild." << std::endl;
        }
}
