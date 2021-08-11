#ifndef _REVERSE_H_
#define _REVERSE_H_

/**
 * @brief A node which has a value and points to nodes before and after it. 
 */
typedef struct DoubleLinkedNode_t
{
    int value;
    Node *previous;
    Node *next;
} Node;

/**
 * @brief Initialize a node.
 * 
 * @param value is the integer value the node represents
 * @param previousNode points to the last node
 * @param nextNode points to the following node
 * 
 * @return the initialized node
 */
Node createNode(int value, Node* previousNode, Node* nextNode);

/**
 * @brief A list of nodes, with pointers to the beginning and end of the list.
 */
typedef struct DoubleLinkedList_t
{
    Node *head;
    Node *last;
} List;

/**
 * @brief Initialize a list.
 * 
 * @param head points to the beginning of the list
 * @param last points to the end of the list
 * 
 * @return the initialized list
 */
List createList(Node* head, Node* last);

/**
 * @brief Receives user input.
 * 
 * @return the integer inputted
*/
int receiveInput();

/**
 * @brief Receive user input continuously.
*/
void continuousInput();

#endif 