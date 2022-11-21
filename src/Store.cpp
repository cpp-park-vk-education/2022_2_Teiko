//
// Created by lilia on 20.11.2022.
//

#include "Store.h"

int Store::get_length() {
    return length;
}

string Store::get_good_name(int num) {
    return goods[num].name;
}

int Store::get_good_price(int num) {
    return goods[num].price;
}

char Store::get_good_type(int num) {
    return goods[num].type;
}

int Store::get_good_value(int num) {
    return goods[num].value;
}

void Store::add_item(string _name, int _price, char _type, int _value) {
    length++;
    goods[length - 1].name = _name;
    goods[length - 1].price = _price;
    goods[length - 1].type = _type;
    goods[length - 1].value = _value;
}

Store::Store() {

}

Store::~Store() {

}
