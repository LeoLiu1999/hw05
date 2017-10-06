go: headers.h main.c myStrChr.c myStrCmp.c myStrCpy.c myStrLen.c myStrnCat.c
	gcc -o stringy headers.h main.c myStrChr.c myStrCmp.c myStrCpy.c myStrLen.c myStrnCat.c
	
run: go
	 ./stringy