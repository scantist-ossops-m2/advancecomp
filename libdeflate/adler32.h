/*
 * adler32.h - Adler-32 checksum algorithm
 */

#ifndef LIB_ADLER32_H
#define LIB_ADLER32_H

#include "lib_common.h"

extern u32 adler32(const void *buffer, size_t size);

#endif /* LIB_ADLER32_H */
