#ifndef INCLUDE_SERVER_H_
#define INCLUDE_SERVER_H_

#include "data.h"

class Server {
private:
    /* Здесь будет IP и порт */
public:
    Server() = default;

    state auth(/* Здесь будут данные пользователя какие-то */);
    state sendData(data_t data);
    data_t getData();

    ~Server() = default;
};

#endif  // INCLUDE_SERVER_H_
