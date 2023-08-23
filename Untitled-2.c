//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
int main(){
int n = 25;
char p_n[]= "714a5c28ff4d";
char *dp;
char **pap;
//char n='a';
//char *p_n;
//int dp;

//p_n = "714a5c28ff4d";
dp=&p_n[0];
pap=&dp;
//printf("Numero: %i\n", *p_n);
//printf("Direccion: %p\n", p_n);
//write (1, p_n, 1);
while (*dp != '\0')
{
    write (1, &*dp, 1);
    dp++;
}
dp--;
write (1, "\n", 1);
write (1, &*pap, 1);
write (1, "\n", 1);
printf("Direccion: %p\n", dp);
dp--;
write (1, &*pap, 1);
write (1, "\n", 1);
printf("Direccion: %p\n", dp);
dp--;
write (1, dp, 1);
dp--;
write (1, dp, 1);
return 0;
}