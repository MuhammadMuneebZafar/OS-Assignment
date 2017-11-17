#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main ()
{
	int arrayPoint=0;
    int result=0;
    int a[100];          
    for(int j=0;j<100;j++){     
        a[j]=j+1;
    }
    
	pid_t p1;
      fork();
      fork();
      
    if(p1==0){          
      for(int i=0;i<25;i++){
          result=result+a[arrayPoint];
		  arrayPoint++;
      }
      printf("child1 result:%d\n",result);
    }
    else{
        for(int i=0;i<25;i++){
          result=result+a[arrayPoint];
		  arrayPoint++;
      }
     printf("parent result:%d\n",result);
    }
	
	if(p1==0){          
	    for(int i=0;i<25;i++){
          result=result+a[arrayPoint];
		  arrayPoint++;
      }
      printf("child11 result:%d\n",result);
    }
    else{
        for(int i=0;i<25;i++){
          result=result+a[arrayPoint];
		  arrayPoint++;
      }
     printf("child1 result:%d\n",result);
    }

    if(p1==0){          
      for(int i=0;i<25;i++){
          result=result+a[arrayPoint];
		  arrayPoint++;
      }
      printf("child2 result:%d\n",result);
    }
    else{
        for(int i=0;i<25;i++){
          result=result+a[arrayPoint];
		  arrayPoint++;
        }
     printf("Parent result:%d\n",result);
    }
    
    if(p1>0){       
      for(int i=0;i<25;i++){
          result=result+a[arrayPoint];
		  arrayPoint++;
      }
    }
    else if (p1==0){
        for(int i=0;i<25;i++){
          result=result+a[arrayPoint];
		  arrayPoint++;
        }
        printf("parent result:%d\n",result);
    }
    printf("Final result:%d\n",result);
    return 0;

}