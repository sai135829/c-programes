#include <stdio.h>
#include <stdio.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("sum function.c","r");
	if (fs==NULL)
	 {
	 	printf("file does not exist");
	 	exit(0);
	 }
	ft=fopen("multiplication function.c","w");
	if (ft==NULL)
{
	printf("unable to open a file");
	exit(0);
	
}
ch=fgetc(fs);
while(ch!=EOF)
{
	fputc(ch,ft);
	ch=fgetc(fs);
	
}
fclose(fs);
fclose(ft);
printf("files copies successfully");
return 0;
}
