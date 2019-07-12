#include "Piece.h"

#ifndef PAWN_H
#define PAWN_H

class Pawn : public Piece {
public:
  // implementation of
  // pure virtual func()
  void move(int *x, int *y);
};

#endif /* PAWN_H */
