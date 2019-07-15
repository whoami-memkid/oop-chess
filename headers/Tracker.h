#include "main_headers.h"

#ifndef TRACKER_H
#define TRACKER_H

// Tracker class sits
// in between pieces
// and board

class Tracker {
private:
  // Vector for keeping track
  // of piece positions on the board
  std::vector<std::vector<int> > positionOfPieces;

public:
  // check the vector
  const std::vector<std::vector<int> > &retVec() const;

  // check if position is empty
  bool isEmpty(int *x, int *y);

  // add a piece to the board
  void addPiece(int *x, int *y);

  // update pieces on board
  void updatePiece(int *currentPosX, int *currentPosY, int *newPosX, int *newPosY);

  // checks if the piece is inbounds
  bool pieceInbounds(int *x, int *y);
};

#endif /* TRACKER_H */
