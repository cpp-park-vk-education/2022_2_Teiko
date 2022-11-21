#ifndef UNTITLED1_MOVE_H
#define UNTITLED1_MOVE_H

#include <vector>
#include <string>
#include "Family.h"
#include "Store.h"

using namespace std;


class Move {

public:

    virtual void make_move(Family family);

    virtual void make_a_purchase(Shop goods, int num);

    virtual void invest(int amount);

    virtual void donate(int amount);

    virtual void transfer_money(Player player, int amount);
};


#endif //UNTITLED1_MOVE_H
