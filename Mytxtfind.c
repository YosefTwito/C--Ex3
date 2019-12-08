#include <stdio.h>
#include "Mytxtfind.h"

#define LINE 256
#define WORD 30

int Getline(char s[], FILE *f){
	
	fgets(s, LINE, f);
	int i=0;
	while (*(s+i)!='\n'){ 
		i++;
	}
	return i;
}

int substring(char *str1, char *str2){
	int i=0;
	int j=0;
	int len=0;

	while (*(str2+len*sizeof(char))!='\0'){ len++; }
	while (*(str1+i*sizeof(char))!='\0' && *(str2+j*sizeof(char))!='\0'){
		if (*(str1+i)==*(str2+j)){ j++; }
		else { j=0; }
		if (j==len) { return 1; }
		i++;
	}	
	return 0;
}

int similar (char *s, char *t, int n){
	int i=0, j=0;
	int slen=0, tlen=0;
	int strike=0;

	while (*(s+slen*sizeof(char))!='\0'){ slen++; }
	while (*(t+tlen*sizeof(char))!='\0'){ tlen++; }

	if (slen-tlen!=n) { return 0; }

	while (*(s+i*sizeof(char))!='\0' && *(t+j*sizeof(char))!='\0'){
		if (*(s+i)==*(t+j)){ i++; }
		else { i+=2; strike++; }
		if (strike>n) { return 0; }
		j++;
	}	
	return 1;
}

