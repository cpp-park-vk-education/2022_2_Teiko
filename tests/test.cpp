#include <iostream>
#include <gtest/gtest.h>
#include "gmock/gmock.h"

#include "../include/dbms.h"

class MockDBMS : public DMBS {
public:
    MOCK_METHOD(state, addData, (data_t data), (override));
    MOCK_METHOD(data_t, getData, (/* Здесь будет идентификатор для получения данных */), (override));
    MOCK_METHOD(state, findData, (data_t data), (override));
};

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
