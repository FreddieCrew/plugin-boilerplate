/*
# natives.hpp

Contains all the `PAWN_NATIVE_DECL` for native function declarations.
*/

#ifndef PROJECTNAME_NATIVES_H
#define PROJECTNAME_NATIVES_H

#include <string>

#include <amx/amx2.h>

#include "common.hpp"

namespace Natives {
cell printl(AMX* amx, cell* params);
}

#endif
