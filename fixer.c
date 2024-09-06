#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main(int argc, char **argv){
  if(argc < 3){
    printf("ERROR: Not enough Arguments.\n");
    return 1;
  }
  FILE *inputFile;
  char line[1000];
  inputFile = fopen(argv[1], "r");
  FILE *modifiedFile;
  modifiedFile = fopen("correctedIndenting.py", "w");
  int currentChar;
  int i;
  while(fgets(line, 1000, inputFile)){
    for(currentChar = 0; currentChar < strlen(line); currentChar++){
      if(line[currentChar] == 9 || line[currentChar] == 11){
	for(i = 0; i < atoi(argv[2]); i++){
	  fputc(32, modifiedFile);
	}
      }
      else{
      	fputc(line[currentChar], modifiedFile);
      }
    }
  }
  return 0;
}
