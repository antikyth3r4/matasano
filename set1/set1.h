
#ifndef SET_1_H
#define SET_1_H

#include "myHeaders.h"

char * hex_to_base64(const char * data, size_t input_size, size_t * output_size);
char * fixed_xor(const char * string1, const char * string2, size_t size);
static const char hex_to_int[] = { [0 ... 255] = -1,
                            ['0'] = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                            ['A'] = 10, 11, 12, 13, 14, 15,
                            ['a'] = 10, 11, 12, 13, 14, 15         };

static const char int_to_hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

static const char base64Symbols[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                              'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                              'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
                              'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
                              'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                              'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                              'w', 'x', 'y', 'z', '0', '1', '2', '3',
                              '4', '5', '6', '7', '8', '9', '+', '/'};


#endif
