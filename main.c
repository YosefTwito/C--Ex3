#include <stdio.h>
#include "Mytxtfind.h"

#define LINE 256
#define WORD 30
int main(){

	char *mode = "r";
	FILE *f = fopen("input.txt", mode);
	if (f==NULL){
		printf("can't open file !@#!@#"); 
	}

	char s[LINE];
	char word[WORD];
	char func;
	Getline(s, f);

	int i=0;
	while (s[i]!=' '){ 
		word[i]=s[i]; i++; 
	}
	word[i]='\0';
	while (s[i]!='\0'){ 
		if (s[i]=='a'){ func='a'; }
		if (s[i]=='b'){ func='b'; }
		i++;
	}
	//printf("Word is: %s\nProgram is: %c\n\n", word, func);
	Getline(s, f);

	if (func=='a'){
		while (fgets(s, LINE, f)>0) {
			if (substring(s, word)) { printf("%s", s); }
		}
	}

	if (func=='b'){
		char t[WORD];
		while (fgets(s, LINE, f)>0) {
			i=0;
			int j=0;
			while (s[i]!='\0'){ 
				if (s[i]==' ' || s[i]=='\t' || s[i]=='\n'){ 
					t[j]='\0'; 
					if (similar(t, word, 1)) { printf("%s\n", t); } 
					if (similar(t, word, 0)) { printf("%s\n", t); } 
					j=0; 
				}
				else { t[j]=s[i]; j++; }
				i++;
			}

		}
	}

	fclose(f);
	return 0;
}
