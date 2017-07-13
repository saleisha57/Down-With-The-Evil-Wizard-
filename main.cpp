#include "util.h"
#include "base.h"

int main()
{
  srand(time(0)); // SET THE TIME OF THE PROGRAM
  
  bool again = true;
  
  while(again)
    {
      again = go_again(); // ASK THE USER IF THEY WANT TO GO AGAIN
    }
  
  return 0;
}
