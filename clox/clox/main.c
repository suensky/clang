//
//  main.c
//  clox
//
//  Created by Huanhuan Sun on 10/30/23.
//

#include <stdio.h>
#include "greet.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    char* greetStr = greeet_string();
    printf("Hello, World! %s\n", greetStr);
    return 0;
}
