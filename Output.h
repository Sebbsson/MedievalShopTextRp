#pragma once
#include <iostream>
#include <string>

class Output {
private:
    std::string Name{ "" };
    bool VisibleToUser{0};

public:

    std::string SetName(std::string CharacterName);
    bool SetVisibility(bool TrueOrFalse);
    
    void Says(std::string text);

    void Options(std::string Choises);

    void StatOptions();

};

