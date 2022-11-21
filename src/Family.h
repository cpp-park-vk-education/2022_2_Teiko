//
// Created by lilia on 19.11.2022.
//

#ifndef UNTITLED1_FAMILY_H
#define UNTITLED1_FAMILY_H

#include "Player.h"

class Family {
private:
    string name;
    int happyness;
    int money;
    int satiety;
    int intelligence;
    int n;
    int whose_move;
    Player* family_structure;
    int moves_num;
public:
    Family();
    ~Family();
    Family(string _name, int _n, Player* _players);

    Player get_player(int num);

    int get_family_money();
    int get_family_happyness();
    int get_family_satiety();
    int get_moves_num();
    string get_family_name();
    int get_family_intelligence();
    int get_n();

    void change_player();
    void decide_whose_move();

    void move();
};


#endif //UNTITLED1_FAMILY_H
