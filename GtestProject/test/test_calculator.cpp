
#include "Calculator.hpp"
#include <gtest/gtest.h>

using namespace testing;

namespace calc
{
    // Test fixture for the Calculator class
    class CalculatorTest : public ::testing::Test 
    {
        protected:
            calc::Calculator* calculator;
            void SetUp() override
            {
                calculator = new calc::Calculator();
                std::cout << "Starting test..." << std::endl;
            }
    
            void TearDown() override
            {
                calculator = nullptr;  // Reset the pointer
                delete calculator;  // Deallocate memory
                std::cout << "Test finished." << std::endl;
            }
    };
    
    // Test normal addition
    TEST_F(CalculatorTest, Add_ValidInputs_ReturnsCorrectSum) 
    {
        EXPECT_DOUBLE_EQ(calculator->add(2.0, 3.0), 5.0);
        EXPECT_DOUBLE_EQ(calculator->add(-1.0, 1.0), 0.0);
    }
    
    // Test normal subtraction
    TEST_F(CalculatorTest, Subtract_ValidInputs_ReturnsCorrectDifference) 
    {
        EXPECT_DOUBLE_EQ(calculator->subtract(5.0, 2.0), 3.0);
        EXPECT_DOUBLE_EQ(calculator->subtract(-1.0, -1.0), 0.0);
    }
    
    // Test normal multiplication
    TEST_F(CalculatorTest, Multiply_ValidInputs_ReturnsCorrectProduct) 
    {
        EXPECT_DOUBLE_EQ(calculator->multiply(2.0, 3.0), 6.0);
        EXPECT_DOUBLE_EQ(calculator->multiply(-1.0, 5.0), -5.0);
    }
    
    // Test division with valid inputs
    TEST_F(CalculatorTest, Divide_ValidInputs_ReturnsCorrectQuotient) 
    {
        EXPECT_DOUBLE_EQ(calculator->divide(6.0, 3.0), 2.0);
    }
    
    // Test division by zero
    TEST_F(CalculatorTest, Divide_ByZero_ThrowsInvalidArgument) 
    {
        EXPECT_THROW(calculator->divide(1.0, 0.0), std::invalid_argument);
    }
    
    // Test power with valid inputs
    TEST_F(CalculatorTest, Power_ValidInputs_ReturnsCorrectResult) 
    {
        EXPECT_DOUBLE_EQ(calculator->power(2.0, 3), 8.0);
        EXPECT_DOUBLE_EQ(calculator->power(5.0, 0), 1.0);
    }
    
    // Test power with negative exponent
    TEST_F(CalculatorTest, Power_NegativeExponent_ThrowsInvalidArgument) 
    {
        EXPECT_THROW(calculator->power(2.0, -1), std::invalid_argument);
    }
    
    // Test square root with valid input
    TEST_F(CalculatorTest, SquareRoot_ValidInput_ReturnsCorrectResult) 
    {
        EXPECT_DOUBLE_EQ(calculator->squareRoot(4.0), 2.0);
    }
    
    // Test square root of negative number
    TEST_F(CalculatorTest, SquareRoot_NegativeInput_ThrowsInvalidArgument) 
    {
        EXPECT_THROW(calculator->squareRoot(-1.0), std::invalid_argument);
    }
    
    // Test memory storage functionality
    TEST_F(CalculatorTest, Memory_StorageFunctionality) 
    {
        std::cout << "Storing value in memory." << std::endl;
        calculator->storeMemory(10.0);
        std::cout << "Memory value: " << calculator->recallMemory() << std::endl;
        EXPECT_DOUBLE_EQ(calculator->recallMemory(), 10.0);

        std::cout << "Clearing memory." << std::endl;
        calculator->clearMemory();
        EXPECT_DOUBLE_EQ(calculator->recallMemory(), 0.0);
        std::cout << "Memory cleared." << std::endl;
    }
    
    // Test history tracking
    TEST_F(CalculatorTest, History_Tracking) 
    {
        calculator->addWithHistory(2.0, 3.0);
        const auto& history = calculator->getHistory();
        EXPECT_EQ(history.size(), 1);
        EXPECT_EQ(history[0], "add(2.000000, 3.000000) = 5.000000");
    }
}

int main(int argc, char** argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}