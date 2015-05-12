//Unbounded string copy and concatenation,Cxdeveloper can not find
#include <iostream>
int main(int argc, char *argv[]) {
  char name[2048];
  strcpy(name, argv[1]);
  strcat(name, " = ");
  strcat(name, argv[2]);

 }