//
// Created by lilia on 19.11.2022.
//

#include "Family.h"

Family::Family(): name(nullptr), happyness(0), money(0), satiety(0), n(0), family_structure(nullptr), moves_num(0){}

Family::Family(string _name, int _n, Player* _players): name(_name), happyness(0), money(0), satiety(0), n(_n), family_structure(_players), moves_num(0){}

Family::~Family(){
    delete family_structure;
}

int Family::get_family_money() {
    for(int i = 0; i < n; i++)
        money+=family_structure[i].get_money();
    return money;
}

int Family::get_family_happyness() {
    for(int i = 0; i < n; i++)
        happyness+=family_structure[i].get_happyness();
    return happyness;
}

int Family::get_family_satiety() {
    for(int i = 0; i < n; i++)
        satiety+=family_structure[i].get_satiety();
    return satiety;
}

string Family::get_family_name() {
    return name;
}

int Family::get_n() {
    return n;
}

int Family::get_family_intelligence() {
    for(int i = 0; i < n; i++)
        intelligence+=family_structure[i].get_intelligence();
    return intelligence;
}

Player Family::get_player(int num) {
    return family_structure[num];
}

int Family::get_moves_num() {
    for(int i = 0; i < n; i++)
        moves_num+=family_structure[i].get_position();
    return 0;
}

void Family::change_player() {
    whose_move = (whose_move + 1) % get_n();
}

void Family::decide_whose_move() {
    whose_move = 1 + rand() % get_n();
}

void Family::move(){
    if(moves_num == 0) decide_whose_move();
    else change_player();

    family_structure[whose_move].make_move();
}

