#include "Output.h"
#include <iostream>
#include <string>

std::string Output::SetName(std::string CharacterName) {
    Name = CharacterName;
    return Name;
}

bool Output::SetVisibility(bool TrueOrFalse) {
    VisibleToUser = TrueOrFalse;
    return VisibleToUser;
}

void Output::Says(std::string text) {
    if (VisibleToUser)
      std::cout << "\n" << Name << " says: " << "\n" << text << std::endl;
    else
        std::cout << text << std::endl;
}

void Output::Options(std::string Choises) {
    std::cout << "\nOptions: " << Choises << std::endl;
}

void Output::StatOptions() {
    std::cout << "\nOptions: \n Health (1)\n Mana (2)\n Armour (3)\n Damage (4)\n Speed (5)" << std::endl;
};
