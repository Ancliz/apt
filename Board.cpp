#include "Board.h"

Board::Board() {
    width = 26;
    height = 'Z';
    maxWidth = 30;
    maxHeight = 30;
    board = {};
}

Board::~Board() {}
   void Board::addToBoard(Tile* t) {

   }

   int Board::calcScoreFrom(std::string pos) {
       return 0;
   }
   bool Board::legalPlacementAt(std::string pos, Tile* t) {
       return false;
   }
   std::vector<std::vector<Tile*>> Board::getBoard() {
       return board;
   }
   int Board::getWidth() {
       return width;
   }
   char Board::getHeight() {
       return height;
   }
   char Board::getMaxRow() {
       return maxHeight;
   }

int Board::getMaxCol() {
    return maxWidth;
}