#include "Player.h"
#include "Util.h"

Player::Player() {}
Player::Player(std::string name) : name(name), score(0) {}

void Player::replaceTile(Tile* tile, Tile* replacement) {
    int index = -1;
    for(int i = 0; i < hand.size(); ++i) {
        if(hand.at(i) == tile)
            index = i;
    }
    hand.remove(index);
    hand.insert(index, replacement);
}

Tile* Player::getTile(std::string tileCode) {
    Tile* retTile = nullptr;

    for(int i = 0; i < hand.size(); ++i) {
        Tile* tile = hand.at(i);
        
        if(tile->colour == tileCode[0] && tile->shape == charToInt(tileCode[1]))
            retTile = tile;
    }
    return retTile;
}

void Player:: updateScore(int x) {
    score += x;
}

int Player::getScore() const {
    return score;
}

const LinkedList& Player::getHandConst() const {
    return hand;
}
LinkedList& Player::getHand() {
    return hand;
}


std::string Player::getName() const {
    return name;
}

bool operator==(const Player& p1, const Player& p2) {
   return p1.getName() == p2.getName();
}
