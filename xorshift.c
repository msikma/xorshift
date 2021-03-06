#include <inttypes.h>
#include <xorshift.h>

uint32_t xor32() {
	static uint32_t y = 2463534242UL;
	y ^= (y << 13);
	y ^= (y >> 17);
	return (y ^= (y << 15));
}

uint32_t xor64() {
	static uint32_t x = 123456789, y = 362436069;
	uint32_t t = (x ^ (x << 10));
	x = y;
	return y = (y ^ (y >> 10)) ^ (t ^ (t >> 13));
}

uint32_t xor96() {
	static uint32_t x = 123456789, y = 362436069, z = 521288629;
	uint32_t t = (x ^ (x << 10));
	x = y;
	y = z;
	return z = (z ^ (z >> 26)) ^ (t ^ (t >> 5));
}

uint32_t xor128() {
	static uint32_t x = 123456789, y = 362436069, z = 521288629,
	  w = 88675123;
	uint32_t t = (x ^ (x << 11));
	x = y;
	y = z;
	z = w;
	return w = (w ^ (w >> 19)) ^ (t ^ (t >> 8));
}

uint32_t xor160() {
	static uint32_t x = 123456789, y = 362436069, z = 521288629,
	  w = 88675123, v = 5783321;
	uint32_t t = (x ^ (x << 2));
	x = y;
	y = z;
	z = w;
	w = v;
	return v = (v ^ (v >> 4)) ^ (t ^ (t >> 1));
}

uint32_t xor192() {
	static uint32_t x = 123456789, y = 362436069, z = 521288629,
	  w = 88675123, v = 5783321, d = 6615241;
	uint32_t t = (x ^ (x >> 2));
	x = y;
	y = z;
	z = w;
	w = v;
	v = (v ^ (v << 4)) ^ (t ^ (t << 1));
	return (d += 362437) + v;
}

double xor32f() {
  return xor32() / XORSHIFT_MAX_UINT32F;
}

double xor64f() {
  return xor64() / XORSHIFT_MAX_UINT32F;
}

double xor96f() {
  return xor96() / XORSHIFT_MAX_UINT32F;
}

double xor128f() {
  return xor128() / XORSHIFT_MAX_UINT32F;
}

double xor160f() {
  return xor160() / XORSHIFT_MAX_UINT32F;
}

double xor192f() {
  return xor192() / XORSHIFT_MAX_UINT32F;
}