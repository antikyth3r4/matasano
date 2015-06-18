
#ifndef SET_1_H
#define SET_1_H

#include "myHeaders.h"

extern const char hex_to_int[];
extern const char int_to_hex[];
extern const char base64Symbols[];

char * hex_to_base64(const char * data, size_t input_size, size_t * output_size);
char * fixed_xor(const char * string1, const char * string2, size_t size);

#endif
