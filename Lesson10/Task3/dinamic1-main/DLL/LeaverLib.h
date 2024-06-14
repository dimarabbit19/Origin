#pragma once

#ifdef LEAVERLIB_EXPORTS
#define LEAVERLIB_API __declspec(dllexport)
#else
#define LEAVERLIB_API __declspec(dllimport)
#endif

#include <string>

class LEAVERLIB_API Leaver {
public:
    std::string leave(const std::string& name);
};