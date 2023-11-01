#include "piratetalk.h"
#include <string>
#include <regex>        
#include <map>
#include <iterator>     // Iterating over map
#include <algorithm>    // For transform
#include <cctype>

// Public Functions

PirateTalk::PirateTalk() {
    /* PirateTalk constructor; initialize pirate dictionary */
    pirateDict[std::string("hello")] = "ahoy";
    pirateDict[std::string("excuse me")] = "arr";
    pirateDict[std::string("sir")] = "matey";
    pirateDict[std::string("boy")] = "matey";
    pirateDict[std::string("man")] = "matey";
    pirateDict[std::string("madame")] = "proud beauty";
    pirateDict[std::string("officer")] = "foul blaggart";
    pirateDict[std::string("the")] = "th\'";
    pirateDict[std::string("my")] = "me";
    pirateDict[std::string("your")] = "yer";
    pirateDict[std::string("is")] = "be";
    pirateDict[std::string("are")] = "be";
    pirateDict[std::string("restroom")] = "head";
    pirateDict[std::string("restaurant")] = "galley";
    pirateDict[std::string("hotel")] = "fleabag inn";
    pirateDict[std::string("coins")] = "doubloons";
    pirateDict[std::string("pirate")] = "buccaneer";
    pirateDict[std::string("friend")] = "mate";
    pirateDict[std::string("you")] = "ye";
    pirateDict[std::string("yes")] = "aye";
    pirateDict[std::string("understand")] = "be savvy";
}

/* 
* Even easier solution: iterates over the map and calls regex_replace on the input string after switching
* it to lowercase. Afterwards, re-capitalizes the first word of the sentence if it was capitalized.
*
*/
std::string PirateTalk::translateToPirate(const std::string & input) {
    std::string copy = input;       // local copy of string for tokens and comparison

    std::map<std::string, std::string>::iterator dictItr = pirateDict.begin();
    std::transform(copy.begin(), copy.end(), copy.begin(), tolower);
    
    while (dictItr != pirateDict.end()) {
        std::regex currKey(dictItr->first);
        copy = std::regex_replace(copy, currKey, dictItr->second);
        dictItr++;
    }

    // test code to see what made the regex register
    /* 
    std::string temp = input;
    std::transform(temp.begin(), temp.end(), temp.begin(), tolower);
    return std::regex_replace(temp, std::regex(pirateDict.begin()->first), pirateDict.at("hello"));
    */

   return getFinalStr(copy, input);
}



// Private Functions

/* 
* UFinalizes the string by comparing final string to the original., and capitalizing the 1st letter if necessary.
* tLS is the translation string, original is the input string. This only capitalizes the first letter
* of the sentence.
*/
std::string PirateTalk::getFinalStr(std::string tLS, const std::string & original) {
    if (std::isupper(original[0]) && !(isupper(original[0]) && isupper(tLS[0]))) {
        tLS[0] = toupper(tLS[0]);
    } 
    return tLS;
}

