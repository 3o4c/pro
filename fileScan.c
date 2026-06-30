#include <dirent.h>
#include <stdio.h>


int main(){

	DIR *dir = opendir(".");
		if(dir == 0)
		return 1;

	struct dirent *entry = readdir(dir);
		while ((entry = readdir(dir)) !=0)

	printf("%s\n", entry->d_name);

	closedir(dir);

return 0;
}