#include "get_next_line.h"

int get_next_line(const int fd, char **line)
{
  ssize_t     bytes;
  char        *buffer;
  static char *ln[MAX_FD];
  
  if (**line != NULL || fd > MAX_FD)
    return (-1);
  buffer = NULL;
  while((bytes = read(fd, &buffer, BUFF_SIZE) > 0)
        {
          ln[fd] = ft_strjoin(ln[fd], buffer);
          if (strchr(buffer, '\n'))
          {
            *line = buffer;
          }
 }
    
