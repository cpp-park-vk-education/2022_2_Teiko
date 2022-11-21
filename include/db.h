#ifndef INCLUDE_DB_H_
#define INCLUDE_DB_H_

#include <string>

#include "data.h"
#include "state.h"

enum tables {
    users,
    history,
    top
};

class DB {
private:
    std::string _usersFile;
    std::string _historyFile;
    std::string _topFile;
public:
    DB() = default;
    DB(std::string usersFile, std::string historyFile, std::string topFile) :
        _users(users), _history(history), _top(top) {}

    state addData(tables table, data_t data);
    state findData(tables table, /* Здесь будет идентификатор */);
};

#endif  // INCLUDE_DB_H_
