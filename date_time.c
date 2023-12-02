#include<stdio.h>
void registerclass();
void autoclass();
void staticclass();
//void externclass();
int main()
{
static int z;
printf("%s\n",__DATE__);
printf("%s\n",__TIME__);

 registerclass();
 autoclass();
 staticclass();
 //externclass();
//     printf("%d\n",y);
//       printf("%d\n",g);
printf("%d\n",z);
return 0;
}
void registerclass()
{
    register int y=9;
    printf("%d\n",y);
}
void autoclass()
{
     auto int g=24;
      printf("%d\n",g);
}
void staticclass()
{
     static int z=2;
      printf("%d\n",z);
}
/*void externclass()
{

    printf("\nDemonstrating extern class\n\n");

    // telling the compiler that the variable
    // x is an extern variable and has been
    // defined elsewhere (above the main
    // function)
    extern int x;

    // printing the extern variables 'x'
    printf("Value of the variable 'x'"
           " declared as extern: %d\n",
           x);

    // value of extern variable x modified
    x = 2;

    // printing the modified values of
    // extern variables 'x'
    printf("Modified value of the variable 'x'"
           " declared as extern: %d\n",
           x);

    printf("--------------------------------");
}
*/
