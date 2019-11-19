#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFSIZE 1024
# define MAX_FD 256
# include <unistd.h>

typedef struct  s_list
{
  void          *content
  stuct s_list  *next;
}               t_queue;

int get_next_line(const int fd, char **line)
  
#endif
