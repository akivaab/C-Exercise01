#ifndef _FIX_ID_
#define _FiX_ID_

/**
 * @file Find ID Check-Sum
 */

/**
 * @brief fixes an incomplete ID number.
 *
 * @param id is the given ID number
 *
 * @return the check-sum that will validate the ID number
 */
int FixID(int id);

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

/**
 * @brief Calculate the check-sum of a certain sum.
 * 
 * @param sum is the sum of the digit of the ID number
 * 
 * @return the check-sum
 */
int GetCheckSum(int sum);

#endif