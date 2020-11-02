#include"3-1.h"
int main(){
    FILE *fp;
    char buf[80];
    memset(buf, 0, sizeof(buf));
    if((fp=fopen("./1.txt", "w"))==NULL)
        perror("open failed!\n");
    fgets(buf, sizeof(buf), stdin);
    printf("devices.Content is %s\n", buf);

    fwrite(buf, sizeof(buf), 1, fp);

    fclose(fp);
    return 0;
}
