#include <stdio.h>

int main() {

char str[] = "Akhilawe";
int cnt = 0;
char temp;
while (str[cnt]!= '\0'){
    cnt++;
}
printf("no of char in string: %d\n", cnt);

for (int i=0 ; i<=((cnt)/2)-1; i++){
    temp = str[i];
    str[i]= str[cnt-1-i];
    str[cnt-1-i] = temp;
    
}

printf("reversed string: %s\n", str);

    return 0;
}

/*
cnt = sizeof(str)/sizeof(str[0]);
printf("no of char in string: %d\n", cnt);

for (int i=0 ; i<=((cnt)/2)-1; i++){
    temp = str[i];
    str[i]= str[cnt-2-i];
    str[cnt-2-i] = temp;
    
}
*/
