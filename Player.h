
#ifndef ASSIGN2_PLAYER_H
#define ASSIGN2_PLAYER_H

#include <string>
#include "Tile.h"
#include "LinkedList.h"

class Player {
   public:
      Player();
      Player(std::string name);

      // Update the player's score
      void updateScore(int x);

      // Replace tile in hand with incoming tile
      void replaceTile(Tile* tile, Tile* replacement);

      // return specified tile
      Tile* getTile(std::string tileCode);

      // Get hand
      LinkedList& getHand();

      // Get a const reference for passing to stream
      const LinkedList& getHandConst() const;
      
      // Get scure
      int getScore() const;

      // Get name
      std::string getName() const;

   private:
      // Player name
      std::string name;

      // List of player tiles
      LinkedList hand;

      // PLayer score
      int score;
};

bool operator==(const Player& player1, const Player& player2);
std::ostream& operator<<(std::ostream &out, const Player& player);

#endif // ASSIGN2_PLAYER_H