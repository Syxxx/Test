#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main() 
{  
    int list[50],i,j,a,n,m; 
    srand((unsigned)time(NULL));
	printf("«Î ‰»În∫Õm£∫"); 
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++) 
    {
      while(1) 
        { 
            a = rand()%n+1; 
            for(j=0;j<i;j++) 
              if(list[j]==a) break;              
            if(j==i) 
            {
               list[i]=a; 
                break; 
            }
        }
    } 
    for(i=0;i<m;i++) 
        printf("%d ",list[i]);
    getchar();
    getchar();
    return 0; 
}
