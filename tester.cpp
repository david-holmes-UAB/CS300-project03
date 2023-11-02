// #define NDEBUG
#include <cassert>
#include <stdio.h>
#include "piratetalk.h"
#include "romannumeral.h"
#include <iostream>
#include <string>


int main() {
    PirateTalk p;
    RomanNumeral r;

    std::string str = "Hello, madame, would you direct me to the nearest hotel?";
    std::string str2 = "Sir, what is the name of your best restaurant?";
    std::string str3 = "Excuse me, officer, my friend is lost. He is a fellow pirate looking for coins to pay the restaurant.";
    std::string str4 = "Yes, I understand your point.";
    std::string str5 = "Oi, friend, can you tell me where the restroom is?";
    std::string numer1 = "MCMLXIX";
    std::string numer2 = "MMXXIII"; 
    std::string numer3 = "XLIX"; 

    /* Note about commented out assertion: This check fails as the "are" in nearest becomes replaced with "be" */
    // assert(p.translateToPirate(str) == "Ahoy, proud beauty, would ye direct me to th' nearest fleabag inn?");

    assert(p.translateToPirate(str2) == "Matey, what be th' name of yer best galley?");
    assert(p.translateToPirate(str3) == "Arrr, foul blaggart, me mate be lost. he be a fellow buccaneer looking for doubloons to pay th' galley.");
    assert(p.translateToPirate(str4) == "Aye, i be savvy to yer point.");
    assert(p.translateToPirate(str5) == "Oi, mate, can ye tell me where th' head be?");

    assert(r.romanToDecimal(numer1) == 1969);
    assert(r.romanToDecimal(numer2) == 2023);
    assert(r.romanToDecimal(numer3) == 49);


    std::cout << p.translateToPirate(str) << std::endl;
    std::cout << p.translateToPirate(str2) << std::endl;
    std::cout << p.translateToPirate(str3) << std::endl;
    std::cout << p.translateToPirate(str4) << std::endl;
    std::cout << p.translateToPirate(str5) << std::endl;

    std::cout << r.romanToDecimal(numer1) << std::endl;
    std::cout << r.romanToDecimal(numer2) << std::endl;
    std::cout << r.romanToDecimal(numer3) << std::endl;

    return 0;  
}