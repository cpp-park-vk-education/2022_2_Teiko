//
// Created by lilia on 19.11.2022.
//

#include "Player.h"

Player::Player():money(0), happyness(0), satiety(0), intelligence(0), game_position(0), role(nullptr), move_enable(false) {}

Player::~Player() {

}

void Player::increase_money(int value) {
    money+=value;
}

void Player::increase_happyness(int value) {
    happyness+=value;
}

void Player::increase_satiety(int value) {
    satiety+=value;
}

void Player::increase_intelligence(int value) {
    intelligence += value;
}

int Player::get_money() {
    return money;
}

int Player::get_happyness() {
    return happyness;
}

int Player::get_satiety() {
    return satiety;
}

int Player::get_position() {
    return game_position;
}

int Player::get_intelligence(){
    return intelligence;
}

string Player::get_role() {
    return role;
}

Player::Player(string _role): money(0), happyness(0), satiety(0), intelligence(0), game_position(0), role(_role), move_enable(false) {}


void Player::make_a_purchase(Store good, int num) {
    cout << "You have purchased " << good.get_good_name(num) << endl;
    switch(good.get_good_type(num)){
        case 'M':
            increase_money(good.get_good_value(num));
            break;
        case 'H':
            increase_happyness(good.get_good_value(num));
            break;
        case 'S':
            increase_satiety(good.get_good_value(num));
            break;
        case 'I':
            increase_intelligence(good.get_good_value(num));
            break;
    }
}

void Player::invest(int amount) {
    int winning = - amount*1000 + rand() % (amount*1000 - (- amount*1000) + 1 );
    if(winning > 0)
        cout << "Congratulations!!! Your investment brought income in amount of " << winning;
    else
        cout << "Unfortunately, you have lost " << abs(winning);
    increase_money(winning);
}

void Player::donate(int amount) {
    increase_money(-amount);
    increase_happyness(150);
    cout << "Money were donated to donation center \"Spend your money for generosity\"" << endl;
}

void Player::transfer_money(Player player, int amount) {
    increase_money(-amount);
    player.increase_money(amount);
    player.increase_happyness(50);
    cout << "Money were transfered to " << player.get_role() << endl;
}

void Player::make_move() {
    Player player;
    Store good;
    game_position++;
    int choice;
    cin >> choice;
    switch(choice){
        case 1:
            transfer_money(player, 200);
            break;
        case 2:
            donate(3);
            break;
        case 3:
            invest(90);
            break;
        case 4:
            make_a_purchase(good, 2);
            break;
        default:
            break;
    }

}





