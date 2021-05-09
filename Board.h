
#ifndef ASSIGN2_BOARD_H
#define ASSIGN2_BOARD_H

#include <vector>
#include <string>
#include "Tile.h"

class Board {
public:
   Board();
   ~Board();

   void addToBoard(Tile* t);
   int calcScoreFrom(std::string pos);
   bool legalPlacementAt(std::string pos, Tile* t);
   std::vector<std::vector<Tile*>> getBoard();
   int  getWidth();
   char getHeight();
   char getMaxRow();
   int  getMaxCol();

private:
   std::vector<std::vector<Tile*>> board;
   int width;
   int height;
   int maxWidth;
   int maxHeight;
};

#endif // ASSIGN2_BOARD_H