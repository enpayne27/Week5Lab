//
//  core.c
//  Week 5 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdio.h>

#include "core.h"

int swap(int * a, int * b) {
    if(a == NULL || b == NULL){return FALSE;}
    else{
	int temp = *a;
	*a = *b;
	*b = temp;
	return TRUE;
    }
}

//Hint: Capital case to lower case add 32.
int to_lower(char * s) {
    if(s == NULL){return FALSE;}
    else{
	while(*s != '\0'){
	   int lowercase = *s + 32;
	   *s = lowercase;
	   s++;
	}return TRUE;
    }
}

int inc_int_list(int * list, int length) {
    int i = 0;
    if(list == NULL){return FALSE;}
    while(i < length){
	list[i]  = list[i] + 1;
	i++;
    }return TRUE;
}

int core_main(int argc, const char * argv[]) {
    return 0;
}
