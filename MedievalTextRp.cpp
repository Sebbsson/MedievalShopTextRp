// MedievalTextRp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "Item.h"
#include "Output.h"

using namespace std;

//These values are for each individual item and not for the total equiped stats.
int MaxValue {10}; //for randomizing values
int MinValue{ -5 }; // -5 since Armour will reduce speed



//vector Headgear
//vector Bodygear
//vector Gloves
//vector Boots
//vector Trinket/Amulet
//vector Rings

class Headgear{
public:
    string Stat1 {};            //Will include 3 from stats (Health, Mana etc.)
    string Stat2 {};
    string Stat3 {};
    
    //int StatValues[3]{};
    int value1{};
    int value2{};
    int value3{};

};

                                 //Headgear* NewHead = new Headgear();
                                 //delete NewHead;



int main()
{

    Output Narrator;
    Narrator.SetName("Narrator");
    Narrator.SetVisibility(false);  //Name visibility in console

    Output ShopKeeper;
    ShopKeeper.SetName("ShopKeeper");
    ShopKeeper.SetVisibility(true);


    //-------------------Start-------------------//
    int YesNo{};
    bool YN{ 1 };
    
    Narrator.Says("You're standing in a cabin. You see a shady figure leaning on a desk in front of you.");
    //-------------------Order an item?-------------------//
    ShopKeeper.Says("Welcome to YourLocalShop! Would you like to order an item?");
    
    while (YN == 1)
    {
        Narrator.Options("\n Yes  (1)\n No   (2)");
        cin >> YesNo;
        
        switch(YesNo){        
        case 1:
            YN = 0;
            break;

        case 2:
            ShopKeeper.Says("Then what are you doing here? Move along!");
            exit(0);

        default:
            ShopKeeper.Says("Is it to hard to answer a yes or no question??\nWould you like to order an item?");
            break;
        }       
    
    }   YN = 1;

    //-------------------What geartype order?-------------------//
    
    ShopKeeper.Says("Perfect! What would you like to order?");
    Narrator.Options("\n Headgear    (1)\n Chestgear   (2)\n Gloves      (3)\n Boots       (4)\n Amulet      (5)\n Ring        (6)");

    int GearCategory{};
    

    while (YN == 1) {

        cin >> GearCategory;

        switch (GearCategory) {

        case 1: // Head
        {
            Narrator.Says("-----------------------------------------------");
            ShopKeeper.Says("Oooh, something to where on top of your head? Well this is what I have to offer: ");
            Narrator.Options("\n Wizards Hat (1)\n Soldiers Helmet (2)\n Thieves Hood (3)");
            YN = 0;
            break;
        }
        case 2: // Chest
        {
            Narrator.Says("-----------------------------------------------");
            ShopKeeper.Says("Oooh, something to where on your stomach? Well this is what I have to offer: ");
            Narrator.Options("\n Wizards Robe (1)\n Soldiers Harnesk (2)\n Thieves Leather Garb (3)");
            YN = 0;
            break;
        }
        case 3: // Gloves
        {
            Narrator.Says("-----------------------------------------------");
            ShopKeeper.Says("Oooh, something to cover your hands? Well this is what I have to offer: ");
            Narrator.Options("\n Wizards Spell Gloves (1)\n Soldiers Gauntlets (2)\n Thieves Pickpocket Gloves (3)");
            YN = 0;
            break;
        }
        case 4: // Boots
        {
            Narrator.Says("-----------------------------------------------");
            ShopKeeper.Says("Oooh, something to warm you feets? Well this is what I have to offer: ");
            Narrator.Options("\n Wizards Boots of Levitation (1)\n Soldiers Boots of Ultimate Defense (2)\n Thieves Speedy Boots (3)");
            YN = 0;
            break;
        }
        case 5: //Amulet
        {
            Narrator.Says("-----------------------------------------------");
            ShopKeeper.Says("Oooh, you wanna have something shiny around your neck to blind your enemies? Well this is what I have to offer: ");
            Narrator.Options("\n Wizards Manamulet (1)\n Soldiers Amulet of Empowering (2)\n Thieves Energy Trinket (3)");
            YN = 0;
            break;
        }
        case 6: //Ring
        {
            Narrator.Says("-----------------------------------------------");
            ShopKeeper.Says("Oooh, you wanna buy some rings ey? Well this is what I have to offer: ");
            Narrator.Options("\n Wizards Ring of Destruction (1)\n Soldiers Ring of Unfaltering (2)\n Thieves Ring of Regret (3)");
            YN = 0;
            break;
        }
        default: //Loop
        {
            Narrator.Says("-----------------------------------------------");
            ShopKeeper.Says("I'm sorry I didn't quite catch that?");
            Narrator.Options("\n Headgear    (1)\n Chestgear   (2)\n Gloves      (3)\n Boots       (4)\n Amulet      (5)\n Ring        (6)");
            break;
        }
        }
    }   YN = 1;
  
    //-------------------Headgear-------------------//

    if (GearCategory == 1) {
       
        while (YN == 1) {

            int Headgear{};
            cin >> Headgear;

            switch (Headgear) {
            case 1: //Wizards hat
                {
                Item WizardsHat;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Oooh, so you're a Wizard Harry?\n What stats would you like your 'Wizards Hat' to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
                }
            case 2: //Soldiers Helmet
                {
                Item SoldiersHelmet;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Oooh, so you're an honorable soldier?\n What stats would you like your 'Soldiers Helmet' to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
                }
            case 3: //Thieves Hood
                {
                Item ThievesHood;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Oooh, so your a thief huh? Just don't steal my things.\n What stats would you like your 'Thieves Hood' to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
                }
            default: //Loop
                {
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("I'm sorry. I don't know what you are refering to.\n This is what I have to offer: ");
                Narrator.Options("\n Wizards Hat (1)\n Soldiers Helmet (2)\n Thieves Hood (3)");
                break;
                }
            }

        }   YN = 1;
    }

    //-------------------Chestgear-------------------//

    else if (GearCategory == 2) {

        while (YN == 1) {

            int Chestgear{};
            cin >> Chestgear;

            switch (Chestgear) {
            case 1: //Wizards Robe
            {
                Item WizardsRobe;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, a 'Wizards Robe'.\n What stats would you like it to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            case 2: //Soldiers Harnesk
            {
                Item SoldiersHarnesk;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, a 'Soldiers Harnesk'.\n What stats would you like it to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            case 3: //Thieves Leather Garb
            {
                Item ThievesLeatherGarb;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, a 'Thieves Leather Garb'.\n What stats would you like it to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            default:
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("I'm sorry. I don't know what you are refering to.\n This is what I have to offer: ");
                Narrator.Options("\n Wizards Robe (1)\n Soldiers Harnesk (2)\n Thieves Leather Garb (3)");
                break;
            }
        }   YN = 1;
    }

    //-------------------Gloves-------------------//

    else if (GearCategory == 3) {

        while (YN == 1) {

            int Gloves{};
            cin >> Gloves;

            switch (Gloves) {
            case 1: //Wizards Spell Gloves
            {
                Item WizardsSpellGloves;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Wizards Spell Gloves'.\n What stats would you like them to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            case 2: //Soldiers Gauntlets
            {
                Item SoldiersGauntlets;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Soldiers Gauntlets'.\n What stats would you like them to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            case 3: //Thieves Pickpocket Gloves
            {
                Item ThievesPickpocketGloves;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Thieves Pickpocket Gloves'.\n What stats would you like them to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            default:
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("I'm sorry. I don't know what you are refering to.\n This is what I have to offer: ");
                Narrator.Options("\n Wizards Spell Gloves (1)\n Soldiers Gauntlets (2)\n Thieves Pickpocket Gloves (3)");
                break;
            }
        }   YN = 1;
    }

    //-------------------Boots-------------------//

    else if (GearCategory == 4) {
        
        while (YN == 1) {

            int Boots{};
            cin >> Boots;

            switch (Boots) {
            case 1: //Wizards Boots of Levitation
            {
                Item WizardsBootsOfLevitation;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Wizards Boots of Levitation'.\n What stats would you like them to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            case 2: //Soldiers Boots of Ultimate Defense
            {
                Item SoldiersBootsOfUltimateDefense;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Soldiers Boots of Ultimate Defense'.\n What stats would you like them to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            case 3: //Thieves Speedy Boots
            {
                Item ThievesSpeedyBoots;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Thieves Speedy Boots'.\n What stats would you like them to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            default:
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("I'm sorry. I don't know what you are refering to.\n This is what I have to offer: ");
                Narrator.Options("\n Wizards Boots of Levitation (1)\n Soldiers Boots of Ultimate Defense (2)\n Thieves Speedy Boots (3)");
                break;
            }
        }   YN = 1;
    }

    //-------------------Amulet-------------------//

    else if (GearCategory == 5) {

        while (YN == 1) {

            int Amulet{};
            cin >> Amulet;

            switch (Amulet) {
            case 1: //Wizards Manamulet
            {
                Item WizardsManamulet;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Wizards Manamulet'.\n What stats would you like it to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            case 2: //Soldiers Amulet of Empowering
            {
                Item SoldiersAmuletOfEmpowering;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Soldiers Amulet of Empowering'.\n What stats would you like it to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            case 3: //Thieves Energy Trinket
            {
                Item ThievesEnergyTrinket;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Thieves Energy Trinket'.\n What stats would you like it to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            default:
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("I'm sorry. I don't know what you are refering to.\n This is what I have to offer: ");
                Narrator.Options("\n Wizards Manamulet (1)\n Soldiers Amulet of Empowering (2)\n Thieves Energy Trinket (3)");
                break;
            }
        }   YN = 1;
    }

    //-------------------Ring-------------------//

    else if (GearCategory == 6) {
        
        while (YN == 1) {

            int Ring{};
            cin >> Ring;

            switch (Ring) {
            case 1: //Wizards Ring of Destruction
            {
                Item WizardsRingOfDestruction;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Wizards Ring of Destruction'.\n What stats would you like it to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            case 2: //Soldiers Ring of Unfaltering
            {
                Item SoldiersRingOfUnfaltering;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Soldiers Ring of Unfaltering'.\n What stats would you like it to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            case 3: //Thieves Ring of Regret
            {
                Item ThievesRingOfRegret;
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("Ooh, 'Thieves Ring of Regret'.\n What stats would you like it to have?");
                Narrator.StatOptions();
                YN = 0;
                break;
            }
            default:
                Narrator.Says("-----------------------------------------------");
                ShopKeeper.Says("I'm sorry. I don't know what you are refering to.\n This is what I have to offer: ");
                Narrator.Options("\n Wizards Ring of Destruction (1)\n Soldiers Ring of Unfaltering (2)\n Thieves Ring of Regret (3)");
                break;
            }
        }   YN = 1;
    }
    else cout << "something went wrong" << endl;
    
    
    
    
    
    
    
    
    
    //----------TEST CORNER----------//
    
    /*Item WizardsHat;
    WizardsHat.SetName("Wizards hat");

    WizardsHat.SetHealth(10);
    WizardsHat.SetDamage(12);

    WizardsHat.PrtItemStats();*/

    //----------TEST CORNER----------//

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
