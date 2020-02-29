
#include <stdio.h>
#include <string.h>

// place the shellcode inside the ""
unsigned char code[] = "\x"
int main(){
	int (*ptr)() = (int(*)())code;
	ptr();

}

