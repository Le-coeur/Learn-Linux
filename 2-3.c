#include"ch01.h"
int main(){
	struct utsname uts;
	char hostname[MAXHOSTNAMELEN];
	size_t size = MAXHOSTNAMELEN;
	if(gethostname(hostname,size)!=0)
		err_exit("could not get hostname");
	printf("hostname=%s\n",hostname);
	if(uname(&uts)<0)
		err_exit("could not get host information");
	printf("Stystem is %s on %s hardware\n", uts.sysname, uts.machine);
	printf("Nodename is %s\n", uts.nodename);
	printf("RElease is %s, Version is %s\n", uts.release, uts.version);
	exit(0);
}
