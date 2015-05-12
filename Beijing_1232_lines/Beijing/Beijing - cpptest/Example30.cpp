/*
  In this program srncat is called ten times in a loop, but the buffer 
  recieving that data isn't big enough, so there's a potential buffer
  overflow on line 9.
*/


main(int argc, char **argv)
{
  char *buffer = (char *)malloc(11);
  int i;

  buffer[0] = 0;

  for (i = 0; i < 10; i++)
    strncat(buffer, argv[i], 10);    // line 9
}
