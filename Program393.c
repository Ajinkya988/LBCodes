/*
 
Create new file

file creat(char *File_name, int Permission)

File_name  : Name of file that you want to create
Permission : Permissions for new file(0777)

Return value : On success
*/

#include<stdio.h>
#include<fcntl.h>  //file ctrl
#include<unistd.h> //universal standard file , funtions declared
#include<stdlib.h>
//Recheck
//completed
int main()
{

    int fd = 0 ;       //File discriptor
    char Fname[30];

    printf("Enter the file name that you want to create\n");
    scanf("%s",Fname);
 
    fd = creat(Fname, 0777);   

    if(fd == -1)
    {
        printf("Unable to create the file \n");
        return -1 ;
    }
    else
    {
        printf("file is successfully created  %d\n",fd);
    }

    return 0 ;
}