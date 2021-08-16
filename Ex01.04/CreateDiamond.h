#ifndef _CREATE_DIAMOND_
#define _CREATE_DIAMOND_
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
 * @param num is the number of times the character will be printed
 */
void PrintCharacterNumTimes(char character, int num);

/**
 * @brief Prints a newline.
 */
void PrintNewline(void);

/**
 * @brief Creates the top half and base of the diamond.
 * 
 * @param baseSize is the number of stars forming the base
 */
void CreateDiamondTop(int baseSize);

/**
 * @brief Creates the bottom half of the diamond. 
 * 
 * @param baseSize is the number of stars forming the base
 */
void CreateDiamondBottom(int baseSize);

/**
 * @brief Creates the diamond.
 */
void CreateDiamond(int diamondBaseSize);

/**
 * @brief Checks if a given number is odd.
 * 
 * @param number is the number being checked
 */
bool IsOdd(int number);

#endif