/*
# natives.cpp

This source file contains the bridge between natives and implementations. I
prefer to keep the actual implementation separate. The implementation contains
no instances of `cell` or `AMX*` and is purely C++ and external library code.
The code here acts as the translation between AMX data types and native types.
*/

#include "natives.hpp"

using namespace std;

cell Natives::printl(AMX* amx, cell* params) {
    int len = NULL, ret = NULL;
    cell* addr = NULL;

    amx_GetAddr(amx, params[1], &addr);
    amx_StrLen(addr, &len);
    if (len) {
        len++;
        char* text = new char[len];
        amx_GetString(text, addr, 0, len);
        logprintf(text);
        delete[] text;
    }
    return 0;
}
