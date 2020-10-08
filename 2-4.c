#include"ch01.h"
int main(){
	int cnt=0;
	while(1){
		char name[64]={0};
		snprintyf(name, sizeof(name), "c.txt", cnt);
		int fd = creat(name,644);
		sleep(5);
		cnt++;
	}
	return 0;
}
