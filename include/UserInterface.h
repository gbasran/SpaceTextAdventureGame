/**
* @author Arham Haider [arham.haider@uleth.ca]
* @date 2023-11
*/

#ifndef USERINTERFACE_H_INCLUDED
#define USERINTERFACE_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <map>

/**
 * @class UserInterface UserInterface.h "UserInterface.h"
 * @brief Abstract superclass for user interface implementations.
 */
class UserInterface {
 public:
    /**
    * @brief Default Constructor.
    */
    UserInterface();

    /**
    * @brief Destructor.
    */
    virtual ~UserInterface();

    /**
     * @brief Abstract method for getting the user's name in derived classes.
     */
    virtual void exposition();

    /**
     * @brief Abstract method for getting the user's name in derived classes.
     */
    virtual void userName();

    //virtual void help() = 0;

    /**
     * @brief Abstract method for resetting the game state in derived classes.
     */
    // virtual void reset() = 0;

    virtual void startGame();
    // virtual void inventory(const std::map<std::string, int>& items);

    /**
     * @brief Abstract method for handling quitting the game in derived classes.
     */
    virtual void quit();
};
#endif //USERINTERFACE_H_INCLUDED

