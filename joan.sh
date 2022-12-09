#! /bin/bash
cat >> hola.c << EOF
#include <stdio.h>
int main (){
    printf("Hola amigos del curso de arqui\n");

    return 0;
}
EOF
