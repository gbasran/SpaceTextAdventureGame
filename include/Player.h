/**
 * @file Player.h
 * @author Qusai Quresh [qusai.quresh@uleth.ca]
 * @date 2023-11
 */

#ifndef PLAYER_CLASS_H_INCLUDED
#define PLAYER_CLASS_H_INCLUDED

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "Character.h"

class PlayerClass {
 public:
  /**
  * @brief Default constructor.
  */
  PlayerClass();

  /**
   * @brief Destructor.
   */
  virtual ~PlayerClass();

  /**
   * @brief Pure virtual function for handling movement actions.
   */
  virtual void movementActions(int n);

  /**
   * @brief Get the remaining lives (hearts) of the character.
   * @return The number of remaining lives.
   */
  virtual int getLives();

  void frame();

  /**
   * @brief Set the remaining lives (hearts) of the character.
   * @param lives The number of lives to set.
   */
  virtual void setLives(int lives);

  /**
   * @brief Get the character's inventory.
   * @param itemName name of the item to return.
   * @return A map representing the character's inventory.
   */
  virtual int getInventory();

  /**
   * @brief Add an item to the character's inventory.
   * @param itemName The name of the item to add.
   * @param quantity The quantity of the item to add.
   */
  virtual void addToInventory(char itemName, int quantity);

  /**
  * @brief Remove an item to the character's inventory.
  * @param itemName The name of the item to remove.
  */
  virtual void removeFromInventory(char itemName);
  std::map<char, int> _inventory; // Character's inventory
  std::string _pName;

 protected:
  int _lives; // Number of remaining lives (hearts)
};

#endif // PLAYER_CLASS_H_INCLUDED
