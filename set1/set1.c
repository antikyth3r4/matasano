
#include "set1.h"


/**
 * Convert a hex array to a base64 string.
 * Returns a malloced memory so remember to free
 * after use.
 *
 *      Return: a pointer to array containing result
 */


char * hex_to_base64(const char * data, size_t input_size, size_t * output_size){
    
    *output_size = ((input_size+2)/3)*4;
    char * encoded_data =(char *) malloc(*output_size);
    
    int i=0, j=0;
    while(i<input_size){
        uint32_t a = i < input_size ? (hex_to_int[(int)data[i]] << 4) + hex_to_int[(int)data[i+1]] : 0; i+=2;
        uint32_t b = i < input_size ? (hex_to_int[(int)data[i]] << 4) + hex_to_int[(int)data[i+1]] : 0; i+=2;
        uint32_t c = i < input_size ? (hex_to_int[(int)data[i]] << 4) + hex_to_int[(int)data[i+1]] : 0; i+=2;
        uint32_t abc = (a << 16 ) + (b << 8) + c;
        
        encoded_data[j++] = base64Symbols[(abc>>18) & 0x3F];
        encoded_data[j++] = base64Symbols[(abc>>12) & 0x3F];
        encoded_data[j++] = base64Symbols[(abc>> 6) & 0x3F];
        encoded_data[j++] = base64Symbols[(abc>> 0) & 0x3F];
    }

    if(input_size%3==1){
        encoded_data[*output_size - 1] = '=';
        encoded_data[*output_size - 2] = '=';
    }               
    if(input_size%3==2){
        encoded_data[*output_size - 1] = '=';
    }

    return encoded_data;
    
}
/**
 * Takes two equal length buffers and xors them together. Remember to free
 * buffer after use.
 *
 * Input: two hex buffers
 * Output: pointer to result 
 */

char * fixed_xor(const char * string1, const char * string2, size_t size){
    int i;
    char * result = malloc(size);
    for(i=0;i<size;i++){
        uint8_t a = hex_to_int[string1[i]];
        uint8_t b = hex_to_int[string2[i]];
        result[i] = int_to_hex[a^b];
    }
    return result;
}




