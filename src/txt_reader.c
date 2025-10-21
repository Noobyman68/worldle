#include <stdio.h>
#include <stdlib.h>

#define word_size 5

int read_words(){
  FILE *file;

  if((file = fopen("..\\resources\\sgb-words.txt", "r")) == NULL){
    printf("Error opening sgb-words file");
    return -1;
  }

  char line[word_size];
  
  while((fgets(line, word_size, file)) != NULL){
    printf("%s\n", line);
  }
  return 0;
}

int main(){
  int check;
  if((check = read_words()) == -1){
    printf("Error");
  }
  return 0;
}
