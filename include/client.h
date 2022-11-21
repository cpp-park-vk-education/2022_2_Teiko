#ifndef INCLUDE_CLIENT_H_
#define INCLUDE_CLIENT_H_

#include "connect.h"
#include "data.h"
#include "state.h"
#include "userInfo.h"

class Client {
private:
    userInfo _info;
    Connect *_con;
public:
    Client() = default;

    state startSession();
    state sendData(data_t data);
    data_t getData();
    state endSession();

    ~Client();
};

#endif  // INCLUDE_CLIENT_H_
