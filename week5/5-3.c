#include"ch.h"
int main(){
    char buf[20];
    int ret;
    FILE *fp=fopen("./tmp.txt", "w+");
    if(!fp){
        err_exit("File to open\n");
    }
    ret=fwrite("123", sizeof("123"), 1, fp);
    printf("write %d B\n", ret);
    memset(buf, 0, sizeof(buf));
    fseek(fp, 4, SEEK_SET);
    ret=fread(buf, 1, 8, fp);
    printf("write %s, ret is %d\n", buf, ret);
    fwrite("456", sizeof("456"), 1, fp);
    fclose(fp);
    return 0;
}