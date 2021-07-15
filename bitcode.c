#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc,char *argv[]){
	char c[300];
	char cc[300];
	char *ccc;
	char *cccc;
	char ccccc[2];
	strcpy(ccccc,".");
	cccc=ccccc;
	int i;
	strcpy(c,"clang ");
	strcat(c,argv[1]);
	strcat(c," -emit-llvm -S ");
	system(c);
	strcpy(cc,argv[1]);
	ccc=strstr(cc,cccc);
	ccc[0]=0;
	strcpy(c,"opt -f ");
	strcat(c,cc);
	strcat(c,".ll > ");
	strcat(c,argv[1]);
	strcat(c,".bc");
	system(c);
	return 0;
}
