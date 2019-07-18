#include "../headers/Tracker.h"

// returns address of vector
const std::vector<std::vector<int> > &Tracker::retVec() const {
  return positionOfPieces;
};

// ugly function for checking if
// certain position is empty
bool Tracker::isEmpty(int *x, int *y) {
  // iterates through the vector
  for (int i = 0; i < positionOfPieces.size(); i++) {
    if ((*x == positionOfPieces[i][0]) && (*y == positionOfPieces[i][1]) ) {
      return false;
    }
  }
  return true;
}

// adds a piece to the board
// uses isEmpty to track
// if there is a piece on
// specific spot
void Tracker::addPiece(int *x, int *y, uint8_t *pColor) {
  // checks if it's inbounds
  if (pieceInbounds(x, y)) {
    // makes sure it is not empty
    if (isEmpty(x, y)) {
      // adds position to the vector
      positionOfPieces.push_back({*x, *y, *pColor});
    } else {
      printf("Position (%d, %d) is not empty\n", *x, *y);
      exit(-1);
    }
  } else {
    printf("(%d, %d) is out of bounds!\n", *x, *y);
    exit(-1);
  }
}

// used for moving pieces around
// function for updating piece
// on the board
void Tracker::updatePiece(int *currentPosX, int *currentPosY, int *newPosX, int *newPosY) {

  // checks if is not empty
  if (!isEmpty(currentPosX, currentPosY)) {
    // makes sure it's inbounds
    if(pieceInbounds(currentPosX, currentPosY)) {
      // iterates through the positions' vector
      for (int i = 0; i < positionOfPieces.size(); i++) {
        // looks for a specific value in the loop
        if (*currentPosX == positionOfPieces[i][0] && *currentPosY == positionOfPieces[i][1]) {
          // changes the value of x, y
          // when it finds the value it
          // is looking for
          positionOfPieces[i][0] = *newPosX;
          positionOfPieces[i][1] = *newPosY;
        }
      }
    }
  }
}

// Checks if the piece is
// inbounds... the piece's
// x and y value has to be
// less than 8 and higher
// than -1
bool Tracker::pieceInbounds(int *x, int *y) {
  if((*x > -1 && *x < 8) && (*y > -1 && *y < 8)) {
    return true;
  }
  return false;
}
