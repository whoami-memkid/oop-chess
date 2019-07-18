#include "../headers/Pawn.h"

// basic code so no error
// when compiling
void Pawn::move() {
  Tracker *ptrT;
  int *pPY;
  int posY;
  // allocates memory in the heap
  pPY = (int*)malloc(sizeof(int));
  posY = *(getPosY());

  // checks if pPY is a NULL pointer
  if (pPY == NULL) {

    printf("Error allocating memory!\n");
    exit(-1);

  } else {

    *pPY = posY + 1;
    ptrT = getTracker();

    // checks if ptrT is a NULL pointer
    if (ptrT == NULL) {
      printf("NULL pointer to tracker! Use setTracker(Tracker &refTracker)\n");
      exit(-1);
    }
    
    ptrT->updatePiece(getPosX(), getPosY(), getPosX(), pPY);
  }

  free(pPY);
}
