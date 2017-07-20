#ifndef __CHARACTER_H__
#define __CHARACTER_H__


#include "base.h"

class Character // THE CHARACTER CLASS
{
 public:
  
  Character() {};
  
  
  void set_health()
  {
    _hp = set_hp();
    cout<<_hp<<endl;
  }
  
  
  int set_hp()
  {
    int health_holder;
    
    if(_race == "Elf" || _race == "elf")
      {
	health_holder = (rand() % ((25-20)+1)+20);
      }
    else if(_race == "Human" || _race == "human")
      {
	health_holder = (rand() % ((25-20)+1)+20);
      }
    else if(_race == "Orc" || _race == "orc")
      {
	health_holder = (rand() % ((30-25)+1)+25);
      }
    else
      {
	health_holder = (rand() % ((25-20)+1)+20);
      }
    
    return health_holder;
  }
  


  string get_health_s()
  {
    return to_string(_hp);
  }





  void set_name(string name)
  {
    _name = name;
  }

  void set_race(string race)
  {
    _race = race;
  }

  void set_class(string cla)
    {
      _class = cla;
    }

  string get_name()
  {
    return _name;
  }
  
  string get_race()
  {
    return _race;
  }
  
  string get_class()
  {
    return _class;
  }


  void make_attack() // DETERMINES THE ATTACK/MAGIC DAMAGE
  {
    int attack = rand() % 10;
    cout<<attack<<endl;
  }


 protected:
  string _name, _race, _class;
  int _hp;
  
};


#endif
