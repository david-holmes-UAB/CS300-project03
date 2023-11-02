# CS300-project03
Repository for CS300 Project 3 at UAB

The two classes implemented are PirateTalk and RomanNumeral. PirateTalk took the majority of the time, and underwent multiple extensive revisions, before settling on a rather short implementation.

Both classes were used as extra practice in utilizing iterators and maps. 

PirateTalk utilizes the keys to the map as regexes to perform a regex_replace operation. At the moment, this results in inconsistent capitalization to the source string, and a few unintended replacements if a word contains a regex - but is not the regex itself. RomanNumeral also utilizes a map to store an associated value to the appropriate letter. If the character is not the last in the string, compares the character to its antecedent to decide if it is necessary to subtract rather than add.

Unit tests are included for both classes' final outputs. Screenshots of the assertions and them being run can be seen below. One assertion initally failed due to a misspelling on my part, and another fails due to how my regex_replace functions.

![screens/asserts.png](https://github.com/david-holmes-UAB/CS300-project03/blob/b1cdf83122f9078b056f79099d1073a29e4665a8/screens/asserts.png?raw=true)

![screens/screen_tests.png](https://github.com/david-holmes-UAB/CS300-project03/blob/b1cdf83122f9078b056f79099d1073a29e4665a8/screens/screen_tests.png?raw=true)

![screens/commented_assertion.png](https://github.com/david-holmes-UAB/CS300-project03/blob/b1cdf83122f9078b056f79099d1073a29e4665a8/screens/commented_assertion.png?raw=true)
