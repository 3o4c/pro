#include <dirent.h>
#include <stdio.h>
#include <string.h>

int main(){

	char list[100][256];
	int listout = 0;
	int copylist = 0;

	DIR *dir = opendir(".");
		if(dir == 0){
			printf("no file");
		return 1;
		}

	struct dirent *entry;
		while ((entry = readdir(dir)) !=0){
			if (copylist < 100) {
				strcpy(list[copylist], entry->d_name);
				copylist++;
			}
		}

	for (listout; listout < copylist; listout++) {
		printf("%s\n", list[listout]);
	}
	
	closedir(dir);

return 0;
}