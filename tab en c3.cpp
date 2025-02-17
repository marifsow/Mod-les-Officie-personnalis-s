#include<stdio.h>
int main(){
	 
	int tab[50];
	int i,v,n,tr=0;
	do{printf("donner le nombre des elements:");
	  scanf("%d",&n);
	  }while(n<0||n<50);
	  for(i=0;i<n;i++)
	  {
	     printf("donner element %d:",i+1);
	     scanf("%d",&tab[i]);
	 }
	 printf("donner element a rechercher:");
	 scanf("%d",&v);
	 for(i=0;i<n;i++){
	     	if(tab[i]==v)
	     	tr==1;
	     	break;
		 }
	     if(tr==0)
	      printf("element %d n appartient pas au tableau");
	    else
	    printf("element %d appartient au tableau");
}
