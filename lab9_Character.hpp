#ifndef _CHARACTER
#define _CHARACTER

#include <string>
using namespace std;

enum TurnChoice { ATTACK = 0, HEAL = 1 };

class ICharacter
{
public:
    int GetAttack();
    int GetHealing();
    void Setup(name:const string&, atk:int, mag:int);
    int GetHP();
    void SubtractDamage(damage:int);
    string GetName();
    virtual TurnChoice GetChoice() = 0;

private:
    int m_hp;
    int m_atk;
    int m_mag;
    string m_name;
};

class NPC
{
public:
    virtual TurnChoice GetChoice();
};

class Player
{
public:
    virtual TurnChoice GetChoice();
};

#endif
