#ifndef ROOMS_H_INCLUDED
#define ROOMS_H_INCLUDED

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

/**
 * Abstract base class representing a room in a text-based escape room game.
 * This class provides the common interface and functionalities for various types
 * of rooms in the game, such as puzzle rooms, intro rooms, and final rooms.
 */
class Rooms {
 public:
    /**
     * @brief Constructor for the Rooms class.
     */
    Rooms();

    /**
     * @brief Virtual destructor for the Rooms class.
     * Ensures derived classes are destroyed properly.
     */
    virtual ~Rooms();

    /**
     * @brief Gets the description of the room.
     * @return A string containing the description of the room.
     */
    std::string getDescription() const;

    /**
     * @brief Gets an interactable object from the room based on its index.
     * @param index The index of the interactable object in the room.
     * @return A string containing the description of the interactable object.
     */
    std::string getInteractable(int index) const;

    /**
     * @brief Lists all interactable objects in the room.
     * Prints the list of interactable objects to the standard output.
     */
    void listInteractables() const;

    /**
     * @brief Sets the description of the room.
     * @param desc The new description of the room.
     */
    void setDescription(const std::string& desc);

    /**
     * @brief Adds an interactable object to the room.
     * @param interactable The interactable object to be added to the room.
     */
    void addInteractable(const std::string& interactable);

    /**
     * @brief Removes an interactable object from the room.
     * @param interactable The interactable object to be removed from the room.
     */
    void removeInteractable(const std::string& interactable);

    /**
     * @brief Pure virtual function to get the room type.
     * Must be implemented in derived classes.
     * @return A string representing the type of the room.
     */
    virtual std::string getRoomType() const = 0;

    /**
     * @brief Pure virtual function called when a player enters the room.
     * Must be implemented in derived classes.
     */
    virtual void onEnter() = 0;

    /**
     * @brief Pure virtual function called when a player interacts with an object in the room.
     * Must be implemented in derived classes.
     * @param object The object with which the player interacts.
     */
    virtual void onInteract(const std::string& object) = 0;

    /**
     * @brief Pure virtual function for setting up the room.
     * Must be implemented in derived classes.
     * Used for initializing the room state before the player enters.
     */
    virtual void setUp() = 0;

    /**
     * @brief Pure virtual function for tearing down the room.
     * Must be implemented in derived classes.
     * Used for cleaning up the room state after the player exits.
     */
    virtual void tearDown() = 0;

    /**
     * @brief Pure virtual function for updating the room state.
     * Must be implemented in derived classes.
     * Typically called every game loop to update the state of the room.
     */
    virtual void roomsUpdate() = 0;

    /**
     * @brief Pure virtual function for drawing the room state.
     * Must be implemented in derived classes.
     * Used for rendering the room state to the player.
     */
    virtual void draw() const = 0;

 protected:
    std::string _description;            ///< Description of the room.
    std::vector<std::string> _interactables;  ///< List of interactable objects.
};

#endif //ROOMS_H_INCLUDED
