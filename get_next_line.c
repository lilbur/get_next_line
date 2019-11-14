#include "get_next_line.h"

int get_next_line(const int fd, char **line)
{
  ssize_t     bytes;
  char        buffer;
  static char *ln[MAX_FD];
  
  bytes = read(fd, buffer, BUFF_SIZE);
  
