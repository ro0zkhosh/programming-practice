#include<stdio.h>

int main(){
  char _s[] = "Salam Kako.";
  char s[100];

  scanf("%[^\n]%*c",s);
  printf("%s\n", s);
  


  return 0;
}
