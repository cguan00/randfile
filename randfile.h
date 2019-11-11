#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

//A function that generates a random number by reading in the correct number of bytes from /dev/random.
int getRandNum();
