/**
 * @file Player.cpp
 * @author Qusai Quresh [qusai.quresh@uleth.ca]
 * @date 2023-11
 */
#include <iostream>
#include <map>
#include <vector>
#include <cstdlib>
#include <istream>
#include <limits>
#include "Player.h"


PlayerClass::PlayerClass() {
    setLives(3);
    addToInventory('L', 1);
}
void PlayerClass::movementActions(int n) {
    if (n > 0 && n < 5) {
        bool passed = false;
        do {
        std::cout << "\nChoose which"
        " direction you'd like to move into." << std::endl;
        std::cout << "1. Move North.\n";
        std::cout << "2. Move South.\n";
        std::cout << "3. Move East.\n";
        std::cout << "4. Move West.\n";
        int choice = 0;
        std::cin >> choice;
        std::cout << std::endl;
        if (std::cin.good()) {
            if (choice == n) {
                    std::cout << "You move into a new room.\n";
                    passed = true;
                } else if ((choice < n && choice > 0)
                || (choice > n && choice < 5)) {
                    std::cout << "You see dust and"
                    " cobwebs. Nothing to find here.\n";
                } else {
                    std::cout << "Input out of range,"
                    " please try again between ranges 1-4" << std::endl;
                }
            } else {
                std::cout << "Invalid input type,"
                " please enter an integer between 1 and 4.\n";
                std::cin.clear();
                std::cin.ignore
                (std::numeric_limits<std::streamsize>::max(), '\n');
            }
        } while (!passed);
        // system("clear");
    } else {
        std::cout << "Invalid input, please make "
        "sure the option is right; choose a number btwn 1-4\n";
    }
}
void PlayerClass::frame() {
    for (int i =0; i <100; i++) {
        std::cout << "=";
    }
    std::cout << std::endl;
}
PlayerClass::~PlayerClass() {}
void PlayerClass::setLives(int lives) {
    _lives = lives;
}
int PlayerClass::getLives() {
    return _lives;
}

int PlayerClass::getInventory() {
    std::cout <<"Enter the letter to check inventory"
    " items to check see you have"<< std::endl;
    char itemId;
    std::cin >> itemId;
    itemId = toupper(itemId);
    if (_inventory.find(itemId) == _inventory.end()) {
        std::cout << "Item not found in inventory." << std::endl;
        return -1;
    } else {
        return _inventory[itemId];
    }
}

void PlayerClass::addToInventory(char itemName, int quantity) {
    itemName = toupper(itemName);
    _inventory[itemName] += quantity;
}

void PlayerClass::removeFromInventory(char itemName) {
    _inventory.erase(itemName);
}
