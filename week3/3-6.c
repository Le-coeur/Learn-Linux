#include"3-1.h"

int main(){
    FILE *fp;
    char buf[80];
    printf("open and creat test_file .\n");
    fp=(fopen("test_file", "w"));
    if(fp == NULL)
        err_exit("fopen failed!\n");   
    printf("writing string to test_file. \n");
    fputs("test date", fp);
    if((fp=freopen("test_file", "r", fp)) == NULL)
        perror("freopen failed!\n");
    printf("the string is %s \n", buf);
    fgets(buf,sizeof(buf), fp);
    printf("the string is \"%s\"\n", buf);
    fclose(fp);

    return 0;
}
