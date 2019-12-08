#ifndef _MYTXTFIND_H_
#define _MYTXTFIND_H_

	int Getline(char s[], FILE *f);

	int getword(char w[], char s[]);

	int substring(char *str1, char *str2);

	int similar (char *s, char *t, int n);

	void print_lines(char *str);

	void print_similar_words(char *str);

	#endif
