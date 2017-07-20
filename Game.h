#include "Character.h"

class Game
{
 public:
  
  Game() {};

  void play_game() // SETS THE CHARACTER AND RUNS THE GAME
  {
    set_character();

    Character c;
    
    c.set_name(name_holder);
    c.set_race(race_holder);
    c.set_class(class_holder);
    c.set_health();
    
    cout<<c.get_name() + " is a " + c.get_race() + " " + c.get_class() + "."<<endl;
    cout<<c.get_name() + " has " + c.get_health_s() + " base health."<<endl;
    
  }
  
  
  
  void set_character() // SETS THE CHARACTER
  {
    string temp_name, temp_class, temp_race;
    cout<<"Enter a name: ";
    cin>>name_holder;
    cout<<"Enter a race: ";
    cin>>race_holder;
    cout<<"Enter a class: ";
    cin>>class_holder;
  }
  

 protected:
  string name_holder, race_holder, class_holder; // CHARACTER STUFF
  
  
};
