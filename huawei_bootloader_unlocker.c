/*
    Bruteforce Bootloader Unlocker for HUAWEI Related smartphones
    This is intended to be the fastest ever created bootloader unlocker
*/
#include <signal.h>
#include <stdlib.h>

#define LEN 37

unsigned long long base_start = 1000000000000000;

void resumer(){
    printf("\n\nLast used code was: %lld", base_start);
<<<<<<< HEAD
	FILE * fp = fopen("lastcode","w");
	fprintf(fp,"%llu",base_start);
	fclose(fp);
    exit(1);
=======
   return 1;
>>>>>>> parent of ceac393 (Merge pull request #1 from ClashLuke/patch-1)
}

int main( int argc, char **argv) {
	if ( argc > 1 ) {
<<<<<<< HEAD
	        char *base = argv[1];
	        base_start = atoll( base );
	} else {
		FILE * fp;
		if(fp= fopen("lastcode","w")) {
		fscanf(fp,"%llu",&base_start);
		fclose(fp);
		}
=======
		char *base = argv[1];
		base_start = atoll( base );
>>>>>>> parent of ceac393 (Merge pull request #1 from ClashLuke/patch-1)
	}
    signal(SIGINT, resumer);
	signal(SIGTERM, resumer);
    char fou[LEN] = "fastboot oem unlock ";
    char TOTAL[LEN];

    while (sprintf( TOTAL, "%s%llu", fou, base_start++) && system( TOTAL ));

    printf("Your unlock code is: ", base_start);

    return 1;
}
