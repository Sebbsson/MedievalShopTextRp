#include "Item.h"
#include <iostream>
#include <string>

//---------------Naming Item---------------
std::string Item::SetName(std::string ItemName) {
    Name = ItemName;
    return Name;
}
//---------------Set Values---------------
int Item::SetHealth(int NewHValue) {
    //HealthValue = NewHValue;
    Values.at(0) = NewHValue;
    return 0;
}
int Item::SetMana(int NewMValue) {
    //ManaValue = NewMValue;
    Values.at(1) = NewMValue;
    return 0;
}
int Item::SetArmour(int NewAValue) {
    //ArmourValue = NewAValue;
    Values.at(2) = NewAValue;
    return 0;
}
int Item::SetDamage(int NewDValue) {
    //DamageValue = NewDValue;
    Values.at(3) = NewDValue;
    return 0;
}
int Item::SetSpeed(int NewSValue) {
    //SpeedValue = NewSValue;
    Values.at(4) = NewSValue;
    return 0;
}

//---------------Print to console---------------

void Item::PrtItemStats() {
    std::cout << "\n" << Name << "'s stats are: \n" << std::endl;

    for (size_t i{ 0 }; i < 5; i++) {
        if (Values[i] != 0)                             //Makes sure to not print stats with 0 Value
            std::cout << Affix[i] << ": " << Values[i] << std::endl;
    }
}