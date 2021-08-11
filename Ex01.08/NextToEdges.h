#ifndef _NEXT_TO_EDGES_
#define _NEXT_TO_EDGES_

/**
 * @file Find 2nd-Largest and 2nd-Smallest Values
 * 
 * @note Does not ignore duplicate numbers.
 */

/**
 * @brief The smallest value received so far.
*/
int g_smallest;

/**
 * @brief The second-smallest value received so far.
 */
int g_next_smallest;

/**
 * @brief The second-largest value received so far. 
 */
int g_next_largest;

/**
 * @brief THe largest value received so far.
 */
int g_largest;

/**
 * @brief Sets the g_smallest variable.
 * 
 * @param number is the value being assigned to g_smallest
 */
void setSmallest(int number);

/**
 * @brief Sets the g_next_smallest variable.
 * 
 * @param number is the value being assigned to g_next_smallest
 */
void setNextSmallest(int number);

/**
 * @brief Sets the g_largest variable.
 * 
 * @param number is the value being assigned to g_largest
 */
void setLargest(int number);

/**
 * @brief Sets the g_next_largest variable.
 * 
 * @param number is the value being assigned to g_next_largest
 */
void setNextLargest(int number);

/**
 * @brief Receives input from the user.
 * 
 * @return the number inputted by the user 
 */
int receiveInput();

/**
 * @brief Recieves input from the user in a loop.
 */
void inputContinuously();

/**
 * @brief Receives the first two numbers inputted (there must be at least two values for the program to work).
 */
void receiveTwoNumbersInput();

/**
 * @brief Compares a number to the global values to determine if it should replace one of them.
 * 
 * @param number to evaluate
 */
void compare(int number);

#endif