 #include <string.h>
 int get_buff(char *user_input){
  char buff[4];
  memcpy(buff, user_input, strlen(user_input)+1);
  return 0;
 }
 
  int main(int argc, char *argv[]){
  get_buff(argv[1]);
  return 0;
 }