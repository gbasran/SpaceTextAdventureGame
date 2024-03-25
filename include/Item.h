/**
 * @file CharacterClass.h
 * @author Qusai Quresh [qusai.quresh@uleth.ca]
 * @date 2023-11
 */

#ifndef ITEM_CLASS_H_INCLUDED
#define ITEM_CLASS_H_INCLUDED

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "Player.h"

class ItemClass {
 public:
  ItemClass();

  ~ItemClass();

  void useItem(char name);

  PlayerClass* pickUpItem(char name) {
    PlayerClass* mp = new PlayerClass();
    std::cout << "You dropped " << name << std::endl;
    std::cout << "Its purpose is: " << _stuff[name] << std::endl;
    mp->addToInventory(name, 1);
  }

  void dropItem(char name) {
    PlayerClass* mp = new PlayerClass();
    std::cout << "You dropped " << name << std::endl;
    std::cout << "Its purpose is: " << _stuff[name] << std::endl;
    mp->removeFromInventory(name);
  }

 protected:
  void setNameAndUse(char name, std::string description) {
    _stuff[name] = description;
  }
  std::map<char, std::string> _stuff; // Objects's
};

#endif // ITEM_CLASS_H_INCLUDED
