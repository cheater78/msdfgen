
#pragma once

// This file needs to be included first for all MSDFgen sources
#define MSDFGEN_PUBLIC /* just breaks everthing ifndef */
#ifndef MSDFGEN_PUBLIC
#include <msdfgen/msdfgen-config.h>
#endif

#include <cstddef>

namespace msdfgen {

typedef unsigned char byte;

}
