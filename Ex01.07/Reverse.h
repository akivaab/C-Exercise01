#ifndef _REVERSE_H_
#define _REVERSE_H_

/**
 * @brief A node which has contains an integer value and points to the node before it. 
 */
typedef struct Node_t
{
    int value;
    struct Node *previous;
} Node;

/**
 * @brief A list of nodes, with a pointer to the end of the list.
 */
typedef struct LinkedList_t
{
    Node *last;
} List;

/**
 * @brief Initialize a node.
 * 
 * @param value is the integer value the node represents
 * @param previousNode points to the last node
 * 
 * @return the initialized node
 */
Node createNode(int value, Node *previousNode);

/**
 * @brief Initialize a list.
 * 
 * @param last points to the end of the list
 * 
 * @return the initialized list
 */
List createList(Node *last);

/**
 * @brief Receives user input.
 * 
 * @return the integer inputted
*/
int readInt(void);

/**
 * @brief Receive user input continuously.
*/
void inputContinuously(void);

/**
 * @brief Prints contents of list in reverse.
 * 
 * @param list of nodes whose values will be printed
*/
void printInReverse(List list);

#endif 