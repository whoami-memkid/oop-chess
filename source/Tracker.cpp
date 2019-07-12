#include "../headers/Tracker.h"

const std::vector<std::vector<int> > &Tracker::retVec() const {
  return positionOfPieces;
};

// ugly function for checking if
// certain position is empty
bool Tracker::isEmpty(int *x, int *y) {

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
void Tracker::addPiece(int *x, int *y) {
  if (isEmpty(x, y)) {
    positionOfPieces.push_back({*x, *y});
  } else {
    printf("There is a piece at location (%d, %d) already!\n", *x, *y);
    exit(-1);
  }
}

// used for moving pieces around
// function for updating board
void Tracker::updatePiece(int *currentPosX, int *currentPosY, int *newPosX, int *newPosY) {
  for (int i = 0; i < positionOfPieces.size(); i++) {
    if (*currentPosX == positionOfPieces[i][0] && *currentPosY == positionOfPieces[i][1]) {
      positionOfPieces[i][0] = *newPosX;
      positionOfPieces[i][0] = *newPosY;
    }
  }
}
