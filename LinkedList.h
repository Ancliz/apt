
#ifndef ASSIGN2_LINKEDLIST_H
#define ASSIGN2_LINKEDLIST_H

#include "Node.h"
#include "Tile.h"

class LinkedList {
public:

   LinkedList();
   ~LinkedList();

   // Debug testing
   LinkedList(std::initializer_list<Node> l);

   // Return number of elements
   int size() const;
   
   // Add to front of list
   void push_front(Tile* data);

   // Add to back of list
   void push_back(Tile* data);

   // get tile at specified index
   Tile* at(int index) const;
   
   // Insert into list at specified index, current element at index and proceeding elements are now at index + 1
   // Exception is if inserting at last element, then it becomes the last element
   void insert(int index, Tile* data);
   
   // Fully remove from list, deleting data
   void remove(int index);

   // Remove and retrieve tile from front of list
   Tile* pop_front();

   // Remove and retrieve tile from back of list
   Tile* pop_back();


   // Remove all elements and delete their data
   void clear();
private:

   // Front of list
   Node* head;

   // Number of elements
   int length;

   // Call for request of indices that are illegal
   void out_of_bounds(int index);
};

std::ostream& operator<<(std::ostream &out, const LinkedList& list);

#endif // ASSIGN2_LINKEDLIST_H
