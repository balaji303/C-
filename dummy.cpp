/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *p,q[7];
    int i=0;
    p=(char *)malloc(100);
    printf("Enter");
    scanf("%s",p);
    while(*p!='\0'){
        q[i]=*p;
        i++;
        p++;
    }
    printf("%d",sizeof(q));
    for(i=0;q[i];i++){
    printf("%c",q[i]);
    }
    return 0;
}
 ============================================================================
 Name        : FirstCtask.c
 Author      : Balaji
 Version     : 2
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
char *p,y[10];
int i=0,cNewLine=0,cSplChar=0;
printf("Enter the string (End it with a tab button):");
p=(char*)malloc(100);
// y=(char*)malloc(100);
scanf("%[^\t]s",p);
printf("The entered string is:%s",p);
while(*p!='\0'){
if( ((int *)*p >= 33 && (int *)*p <= 47) || (((int *)*p >= 58 && (int *)*p <= 64)) || ((int *)*p >= 91 && (int *)*p <= 96) || ((int *)*p >= 122 && (int *)*p <= 126) ) {
cSplChar++;
y[i]=*p;
i++;
}
if(*p=='\n'){
  cNewLine++;
     }
p++;
}
printf("\nNumber of Special char:\t%d",cSplChar);
printf("\nNumber of New line    :\t%d",cNewLine);
printf("\nThe special character are:");
for(int j=0;j<i;j++){
    printf("%c",y[j]);
}
return 0;
}
