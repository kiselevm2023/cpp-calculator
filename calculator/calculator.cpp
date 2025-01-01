#include <iostream>
#include <limits>
#include <cmath>
#include "calculator.h"

bool ReadNumber(Number& result) {
    if (!(std::cin >> result)) {
        std::cerr << "Error: Numeric operand expected" << std::endl;
        return false;
    }
    return true;
}

bool RunCalculatorCycle() {
    Number current_value;
    if (!ReadNumber(current_value)) {
        return false;
    }

    Number memory = 0;
    bool memory_stored = false;

    std::string command;
    while (true) {
        std::cin >> command;

        if (command == "+") {
            Number value;
            if (!ReadNumber(value)) return false;
            current_value += value;

        } else if (command == "-") {
            Number value;
            if (!ReadNumber(value)) return false;
            current_value -= value;

        } else if (command == "*") {
            Number value;
            if (!ReadNumber(value)) return false;
            current_value *= value;

        } else if (command == "/") {
            Number value;
            if (!ReadNumber(value)) return false;
            if (value == 0) {
                current_value = std::numeric_limits<Number>::infinity(); // деление на ноль
            } else {
                current_value /= value;
            }

        } else if (command == "**") {
            Number value;
            if (!ReadNumber(value)) return false;
            current_value = std::pow(current_value, value);

        } else if (command == "=") {
            std::cout << current_value << std::endl;

        } else if (command == ":") {
            if (!ReadNumber(current_value)) return false;

        } else if (command == "c") {
            current_value = 0;

        } else if (command == "q") {
            return true;

        } else if (command == "s") {
            memory = current_value;
            memory_stored = true;

        } else if (command == "l") {
            if (!memory_stored) {
                std::cerr << "Error: Memory is empty" << std::endl;
                return false;
            }
            current_value = memory;

        } else {
            std::cerr << "Error: Unknown token " << command << std::endl;
            return false;
        }
    }
}