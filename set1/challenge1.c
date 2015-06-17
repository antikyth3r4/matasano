#include "set1.h"

int main(int argc, char ** argv){

    if(argc != 2){
        printf("\n[!] Usage: %s <hex_string>\n", argv[0]);
        exit(1);
    }

    printf("\n[*] Data to encode: %s\n\n", argv[1]);
    size_t encoded_size;
    char * base64_data = hex_to_base64(argv[1], strlen(argv[1]), &encoded_size);
    printf("[*] Base64 data: ");
    int i;
    for(i=0;i<encoded_size;i++){
        printf("%c",base64_data[i]);
    }
    printf("\n\n");
    free(base64_data);
    exit(0);
}

