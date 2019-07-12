#include "../headers/Pawn.h"
#include "../headers/Tracker.h"


int main() {
  Pawn p1;
  Pawn p2;
  Piece *pPawn1 = &p1;
  Tracker t;


  int x = 0;
  int y = 1;
  int *pX = &x;
  int *pY = &y;

  uint8_t setColor;
  uint8_t *pSColor;
  pSColor = &setColor;
  *pSColor = 1;
  uint8_t getColor;
  uint8_t *pGColor;
  pPawn1->setPosX(pX);
  pPawn1->setPosY(pY);

  pPawn1->setPieceColor(pSColor);
  pGColor = pPawn1->getPieceColor();

  t.addPiece(pPawn1->getPosX(), pPawn1->getPosY());
  t.addPiece(pPawn1->getPosX(), pPawn1->getPosY());


  std::vector<std::vector<int> > result = t.retVec();

  for (int i = 0; i < result.size(); i++) {
    for (int j = 0; j < result[i].size(); j++) {
      std::cout << result[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
