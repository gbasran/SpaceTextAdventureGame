#include "UserInterface.h"

UserInterface::UserInterface() {
    exposition();
}

UserInterface::~UserInterface() {}

void UserInterface::exposition() {
    std::cout << "Welcome, brave adventurer, to the ultimate test of your"
    " wits! - The Galactic Escape: Space Station!\n";
    std::cout << "Prepare for an interstellar journey where the fate of"
    " your life rests in your hands.\n";
    std::cout << "Alone, the sole survivor aboard a once-thriving space"
    " station hurtling through the cosmos.\n";
    std::cout << "Your mission: Escape the desolate shuttle and return"
    " to Earth before the time runs out.\n";
}

void UserInterface::userName() {
    std::string name;
    std::cout << "Enter your User Name : ";
    std::cin >> name;
    std::cout << "Welcome " << name << "!!" << std::endl;
}
void UserInterface::startGame() {
    std::cout << "";
}
// void UserInterface::reset() {
//     char playAgain;
//     bool gameloop;

//     std::cout << "Do you want to play Again ? (Y/N): ";
//     std::cin >> playAgain;

//     if (playAgain == 'y' || playAgain == 'Y') {
//         gameloop = true;
//     } else if (playAgain == 'n' || playAgain == 'N') {
//         gameloop = false;
//         std::cout << "Thanks for playing!";
//     } else {
//         std::cout << "Invalid input!";
//     }
// }

void UserInterface::quit() {
    char choice;

    std::cout << "Are you sure you want to quit? (y/n): ";
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        std::cout << "Exiting the game. Goodbye!\n";
        exit(0);
    } else if (choice == 'n' || choice == 'N') {
        std::cout << "Resuming the game.\n";
    } else {
        std::cout << "Invalid Input!!";
    }
}



