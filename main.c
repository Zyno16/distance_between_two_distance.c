#include <stdio.h>
#include <stdlib.h>

int main()
{int x1,x2,y1,y2,p1,p2;
float d;
 printf("Enter x1:");
 scanf("%d",&x1);
 printf("Enter x2:");
 scanf("%d",&x2);
 printf("Enter y1:");
 scanf("%d",&y1);
 printf("Enter y2:");
 scanf("%d",&y2);
p1=x2-x1;
p2=y2-y1;
 d=sqrt(pow(p1,2)+pow(p2,2));
 printf("%0.2f\n",d);
    return 0;
}
