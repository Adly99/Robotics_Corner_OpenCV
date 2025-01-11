#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <vector>
#include <string>
#include <stdexcept>
#include <vector>
#include <sstream>
#include <cmath>  
#include <iostream>

namespace calc
{
    class Calculator 
    {
        public:
            Calculator();
            ~Calculator();

            // Basic arithmetic operations
            double add(double a, double b);
            double subtract(double a, double b);
            double multiply(double a, double b);
            double divide(double a, double b);

            // New features
            double power(double base, int exponent);
            double squareRoot(double value);

            // Memory storage functions
            void storeMemory(double value);
            double recallMemory() const;
            void clearMemory();

            // History tracking functions
            const std::vector<std::string>& getHistory() const;

            // Example operation with history
            double addWithHistory(double a, double b);
            double subtractWithHistory(double a, double b);
            double multiplyWithHistory(double a, double b);
            double divideWithHistory(double a, double b);

        private:
            void addToHistory(const std::string& operation, double result);

            double memory_;  // Memory storage
            std::vector<std::string> history_;  // History of operations
    };
}
#endif // CALCULATOR_HPP
