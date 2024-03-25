#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Rooms.h"

Rooms::Rooms() {}

Rooms::~Rooms() {}

std::string Rooms::getDescription() const
{ return _description; }

std::string Rooms::getInteractable(int index) const
{ return _interactables[index];}

void Rooms::listInteractables() const {
  for (int i = 0; i < _interactables.size(); i++) {
    if (i == _interactables.size() - 1) {
    std::cout << _interactables[i] << std::endl;
    } else {
    std::cout << _interactables[i] << ", ";
    }
  }
}

void Rooms::setDescription(const std::string& desc) { _description = desc; }

void Rooms::addInteractable(const std::string& interactable) {
  _interactables.push_back(interactable);
}

void Rooms::removeInteractable(const std::string& interactable) {
  for (int i = 0; i < _interactables.size(); i++) {
    if (_interactables[i] == interactable) {
      _interactables.erase(_interactables.begin() + i);
      break;
    }
  }
}
