#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the value in a:\n");
    scanf("%d",&a);
    printf("enter the value in b:\n");
    scanf("%d",&b);
    printf("enter the value in c:\n");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("large is:%d\n",a);
        if(b>c)
        {
            printf("mid is:%d\n",b);
            printf("small is:%d\n",c);
        }
        else
        {
         printf("mid is:%d\n",c);
            printf("small is:%d\n",b);   
        }
    }
    else if(b>c&&b>a)
    {
        printf("large is:%d\n",b);
        if(a>c)
        {
          printf("mid is:%d\n",a);
            printf("small is:%d\n",c);  
        }
        else
        {
          printf("mid is:%d\n",c);
            printf("small is:%d\n",a);    
        }
    }
    else
    {
     printf("large is:%d\n",c);
        if(a>b)
        {
          printf("mid is:%d\n",a);
            printf("small is:%d\n",b);  
        }
        else
        {
          printf("mid is:%d\n",b);
            printf("small is:%d\n",a);
        }
    }

    return 0;
}