//
// Created by lilia on 19.11.2022.
//

#ifndef UNTITLED1_PLAYER_H
#define UNTITLED1_PLAYER_H

#include <string>
#include "Move.h"
#include "Good.h"
using namespace std;

class Player: public Move{
private:
    int money;
    int happyness;
    int satiety;
    int intelligence;
    int game_position;
    string role;
    bool move_enable;
public:
    Player();
    ~Player();
    explicit Player(string _role);
    void increase_money(int value);
    void increase_happyness(int value);
    void increase_satiety(int value);
    void increase_intelligence(int value);


    int get_money();
    int get_happyness();
    int get_satiety();
    int get_intelligence();
    int get_position();
    string get_role();

    void make_a_purchase(Store good, int num) override;
    void invest(int amount) override;
    void donate(int amount) override;
    void transfer_money(Player player, int amount) override;
    void make_move() override;

};


#endif //UNTITLED1_PLAYER_H
