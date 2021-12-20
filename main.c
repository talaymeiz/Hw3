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

    printf("the word: %s\n", word);
    printf("the text: %s\n", text);

    // printf("Gematria Sequences: ");
    // functionA(word,text);
    // printf("\nAtbash Sequences: ");
    // functionB(word,text);
    // printf("\nAnagram Sequences: ");
    functionC(word,text);
    // printf("\nend\n");

    return 0;
}

// #define TXT 1024
// #define WORD 30
// #include <stdio.h>
// #include <math.h>
// #include "head.h"

// int main(){

//     char a='a';
//     char c='c';
//     char word[31];
//     int i=0; 
//     printf("Enter word:\n");
//     while(a!=' ' && a!='\n' && a!='\t' && i<30){
//         scanf("%c", &a);
//         word[i]= a;
//         //a= leter;
//         i++;
//     }
//     word[i-1]= '\0';
//     scanf("%c", &c);
 
//     char text[1025];
//     i=0; 
//     // printf("the leter a:-%c-\n", a);
//     printf("Enter text:\n");
//     char b='b';
//     while(b!='~' && i<1024){
//         // printf("in while\n");
//         scanf(" %c", &b);
//         // printf("the leter b:-%c-\n", b);
//         text[i]= b;
//         //a= leter;
//         i++;
//     }
//     text[i-1]= '\0';

//     printf("the word: %s\n", word);
//     printf("the text: %s\n", text);

//     // functionA(word,text);
//     // functionB(word,text);
//     functionC(word,text);
//     printf("\nend\n");


//     return 0;
// }