#include <stdio.h>
#include <stdlib.h>
#include "tools.h"

int main(){
	enter(2);
	printLine('=', 100);
	enter(1);
	printf("SysProg Uebung 1");
	enter(1);
	printLine('-', 100);
	enter(3);
	printf("a) Anzahl der Kerne dieses CPUs laut 'nproc':");
	enter(2);
	system("nproc");
	
	enter(2);
	printLine('-', 100);
	enter(2);

	printf("b) Suche nach sse4 mit 'grep -o sse4 /proc/cpuinfo | sort -u':");
	enter(2);
	system("grep -o sse4 /proc/cpuinfo | sort -u");
	enter(2);
	printf("und nach avx2 mit 'grep -o axv2 /proc/cpuinfo | sort -u':");
	enter(2);
	system("grep -o avx2 /proc/cpuinfo | sort -u");
	
	enter(2);
	printLine('-', 100);
	enter(2);

	printf("c) Kernelversion laut 'uname -r':");
	enter(2);
	system("uname -r");
	
	enter(2);
	printLine('-', 100);
	enter(2);

	printf("d) Arbeitsspeicher des Rechners laut 'free -h'(das '-h' steht für human readable):");
	enter(2);
	system("free -h");

	enter(2);
	printLine('-', 100);
	enter(2);

	printf("e) IP-Adresse des Rechners mittels 'hostname -I'(alternativ geht 'ip addr show'):");
	enter(2);
	system("hostname -I");

	enter(2);
	printLine('-', 100);
	enter(2);

	printf("f) Hostname des Rechners laut 'hostname':");
	enter(2);
	system("hostname");

	enter(2);
	printLine('=', 100);
	enter(2);
	return 0;
}
