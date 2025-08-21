#include <stdio.h>
int factorial(int x) {
    int fact= 1;
    for(int i=2; i<=x; i++){
            fact = fact * i;
    }
    return fact;
   
}
int main() {
  int n;
  printf("emter the n : ");
  scanf("%d",&n);
  int r;
  printf("emter the r : ");
  scanf("%d", &r);
  int ncr = factorial(n) / (factorial(r) * factorial(n - r));
  printf("%d",ncr);
  return 0;
}
//   int nfact= factorial(n);
//   int rfact=factorial(r);
//   int nrfact=factorial(n-r);
//   for(int i=2; i<=n; i++){
//     nfact=nfact*i;
//   }
//   for (int i = 2; i <= r; i++)
//   {
//       rfact = rfact * i;
//   }
//   for (int i = 2; i <=n- r; i++)
//   {
//       nrfact = nrfact * i;
//   }
