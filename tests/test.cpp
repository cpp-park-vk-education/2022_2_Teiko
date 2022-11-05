#include <iostream>
#include <gtest/gtest.h>
#include "../include/hello.h"

TEST(Tests, hello) {
    EXPECT_STREQ("Hello world!", printHello().c_str());
}

TEST(Tests, bye) {
    EXPECT_STREQ("Bye world!", printBye().c_str());
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
