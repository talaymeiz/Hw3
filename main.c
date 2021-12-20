#ifndef TXT
#define TXT 1024
#endif
#ifndef WORD
#define WORD 30
#endif

#include "head.h"
#include <math.h>
#include <stdio.h>
#include<string.h>

int main(){
    int i = 0;
    int j = 0;
    char word[WORD] = { '\0' };
    char text[TXT] = { '\0' };
    char ch_w;
    char ch_t;

    //to get the word
    do{
       scanf("%c",&ch_w);
       word[i] = ch_w;
       i++;
    }
    while(ch_w != 9 && ch_w != 10 && ch_w != 32 && i<WORD);

    //to get the txt
     do{
       scanf("%c",&ch_t);
       text[j] = ch_t;
       j++;
    }
    while(ch_t != '~' && j<TXT);

    word[strlen(word)-1]= '\0';
    text[strlen(text)-1]= '\0';

   //  printf("the word: %s\n", word);
   //  printf("the text: %s\n", text);

    printf("Gematria Sequences: ");
    functionA(word,text);
    printf("\nAtbash Sequences: ");
    functionB(word,text);
    printf("\nAnagram Sequences: ");
    functionC(word,text);
    // printf("\nend\n");

    return 0;
}
