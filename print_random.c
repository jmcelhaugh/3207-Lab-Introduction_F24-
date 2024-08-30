#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"
void rand_string(size_t size, char *s);
char* rand_string_alloc(size_t size);

int main(){
    srand(time(NULL));
    //generates the string and then prints it with 7 characters
    char *generatedString = rand_string_alloc(7);
    printf("%s\n", generatedString);
}

//Given Project code
char* rand_string_alloc(size_t size){
    char *s = malloc(size + 1);
    if (s) {
        rand_string(size, s);
    }
    return s;
}

//creates the string
void rand_string(size_t size, char *s){
    for(int i = 0; i < size; ++i){
        *s = randchar();
        ++s;
    }
    *s = '\0';
}
