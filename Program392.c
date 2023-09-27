/*
1. Open
2. Close the file


*/

#include<stdio.h>
#include<fcntl.h>  //file ctrl
#include<unistd.h> //universal standard file , funtions declared
#include<stdlib.h>

int main()
{

    int fd = 0 ;       //File discriptor
    char Fname[30];

    printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);
 
    fd = open(Fname, O_RDONLY);   

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