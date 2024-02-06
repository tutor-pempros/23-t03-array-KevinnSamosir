// 12S23015 - Kevin Kristoforus Samosir

#include <stdio.h>

int main(int _argc, char **_argv)
 {
  int m,i,j;
       

  scanf("%d",&m);

  int n [m];

  for (i=0; i<m; i++) {
    scanf("%d",&n[i]);
  }
  
  for (int j = i + 1; j < m; j++) {
   
  }for (i=0; i<m; i++) {
    for(j=i+1; j<m; j++) {
      if (n[i] > n[j]) {
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
      }
    }
  }
  printf("%d\n",n[0]);
  printf("%d",n[m-1]);

  return 0;
 }
