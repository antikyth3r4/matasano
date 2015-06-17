
#include "set1.h"

int main(int argc, char ** argv){
    if(argc != 3){
        printf("Usage: %s <hex string1> <hex string2>\n", argv[0]);
        exit(1);
    }
    printf("\narg1:\t%s\n", argv[1]);
    printf("arg2:\t%s\n", argv[2]);
    
    char * result = fixed_xor(argv[1], argv[2], strlen(argv[1]));
    printf("result:\t");
    int i;
    for(i=0;i<strlen(argv[1]);i++){
        printf("%c", result[i]);
    }
    printf("\n");
    exit(0); 
}
