#include"3-1.h"

int main(){
    FILE *fp;
    char buf[80];
    printf("open and creat test_file .\n");
    if((fopen("test_file", "w")) == NULL){
        perror("fopen failed!\n");
        exit(1);
    }
    printf("writing string to test_file. \n");
    fputs("test date", fp);
    if((fp=freopen("test_file", "r", fp)) == NULL)
        perror("freopen failed!\n");
    printf("the string is %s \n", buf);
    fclose(fp);

    return 0;
}
