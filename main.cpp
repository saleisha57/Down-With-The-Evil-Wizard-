#include "util.h"
#include "Game.h"

int main()
{
  srand(time(0)); // SET THE TIME OF THE PROGRAM
  Game g1;        // GENERATE GAME OBJECT

  bool again = true;  // SETS BOOLEAN AGAIN TO TRUE
  
  while(again)
    {
      g1.play_game();     // PLAY THE GAME
      again = go_again(); // ASK THE USER IF THEY WANT TO GO AGAIN
    }
  
  return 0;
}
