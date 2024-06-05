#pragma once

#include <stdexcept>
#include <string>

class InvalidShapeError : public std::exception {
private:
    std::string message;
public:
    InvalidShapeError(const std::string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};
