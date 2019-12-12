#include <stdio.h>
#include "Mytxtfind.h"

#define LINE 256
#define WORD 30
int main(){

	char buf, nextWord[WORD];
	char func, word[WORD];
	char s[LINE];
	int i=0;

	while ((buf=getc(stdin)) != ' '){
		word[i]=buf;
		i++;
	}
	word[i]='\0';
	i=0;

	while ((buf=getc(stdin)) != '\n'){ 
		if (buf == 'a'){ func='a'; }
		if (buf == 'b'){ func='b'; }

	}

	while ((buf=getc(stdin)) != '\n'){;}

	if (func=='a'){
		while ((buf=getc(stdin)) != EOF){ 
			s[0]=buf;
			while ((buf=getc(stdin)) != '\n'){
				s[i]=buf;
				i++;
			}
			s[i]='\n';
			i=1;
			if (substring(s, word)) { printf("%s", s); }
		}

	}

	if (func=='b'){
		while ((buf=getc(stdin)) != EOF){ 
			if (buf == '\n' || buf == '\t' || buf == ' '){
				nextWord[i] = '\0';
				i=0;
				if (similar(nextWord, word, 1)) { printf("%s\n", nextWord); } 
				if (similar(nextWord, word, 0)) { printf("%s\n", nextWord); } 
			}
			else {
				nextWord[i] = buf;
				i++;
			}
		}
	}

	return 0;
}
