#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int T;
  char s[10][1000];
  scanf("%d\n", &T);
  for(int i=0; i<T; i++){
    scanf("%[^\n]%*c", s[i]);
  }
  //debug
  for(int i=0; i<T; i++){
      printf("%s %u\n", s[i], strlen(s[i]));
  }

  for(int i=0; i<T; i++){
    char * s_even = (char *) malloc((strlen(s[i])+1)/2);
    char * s_odd = (char *) malloc((strlen(s[i])+1)/2);
    for(int j=0; j<strlen(s[i]); j++){
      j%2 ? (s_odd[(j)/2] = s[i][j]) : (s_even[(j)/2] = s[i][j]);
      s_odd[((j)/2)+1] ='\0';
      s_even[((j)/2)+1] ='\0';
    }
    printf("%s %s\n", s_even, s_odd);
  }

  return 0;
}
