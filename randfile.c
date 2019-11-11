#include "randfile.h"

//A function that generates a random number by reading in the correct number of bytes from /dev/random.

int getRandNum(){
  int fd = open("/dev/random", O_RDONLY);
  int num;
  read(fd, &num, sizeof(num));
  if (errno){
    printf("Errno: %s\n", strerror(errno));
  }
  close(fd);
  return num;
}
