#pragma once

/**
 * @file Print Uppercase Characters
 */

 /**
  * @brief Accepts character from user.
  *
  * @return inputted character
  */
char receiveInput();

/**
 * @brief Converts given character to uppercase.
 * 
 * @param character to convert
 * 
 * @return capitalized character
 */
char convertToUppercase(char character);

/**
 * @brief Print a given character.
 *
 * @param character to print
 */
void printChar(char character);

/**
 * @brief Print inputted characters continuously.
 */
void printContinuously();
