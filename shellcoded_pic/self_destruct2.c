

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	return unlink(argv[0]);
}
