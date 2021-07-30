#include <stdio.h>

int stringLength(char * word) {
    int count = 0;
    while (word[count] != '\0') {
      count++;
    }
    return (count);
}

int main() {
  int   index = 0;
  char  word[100];
  printf("Please enter a word to get its length (< 100 characters): ");
  scanf("%s", word);
  printf("\"%s\" has a length of %d\n", word, stringLength(word));

  return (0);
}
