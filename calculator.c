#include <stdio.h>
#include<stdlib.h>

int add (int a, int b);

int main (){
    int a, b;
    char op;
    scanf("%d %c %d",&a,&op,&b);
    printf("%d %c %d = ", a, op, b);

    switch (op)
    {
    case '+':
        printf("%d",add(a,b));
        break;
    case '-':
        printf("%d",a-b);
    case '/':
        printf("%d",a/b);
        break;
    case '*':
        printf("%d",a*b);
    
    default:
        break;
    }
}

int add (int x, int y){
    return x+y;
}
