#ifndef INCLUDE_DBMS_H_
#define INCLUDE_DBMS_H_

#include "data.h"
#include "state.h"

class DMBS {
public:
    virtual state addData(data_t data) = 0;
    virtual data_t getData(/* Здесь будет идентификатор для получения данных */) = 0;
    virtual state findData(data_t data) = 0;

    virtual ~DMBS {}
};

#endif  // INCLUDE_DBMS_H_
