#include <stdio.h>

int main(void) 
{
	int test_case, col, n, m, avg, t, i, j,  k, l,  sub, s, sum;
	
	scanf("%d", &test_case);

	for(int z = 1; z<=test_case; z++)
	{
	    scanf("%d %d %d", &n, &m, &avg);
	    
	    int a[n][m];
	    
	    // Input of the array matrix
	    for(i = n-1; i>=0; i--)
	    {
	        for(j = m-1; j>=0; j--)
	        {
	            scanf("%d", &a[i][j]);
	        }
	     }
	    
	    // maximum square dimension of the sub matrix
	    if (m==n)
	        s = m-1;
	    else s=n;
	        
	   // t -> final answer
	   t = 0;
	   // Sub matrix run 
	   for (sub = 1; sub <=s; sub++)
	   {
	         col = m-1;
	       // Run matrix 
	       for(i = 0; i<n; i++)
	       {
	           if(col == 0) break;
	           for(j = 0; j<m ; j++)
	           {
	               if(col <j) break;
	               sum = 0;
	               // Out of boundary check 
	               if (!((sub+j>m)|| (sub+i>n)))
	               {
	                   for(k = i; k<sub+i; k++)
	                       for(l = j; l<sub+j; l++)
	                           sum += a[k][l];
	               
	                   
	                   //printf("%f\t",avg1);
	                   
	                   if ((sum/(sub*sub)) >= avg)
	                        t++;
	                   else  
	                      col = j;     
	               }
	           }
	          // printf("\n");
	       }
	   }
	  
	 printf("%d\n", t);
	}

}
