// Minimal source file that allows the pipeline to pass.
#include "Player.h"
#include "Character.h"
int main() {
    PlayerClass mp;
    int n = mp.getInventory();
    mp.frame();
    mp.addToInventory('L', 1);
    int m = mp.getInventory();
    std::cout << "First --" << n << '\n' << "Second -- " << m << std::endl;
    mp.addToInventory('K', 1);
    int f = mp.getInventory();
    std::cout << f << std::endl;

    mp.addToInventory('K', 5);
    f = mp.getInventory();
    std::cout << f << std::endl;
    mp.movementActions(2);
    mp.frame();
    return 0;
}
