#pragma once
#include <stdbool.h>

/**
 * @file Create and Print Diamond
 */

/**
 * @brief Whitespace character
 */
const char SPACE = ' ';

/**
 * @brief Star/Asterix character 
 */
const char STAR = '*';

/**
 * @brief Prints a character to stdout a certain number of times. 
 * 
 * @param character is the character being printed
 * 
 * @param num is the number of times the character will be printed
 */
void printCharacterNumTimes(char character, int num);

/**
 * @brief Prints a newline.
 */
void printNewline();

/**
 * @brief Creates the top half and base of the diamond.
 * 
 * @param baseSize is the number of stars forming the base
 */
void createDiamondTop(int baseSize);

/**
 * @brief Creates the bottom half of the diamond. 
 * 
 * @param baseSize is the number of stars forming the base
 */
void createDiamondBottom(int baseSize);

/**
 * @brief Creates the diamond.
 */
void createDiamond(int diamondBaseSize);

/**
 * @brief Checks if a given number is odd.
 * 
 * @param number is the number being checked
 */
bool isOdd(int number);