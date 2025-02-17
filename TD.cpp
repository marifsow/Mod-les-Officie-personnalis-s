#include<stdio.h>
int main(){
	
	int tab[3][3];
	int tab2[3][3];
	int i,j;
	for(i=0;i<3;i++){
	  	for(j=0;j<3;j++){
	  		printf("saisir un entier tab\n");
	  		scanf("%d",&tab[i][j]);
		}
}
	for(i=0;i<3;i++){
     for(j=0;j<3;j++){
    	printf("%d\t",tab[i][j]);

}
printf("\n");
}
	  for(j=0;j<3;j++){
	  	for(i=0;i<3;i++){
	  		scanf("%d",&tab2[j][i]);
		  }
	  }
	  for(j=0;j<3;j++){
	  	for(i=0;i<3;i++){
	  		printf("%d\t",tab2[j][i]);
		  }
printf("\n");
	  }
	  for(i=0;i<3;i++){
	  	for(j=0;j<3;j++){
	  		if(tab[i][j]==tab2[j][i])
	  		printf("tab est une matrice symetriqute\t");
	  		else
	  		printf("tab n est pas une matrice symetrique\t");
		  }
		  printf("\n");
	  }
	  return 0;
  } 
  
  
   
    /*int main(){
	int tab[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&tab[i][j]);
			
		}
		printf("\n");
   }
       for(i=0;i<3;i++){
    	     printf("%d",tab[i][i]);
  	
   }
        printf("\t");
}*/


/*int main (){
	int tab[3][3];
	int i,j;
	int max=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&tab[i][j]);
		}
	}
	   max=tab[0][0];
	   for(i=0;i<3;i++){
	   	for(j=0;j<3;j++){
	   		if(max<tab[i][j]){
	
	   		max=tab[i][j];
		   }
		  
	   }
   }
     printf("le plus grand element de la matrice est :%d\n",max);
  
}*/
 

 /*int main (){
 	int tab [3][3];
 	int s=0,i;
   
   
     for(i=0;i<=3;i++){
     	s=s+i;
	 }
	 printf("la somme est :%d",s);
}*/


 
  /*int main(){
	int tab[3][3];
	int tab2[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&tab[i][j]);
		}
	}
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",tab[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		    scanf("%d",&tab2[i][j]);
		}
	}
	for(i=0;i<3;i++){
	     for(j=0;j<3;j++){
			printf("%d",tab2[i][j]);
		}
	}
		for(i=0;i<3;i++){
			for(j=0;j<3,j++){
				c=tab[i][j]*tab2[i][j];	
			}
		}
		printf("\n");
	
	}/*

  
  
  

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
