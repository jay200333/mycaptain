#include<stdio.h>
int main()
{
printf("ENTER YOUR MARK :");
int mark=0;
scanf("%d",&mark);
if(mark>=85 && mark<=100)
{
printf("YOU SECURED GRADE A");
}
else if(mark>=70 && mark<=84)
{
printf("YOU SECURED GRADE B");
}
else if(mark>=55 && mark<=69)
{
printf("YOU SECURED GRADE C");
}
else if(mark>=40 && mark<=54)
{
printf("YOU SECURED GRADE D");
}
else if(mark>=0 && mark<40)
{
printf("YOU SECURED GRADE F");
}
else
{
printf("ENTER A VALID MARK");
}

return 0;
}


