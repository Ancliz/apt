
#include "Node.h"

Node::Node(Tile* tile, Node* next) {
  this->tile = tile;
  this->next = next;
}

Node::Node(Node& other) {
  tile = other.tile;
  next = other.next;
}

Node::~Node() {
   if(tile != nullptr) {
      delete tile;
      tile = nullptr;
      next = nullptr;
   }
}
