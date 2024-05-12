#pragma once
#include <iostream>
#include <string>
#include <vector>


class Item{
private:

    std::string Name{ " " };

    std::string Health{ "Health" };
    //int HealthValue{};

    std::string Mana{ "Mana" };
    //int ManaValue{};

    std::string Armour{ "Armour" };
    //int ArmourValue{};

    std::string Damage{ "Damage" };
    //int DamageValue{};

    std::string Speed{ "Speed" };
    //int SpeedValue{};

    std::vector <std::string> Affix{ Health, Mana, Armour, Damage, Speed };
    std::vector <int> Values{ 0,0,0,0,0 };     //Value in Values[i] belongs to the stat in Affix[i] (ex: Value[0] is for Health)

public:
    //---------------Naming Item---------------

    std::string SetName(std::string ItemName);

    //---------------Set Values---------------

    int SetHealth(int NewHValue);

    int SetMana(int NewMValue);

    int SetArmour(int NewAValue);

    int SetDamage(int NewDValue);

    int SetSpeed(int NewSValue);

    //---------------Print to console---------------

    void PrtItemStats();


};

