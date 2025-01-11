#include "Calculator.hpp"

namespace calc
{
    Calculator::Calculator() : memory_(0.0) // Ensure memory is initialized
    {
        // Constructor implementation
    }
    
    Calculator::~Calculator() 
    {
        // Destructor implementation
    }
    
    double Calculator::add(double a, double b) 
    {
        return a + b;
    }
    
    double Calculator::subtract(double a, double b) 
    {
        return a - b;
    }
    
    double Calculator::multiply(double a, double b) 
    {
        return a * b;
    }
    
    double Calculator::divide(double a, double b) 
    {
        if (b == 0) {
            throw std::invalid_argument("Division by zero is not allowed");
        }
        return a / b;
    }
    
    /// New method: power
    double Calculator::power(double base, int exponent) 
    {
        if (exponent < 0) {
            throw std::invalid_argument("Negative exponent not supported.");
        }
        double result = 1;
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
        return result;
    }
    
    /// New method: square root
    double Calculator::squareRoot(double value) 
    {
        if (value < 0) {
            throw std::invalid_argument("Cannot compute the square root of a negative number.");
        }
        return std::sqrt(value);
    }
    
    /// Memory storage
    void Calculator::storeMemory(double value) 
    {
        memory_ = value;
    }
    
    double Calculator::recallMemory() const 
    {
        return memory_;
    }
    
    void Calculator::clearMemory() 
    {
        memory_ = 0.0;
    }
    
    // History tracking
    void Calculator::addToHistory(const std::string& operation, double result) 
    {
        /// Create a string stream object (oss) to format the operation and result into a string
        std::ostringstream oss;
        
        /// Insert the operation and result into the string stream
        /// The result is formatted to 6 decimal places
        oss << operation << " = " << std::to_string(result);

        /// Add the formatted string to the history vector
        history_.push_back(oss.str());
    }
    
    /// Returns a constant reference to the history vector
    const std::vector<std::string>& Calculator::getHistory() const 
    {
        return history_;
    }
    
    /// Example operation with history
    double Calculator::addWithHistory(double a, double b) 
    {
        double result = add(a, b);
        /// Add the operation and result to the history
        addToHistory("add(" + std::to_string(a) + ", " + std::to_string(b) + ")", result);

        return result;
    }
}

