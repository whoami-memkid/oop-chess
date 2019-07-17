#include "../headers/Pawn.h"

// basic code so no error
// when compiling
void Pawn::move() {
  int *pPX;
  int *pPY;
  Tracker *ptrT;

  pPX = getPosX();
  pPY = getPosY();


  ptrT = getTracker();

  ptrT->addPiece(pPX, pPY);

  printf("%d,%d\n", *pPX, *pPY);
}
