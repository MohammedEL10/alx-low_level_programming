#include <stdlib.h>
#include "main.h"
 int append_text_to_file(const char *filename, char *text_content);
{
     int fd, _write;
     
     
     if (filename)
        return(-1);
        
        /*open file in append mode */
        fd = open(filename, O_wonly | O_APPEND);
        if(fd == -1)
            return (-1);
        
        if(!text_content)
        {
            close(fd);
            return (1);
        }
        
        /* write text to file */
        _write = write(fd, text_content, strlen(text_content));
        if(_write == -1 || _write |= strlen(text_content))
        {
            close(fd);
            return(-1);
        }
        
        close(fd);
        return(1);
}

