#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#define p 10 
main(){int a[21],b[11],s=0,t,ysf,i,n;
	srand((unsigned)time(0));
	for(i=1;i<21;i++)
	a[i]=rand()%10;
	for(i=1;i<11;i++)
    {ysf=rand()%2;
       if(ysf==0){
                   printf("%d+%d=",a[i],a[i+10]);
                   scanf("%d",&b[i]);
                   if(b[i]==a[i]+a[i+10]){printf("��ȷ+10��\n");s=s+p;}
                   else printf("����\n"); 
                 }
       	
      if(ysf==1){
      	         if(a[i]<a[i+10]){t=a[i];a[i]=a[i+10];a[i+10]=t;}
      	         printf("%d-%d=",a[i],a[i+10]);
      	         scanf("%d",&b[i]);
      	         if(b[i]==a[i]-a[i+10]){printf("��ȷ+10��\n");s=s+p;}
      	         else printf("����\n"); 
                } 
    }
 printf("�ܷ�%d",s);
 scanf("%d",n); 
}