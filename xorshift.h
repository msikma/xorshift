#include <inttypes.h>

#ifndef __XORSHIFT_FNS__
#define __XORSHIFT_FNS__

#define XORSHIFT_MAX_UINT32F 4294967295.0

uint32_t xor32();
uint32_t xor64();
uint32_t xor96();
uint32_t xor128();
uint32_t xor160();
uint32_t xor192();

double xor32f();
double xor64f();
double xor96f();
double xor128f();
double xor160f();
double xor192f();

#endif
