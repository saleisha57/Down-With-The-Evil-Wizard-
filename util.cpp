#include "util.h"
#include "base.h"

bool go_again() //Asks the user if they want to go again.
{
  char resp[100];

  cout<<"Play Again? yes or no? ";
  cin>>resp;

  return strcmp(resp, "yes") == 0; //strcmp the user's response and "yes".
}
