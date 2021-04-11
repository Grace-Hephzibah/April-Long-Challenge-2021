#include <stdio.h>

int main(void) 
{
	int test_case;
	unsigned long int n, m, avg, t, i, j,  k, l, n1, sub, s;
	float sum, avg1;
	int cont;
	
	scanf("%d", &test_case);

	for(int z = 1; z<=test_case; z++)
	{
	    scanf("%ul %ul %ul", &n, &m, &avg);
	    
	    unsigned long int a[n][m];
	    
	    // Input of the array matrix
	    for(i = n-1; i>=0; i--)
	    {
	        for(j = m-1; j>=0; j--)
	        {
	            scanf("%ul", &a[i][j]);
	            //printf("%d\t",a[i][j]);
	        }
	        //printf("\n");
	    }
	    //printf("\n");
	     /*for(i = 0; i<=n-1; i++)
	    {
	        for(j = 0; j<=m-1; j++)
	        {
	           // scanf("%d", &a[i][j]);
	            printf("%d\t",a[i][j]);
	        }
	        printf("\n");
	    }
	    printf("\n");*/
	    // maximum square dimension of the sub matrix
	    if (m==n)
	        s = m-1;
	    else s=n;
	        
	   // t -> final answer
	   t = 0;
	   
	   // Sub matrix run 
	   for (sub = 1; sub <=s; sub++)
	   {
	       // Run matrix 
	       for(i = 0; i<n; i++)
	       {
	           cont = 0;
	           for(j = 0; j<m; j++)
	           {
	               //if (cont ==1) break;
	               sum = 0.0;
	               n1 = 0;
	               
	               // Out of boundary check 
	               if (!((sub+j>m)|| (sub+i>n)))
	               {
	                   for(k = i; k<sub+i; k++)
	                   {
	                       for(l = j; l<sub+j; l++){
	                           sum += a[k][l];
	                           n1++; }
	                   }
	                   
	                   avg1 = sum/n1;
	                   //printf("%f\t",avg1);
	                   
	                   if (avg1 >= avg)
	                        t++;
	                   //else cont = 1;     
	               }
	           }
	          // printf("\n");
	       }
	   }
	  
	 printf("%ul\n", t); 
	}

}

