#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;
  double c,t;
  double capital(int n, double cap,double taux);
    printf("entrer le nombre d'annee: ");scanf("%d",&a);
    printf("entrer le capital: ");scanf("%lf",&c);
    printf("entrer le taux: ");scanf("%lf",&t);
    printf("%lf",capital(a,c,t));
    return 0;
}
double capital(int n, double cap,double taux)
{
    int i;
    double T=(taux/100)+1;
  for(i=0;i<=n;i++)
  {
     cap=cap*T;
     printf("%lf\n",cap);
  }
  return 0;
}
