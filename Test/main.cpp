//File for testing functions
#include <string>
#include <iostream>
#include <fstream>


int main(){
    std::fstream settingsfile;
    settingsfile.open("../src/Resources/settings.txt");
    if (!settingsfile.is_open()) throw std::runtime_error("Could not open settings file");

    std::string setting;
    std::string div;
    std::string flag;

    while (settingsfile >> setting){
        settingsfile >> div;
        settingsfile >> flag;
    };
    return 1;
}
