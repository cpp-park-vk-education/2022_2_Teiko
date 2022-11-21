//
// Created by lilia on 20.11.2022.
//

#ifndef UNTITLED1_STORE_H
#define UNTITLED1_STORE_H
using namespace std;
#include <iostream>
#include <vector>

struct Goods {
    string name;
    int price;
    char type;
    int value;
};

class Store{
private:
    int length;
    vector <Goods> goods;
public:
    Store();
    ~Store();
    int get_length();
    string get_good_name(int num);
    int get_good_price(int num);
    char get_good_type(int num);
    int get_good_value(int num);
    //void set_good_price(int num, int value);
    void add_item(string _name, int _price, char _type, int _value);
};

#endif //UNTITLED1_STORE_H
