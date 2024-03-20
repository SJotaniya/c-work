#include <stdio.h>

main() {
    char alphabet = 'a';  
    int step = 4; 

    do {
        printf("%c ", alphabet);

        alphabet += step;

    } while (alphabet <= 'z');  

    printf("%c\n",alphabet);  
}