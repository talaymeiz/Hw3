#define TXT 1024
#define WORD 30
#include <stdio.h>
#include <math.h>
#include<string.h>
#include "head.h"

int functionA(char w[], char str[]){
 
    int ff= 0;
    int gnum=0;
    gim(w, &gnum);
    for (int i=0; i<strlen(str); i++){
        int nstr=0;
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
            for (int j=i; j<strlen(str); j++){
                int n= str[j];
                if(n<=122 && n>=97){
                    n= n-96;
                }
                else if(n<=90 && n>=65){
                    n= n-64;
                }
                else{
                    n=0;
                }
                nstr= nstr+n;
                if (nstr==gnum){
                    if (ff>0){
                        printf("~");
                    }
                    ff++;
                    for (int k=i ; k<=j ; k++){
                        printf("%c" , str[k]);
                    }
                }
                if (nstr>=gnum){
                    j=strlen(str);
                }
            }
        }
    }    
    return 0;
}

 
int gim(char w[], int* pg){

    int num=0;
    for (int i=0; i<strlen(w); i++){
        int n= w[i];
        if(n<=122 && n>=97){
            n= n-96;
        }
        else if(n<=90 && n>=65){
            n= n-64;
        }
        num=num +n;
    }
    *pg= num;
    return 0;
}

int functionB(char w[], char str[]){

    

    // printf(" \n");
    // printf("\nAtbash Sequences: ");

    int flagfort=0;

    // char s[strlen(w)];

    char s[strlen(w)];
    s[strlen(w)]='\0';

    for (int i=0; i<strlen(w); i++){

        char c= w[i];

        azby(&c);

        s[i]= c;

    }

    for (int i=0; i<strlen(str); i++){

        char stri= str[i];

        char s0= s[0];

        if(stri==s0){

            int indexs=1;

            int j=i;

            int flag=0;

            for (j=i+1; j<strlen(str) && indexs<strlen(s) && flag==0; j++){  

                char strj= str[j];

                char sind= s[indexs]; 

                if(strj==sind){

                    indexs++;

                } 

                else if(strj==32 || strj==9 || strj==10){

                } 

                else{

                    flag++;

                }        

            }

            if (flag==0 && j-i+1>=strlen(s)){ //&& j-i+1==strlen(s)

                // printf("strlen(s):%ld, i:%d, j:%d\n", strlen(s),i,j);

                if (flagfort>0){

                    printf("~");

                }

                flagfort++;            

                for (int k=i ; k<=j-1 ; k++){

                    printf("%c" , str[k]);

                }

            }

        }

        char se= s[strlen(s)-1];

        if(stri==se){

            int indexs=1;

            int j=i;

            int flag=0;

            for (j=i+1; j<strlen(str) && indexs<strlen(s) && flag==0; j++){  

                char strj= str[j];

                char sind= s[strlen(s)-indexs-1]; 

                if(strj==sind){

                    indexs++;

                } 

                else if(strj==32 || strj==9 || strj==10){

                } 

                else{

                    flag++;

                }        

            }

            if (flag==0 && j-i+1>=strlen(s)){

                if (flagfort>0){

                    printf("~");

                }

                flagfort++;            

                for (int k=i ; k<=j-1 ; k++){

                    printf("%c" , str[k]);

                }

            }

        }

    }

    return 0;

}

 
int azby(char* pa){

    // printf("in azby________\n");
    int n= *pa;
    // printf("the leter: %c, the valey:%d\n",*pa,n);
    if(n>=97 && n<=122){
        n= n-96;
        n= n+(13-n)*2+1+96;

    }
    else if(n>=90 && n<=65){
        n= n-64;
        n= n+(13-n)*2+1+64;
    }
    else{
        return 0;   
    }
    char charValue = n;// return to ascii
    // printf("the leter: %c, the valey:%d\n",charValue,n);
    *pa= charValue;
    return 0;
}  


int functionC(char w[], char str[]){

    int ff=0;
    for (int i=0; i<strlen(str); i++){ //run on char in str
        int flag1= mystrchr(w, str[i]);                    // if str[i] in w
        char leters[strlen(w)]; //the leters in w
        for (int k=0; k<strlen(w); k++){
            leters[k]= w[k];
        }
        if (flag1==1){ // if str[i] in w//pa!= nullptr
            int flag2=0; 
            int num=0;
            int j=i; 
            while (flag2==0 && num<strlen(w) && j<strlen(str)){
                if (mystrchr(leters, str[j])== 1){
                    num++;
                    removeFirst(leters,str[j]);
                    j++;
                }
                else if(str[j]==32 || str[j]==9 || str[j]==10){
                    j++;
                }
                else{
                    flag2++;
                }
            }
            if(num==strlen(w)){
                if (ff>0){
                    printf("~");
                }
                ff++;
                for (int k=i ; k<=j-1 ; k++){
                    printf("%c" , str[k]);
                }
            }
        }
    }
}


void removeFirst(char * str, const char toRemove){
    int i = 0;
    int len = strlen(str);

    while(i<len && str[i]!=toRemove)
        i++;

    while(i < len){
        str[i] = str[i+1];
        i++;
    }
}


int mystrchr(char str[], char charToRemmove){

    for (int i=0; i<strlen(str); i++){
        if (charToRemmove==str[i]){
            return 1;
        }
    }
    return 0;
}  