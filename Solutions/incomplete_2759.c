#include <stdio.h>
 
int main() {
 
    char a,A,B,C;
    scanf("%c",&a);
    if (a=='a' || a=='0' || a=='A'){
        A=a;
        B=a+1;
        C=a+2;
        printf("A = %c, B = %c, C = %c\n", A,B,C);
    }else if (a=='b' || a=='1' || a=='B'){
        A=a;
        B=a+1;
        C=a-1;
        printf("A = %c, B = %c, C = %c\n", A,B,C);
    }else if (a=='c' || a=='2' || a=='C'){
        A=a;
        B=a-2;
        C=a-1;
        printf("A = %c, B = %c, C = %c\n", A,B,C);
    }else{
        printf("\n");
    }
    
    return 0;
}
