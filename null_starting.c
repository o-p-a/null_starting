/*
   check start by zero
*/

#include <stdio.h>

int check_null_starting(char *filename)
{
    FILE *fp;
    int c;

    fp=fopen(filename,"rb");
    if(fp==NULL)
        return 10;

    c=fgetc(fp);
    fclose(fp);

    if(c==EOF)
        return 11;

    if(c=='\0')
        return 0;

    return 1;
}

int main(int ac,char *av[])
{
    if(ac<=1){
        printf("usage: null_starting <filename>\n");
        return 1;
    }else if(ac==2){
        return check_null_starting(av[1]);
    }else{
        return 100;
    }
}

