/**
 * @file Character.cpp
 * @author Qusai Quresh [qusai.quresh@uleth.ca]
 * @date 2023-11
 */
#include <cctype>
#include "Character.h"

CharacterClass::CharacterClass() {}

CharacterClass::~CharacterClass() {}

int CharacterClass::getInventory() {
    std::cout << "Input the char to check inventory"
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

void CharacterClass::addToInventory(const char& itemName, int quantity) {
  _inventory[itemName] += quantity;
}

void CharacterClass::removeFromInventory(char itemName) {
  _inventory.erase(itemName);
}

void CharacterClass::setLives(int lives) {
  _lives = lives;
}

int CharacterClass::getLives() {
  return _lives;
}
