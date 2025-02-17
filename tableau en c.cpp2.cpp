
  
 /* int main(){
  	 int tab[6];
  	 int i, s=0;
  	 
  	 for(int i=0;i<6;i++)
	   {
  	 	printf("donner un entier:\n") ;
		   
		   scanf("%d",&tab[i]);
		   
		  s=s+tab[i]; 
			    
  	 printf("la somme est %d",s);
	   }
	           
  }*/
  
   /*int main(){
   	  
   	  int tab[5];
   	  int i;
   	  for(i=0;i<5;i++){
   	  	printf("donner un nombre:\n");
   	 	scanf("%d",&tab[i]);
   	  	if(tab[i]>0) {
   	  	  	printf("t[i] est positive\n");
		}
   	  	  
		 }
   	  return 0;
   }*/
   
   
/*int main(){
    int tab[7];
    int i;
    for(i=0;i<7;i++)
	{
     	printf("donner un valeur\n");
      	scanf("%d",&tab[i]);
     	if(2%tab[i]==0)
		{
     		printf("tab[i] est paire");
     	} else
		{
     		printf("tab[i] est impaire");
		}
	}  
		return 0;
	
}*/


/*int main(){

  int tab[5][2];
  int i,j;
   for( i=0;i<5;i++)
   {
   	 for(j=0;j<2;j++)
		{
   	 	
		}
   }
   for(i=0;i<5;i++)
   {
   	 for(j=0;j<2;j++)
		{
   	 	printf("%d\t",tab[i][j]);
		}
		printf("\n");
   }
   
}*/



  /*int main(){
  	int tab[3][3];
  	int i,j;
  	for(i=0;i<3;i++){
  		for(j=0;j<3;j++){
  			scanf("%d",&tab[i][j]);
  			
		  }
	  }
	  
    for(i=0;i=3;i++){
    	for(j=0;j=3;j++){
    		printf("%d\t",tab[i][j]);
    
		}
		printf("\n");
		

		}
		 for(i=0;i<3;i++){
		 	for(j=0;j<3;j++){
		 		if(i==j){
		 			tab[i][j]=0;
				 }
			 }
		 }
		 printf("\n");
		 for(i=0;i<3;i++){
		 	for(j=0;j<3;j++){
		 		printf("%d\t",tab[i][j]);
			 }
		 }
	}*/
	
	
	#include<stdio.h>
	 int main(){
	 	int tab1[2][2];
	 	int tab2[2][2];
	 	int tab3[2][2];
	 	int i,j;
	 	for(i=0;i<2;i++){
	 		for(j=0;j<2;j++){
	 			printf("saisir un entier tab1\n");
	 			scanf("%d",&tab1[i][j]);
			}
		}
		for(i=0;i<2;i++){
	 		for(j=0;j<2;j++){
	 			printf("saisir un entier tab2\n");
	 			scanf("%d",&tab2[i][j]);
			}
		}
		printf("tab1\n");
			 for(i=0;i<2;i++){
			 	for(j=0;j<2;j++){
			 		printf("%d \t",tab1[i][j]);
		}
		printf("\n");
		 }
		 printf("tab2\n");
		 for(i=0;i<2;i++){
			 	for(j=0;j<2;j++){
			 		printf("%d \t",tab2[i][j]);
		}
		printf("\n");
		 }
		 
	 	
	 	  for(i=0;i<2;i++)
		   {
	 	  	for(j=0;j<2;j++)
			   {
	 	  	 tab3[i][j]=tab1[i][j]+tab2[i][j];
			   }
		   }
	 	 printf("tab3\n");
		  for(i=0;i<2;i++)
		  {
		  	for(j=0;j<2;j++)
			  {
		  		printf("%d \t",tab3[i][j]);
			  }
			  printf("\n");
		  }   
	 }

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

   
