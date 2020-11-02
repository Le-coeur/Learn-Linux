#include"3-1.h"
int main(){
    FILE *fp;
    char buf[80];
    memset(buf, 0, sizeof(buf));
    fp = fopen("./1.txt", "a+");
    fputs("\t append new infomation!", fp);
    fp = freopen("./1.txt", "r", fp);
    fgets(buf, sizeof(buf), fp);
    printf("Contrnt of file: %s\n", buf);
    fclose(fp);
    return 0;
}
