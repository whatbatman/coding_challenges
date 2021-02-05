#include<stdio.h>
#include <stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize){
	for(int i = 0; i < strsSize; i++) {
		printf("%s\n", strs[i]);
	}
	return strs;
}

int main() {
	int rows = 3;
char **c = calloc (rows,sizeof(char*));
c[0] = "flower";
c[1] = "flow";
c[2] = "flight";
	longestCommonPrefix(c, 3);
	return 0;
}
