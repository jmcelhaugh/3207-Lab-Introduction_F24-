//generates a random character between 'A' and 'Z'
#include <stdlib.h>
char randchar(){
    char r = 'A' + rand() % 26;
    return r;
}
