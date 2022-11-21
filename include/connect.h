#ifndef INCLUDE_CONNECT_H_
#define INCLUDE_CONNECT_H_

#include "data.h"
#include "state.h"

class Connection {
private:
    unsigned _userID;
    // здесь будет сокет
public:
    Connection() : _userID(0) {}

    state connect(/* здесь будет IP и порт */);
    state sendData(data_t data);
    data_t getData();
    state disconnect();

    ~Connection();
};

#endif  // INCLUDE_CONNECT_H_
