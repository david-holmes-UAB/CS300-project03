#include <stdio.h>
#include <map>
#include <string>

class RomanNumeral {
    private:
    /* Map of roman numeral values */
    std::map<char, int> numerals = 
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

    public:
    RomanNumeral() {
        /* empty contsructor */
    }

    int romanToDecimal(const std::string & str) {
        int total = 0;          // variable to keep track of total from roman numeral math

        for (int i = 0; i < str.length(); i++) {
            // If it is the last letter, just add
            if (i == (str.length() - 1)) {
                std::map<char, int>::iterator rmnItr = numerals.find(str[i]);
                if (rmnItr != numerals.end()) {
                    total += numerals.at(str[i]);
                }
            }
            // Otherwise, check is following number is greater and follow Roman numeral formula
            else {
                // Iterators to get values for key and the following key
                std::map<char, int>::iterator rmnCurr = numerals.find(str[i]);
                std::map<char, int>::iterator rmnNext = numerals.find(str[i + 1]);

                // ensures the character is a key in the map
                if ((rmnCurr != numerals.end()) && (rmnNext != numerals.end())) {
                    // If the current Roman numerlal is less than the one after it, subtract instead of add.
                    // Otherwise, add.
                    total = (numerals.at(str[i]) < numerals.at(str[i + 1])) ? 
                        total - numerals.at(str[i]) : total + numerals.at(str[i]);
                }

            }
        }

        return total;
    }

};

