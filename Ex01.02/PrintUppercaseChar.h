#pragma once

/**
 * @file Print Uppercase Characters
 */

 /**
  * @brief accepts character from user
  *
  * @return inputted character
  */
char receiveInput();

/**
 * @brief converts given character to uppercase
 * 
 * @param character to convert
 * 
 * @return capitalized character
 */
char convertToUppercase(char character);

/**
 * @brief print a given character
 *
 * @param character to print
 */
void printChar(char character);

/**
 * @brief print inputted characters continuously
 */
void printContinuously();
