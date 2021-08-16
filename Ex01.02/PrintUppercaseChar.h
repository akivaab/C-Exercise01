#ifndef _PRINT_UPPERCASE_CHAR_
#define _PRINT_UPPERCASE_CHAR_

/**
 * @file Print Uppercase Characters
 */

/**
 * @brief Accepts character from user.
 *
 * @return inputted character
 */
char ReadChar(void);

/**
 * @brief Converts given character to uppercase.
 * 
 * @param character to convert
 * 
 * @return capitalized character
 */
char ConvertToUppercase(char character);

/**
 * @brief Print a given character.
 *
 * @param character to print
 */
void PrintChar(char character);

/**
 * @brief Print inputted characters continuously.
 */
void PrintContinuously(void);

#endif