// test/test_my_code.cpp
#include <gtest/gtest.h>
#include "my_code.hpp"

// Test for the add function
TEST(MyCodeTest, AddTest) {
    EXPECT_EQ(add(2, 3), 5);   // 2 + 3 should equal 5
    EXPECT_EQ(add(-1, 1), 0);  // -1 + 1 should equal 0
    EXPECT_EQ(add(0, 0), 0);   // 0 + 0 should equal 0
}

// Test for the multiply function
TEST(MyCodeTest, MultiplyTest) {
    EXPECT_EQ(multiply(2, 3), 6);  // 2 * 3 should equal 6
    EXPECT_EQ(multiply(-1, 1), -1);  // -1 * 1 should equal -1
    EXPECT_EQ(multiply(0, 10), 0);  // 0 * 10 should equal 0
}

// Main entry point for GoogleTest
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

