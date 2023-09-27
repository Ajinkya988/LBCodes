/*
1. Open
2. Close the file


*/

#include<stdio.h>
#include<fcntl.h>  //file ctrl
#include<unistd.h>
#include<stdlib.h>

int main()
{

    int fd = 0 ;       //File discriptor
 
    fd = open("Demo.txt", O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file \n");
        return -1 ;
    }
    else
    {
        printf("file is successfully opened with FD %d\n",fd);
    }

    close(fd);

    return 0 ;
}