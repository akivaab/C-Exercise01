#ifndef _VALIDATE_ID_
#define _VALIDATE_ID_
#include <stdbool.h>

/**
 * @file ID Validation 
 */

/**
 * @brief Checks if an ID number is valid.
 * 
 * @param id is the given ID number
 * 
 * @return whether the ID is valid or not
 */
bool ValidateID(int id);

/**
 * @brief Perfroms the Luhn algorithm on an ID.
 * 
 * @param id is the given ID number
 * 
 * @return the algorithm result
 */
int LuhnAlgorithm(int id);

/**
 * @brief Multiplies a number by two.
 * 
 * @param number to be doubled
 * 
 * @return the result 
 */
int MultiplyByTwo(int number);

/**
 * @brief Subtracts any double-digit number by nine, effectively adding its digits.
 * 
 * @param number to be potentially subtracted by nine
 * 
 * @return the sum of the number's digits 
 */
int SubtractByNineIfDoubleDigits(int number);

#endif