#include "main_headers.h"

#ifndef PIECE_H
#define PIECE_H

class Piece {
public:
  // Accessors and mutators
  // Colors
  void setPieceColor(uint8_t *color);
  uint8_t *getPieceColor();

  // Name
  void setPieceName(char *name);
  char *getPieceName();

  // Positions
  void setPosX(int *x);
  int *getPosX();
  void setPosY(int *y);
  int *getPosY();

  // Captures
  // void captures();
  // int *getCaptures();

  // Test Func()
  void say();

  // pure virtual
  // Makes the class abstract
  // Move every piece has a different move function
  virtual void move(int *x, int *y) = 0;

private:
  // vars & pointers
  // Piece Color
  uint8_t color;
  uint8_t *pPieceColor = &color;

  // Piece name
  char pieceName[24];
  char *pPieceName = pieceName;

  // Piece position
  int x;
  int y;
  int *pPosX = &x;
  int *pPosY = &y;

  // Pieces captured
  int captures = 0;
  int *pCaptures = &captures;
};

#endif /* PIECE_H */
