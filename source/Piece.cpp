#include "../headers/Piece.h"

// Takes a pointer to uint8_t
// stores the value in the color var
// in the object
void Piece::setPieceColor(uint8_t *color) {
    *pPieceColor = *color;
}

// Returns the address of pointer
// to color
uint8_t *Piece::getPieceColor() {
  return pPieceColor;
}

// Takes a pointer to a string
// sets value of pieceName to
// string stored in it
void Piece::setPieceName(char *name) {
  pPieceName = name;
}

// Returns the address that
// points to pieceName
char *Piece::getPieceName() {
  return pPieceName;
}

// sets posX throught pointer
// passed from function
void Piece::setPosX(int *x) {
  *pPosX = *x;
}

// gets address of pointer
// that points to value of
// x
int *Piece::getPosX() {
  return pPosX;
}

// sets posY throught pointer
// passed from function
void Piece::setPosY(int *y) {
  *pPosY = *y;
}

// gets address of pointer
// that points to value of
// Y
int *Piece::getPosY() {
  return pPosY;
}

// void Piece::captures() {
//   *pCaptures++;
// }

// int *Piece::getCaptures() {
//   return pCaptures;
// }

// Test function to
// make sure that class
// is working properly
void Piece::say() {
  printf("Works!\n");
}
