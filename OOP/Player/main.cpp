#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;
public:
    Player(string name_val="None",int health_val=0,int xp_val=0);
    //~Player();
};

// Player::Player()
//     :Player{"None",0,0}
// {
//     cout <<"No-arg constructor"<<endl;
// }

Player::Player(string name_val, int health_val, int xp_val)
    :name {name_val}, health {health_val}, xp {xp_val}{
        cout << "3-args constructor"<< endl;
    }

// Player::~ Player()
// {
// }
 
int main(){
    Player empty;
    Player Frank{"Frank"};
    Player villian {"Villian",100,324};
}