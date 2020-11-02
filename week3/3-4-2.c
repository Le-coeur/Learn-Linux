#include"3-1.h"

int main(){
    FILE *fp;
    int ret;
    char buf[80];
    memset(buf, 0, sizeof(buf));
    if((fp = fopen("./1.txt", "w")) == NULL)
        perror("open failed!\n");
    printf("please input string you want to store in file\n");
    fgets(buf, sizeof(buf), stdin);
    printf("Content is %s. The size of stream is %ld bytes. \n", buf, sizeof(buf));
    ret = fwrite(buf, 1, sizeof(buf), fp);
    printf("Actual writing number of item is %d\n", ret);
    fclose(fp);
    return 0;

}
