//
// Created by Екатерина on 18/10/2019.
//
#include "gtest/gtest.h"
#include "fib.h"

TEST(fib, PositiveValue) {
    EXPECT_EQ(1, fib(1));
    EXPECT_EQ(3, fib(4));
    EXPECT_EQ(5, fib(5));
    EXPECT_EQ(55,fib(10));
}
TEST (fib, ZeroValue) {
    EXPECT_EQ (0, fib(0));
}

TEST (fib, NegativeValue) {
    EXPECT_EQ (0, fib(-3));
    EXPECT_EQ (0, fib(-1));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}