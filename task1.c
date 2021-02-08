#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

void pscode()
{
     char c;  
    FILE *fp = fopen(__FILE__, "r"); 
   
    do
    { 
        c = fgetc(fp); 
        putchar(c); 
    } 
    while (c != EOF); 
   
    fclose(fp); 
}

int cmpfunc(const void * a, const void * b) 
        {
            return ( *(int*)a - *(int*)b );
        }

void display()
{
    printf("\n =============================== We are going to start=====================================\n");

}

void _strtod()
{
    printf("\n \n \n ============================= This is _strtod() function ======================================= \n");

    char str[30] = "20.30300 This is test";
   char *ptr;
   double get;
   printf("\n This is the whole string: %s",str);
   get = strtod(str, &ptr);
   printf("\n The number(double) is %lf", get);
   printf("\n String part is |%s|", ptr);
   
}

void _strtol()
{
     printf("\n \n \n =============================This is _strtol() function ====================================== \n");
    char str[30] = "2030300 later string";
   char *ptr;
   long get;

   get = strtol(str, &ptr,10);
   printf("The number(unsigned long integer) is %ld\n", get);
   printf("String part is |%s| ", ptr);
   
}

void _bsearch()
{
    int values[] = { 88, 24, 29, 32, 6 };
    printf("\n \n \n =============================This is _bsearch() function =======================================\n");
    int *item;
    int key = 32;
    printf("\n The array is:");
    for(int i=0;i<5;i++)
    {
        printf("%d ",values[i]);

    }
    /* using bsearch() to find value 32 in the array */
    item = (int*) bsearch (&key, values, 5, sizeof (int), cmpfunc);
    if( item != NULL ) 
        {
        printf("\n Found item = %d\n", *item);

        }
    else 
        {
            printf("\n Item = %d could not be found\n", *item);
        }
        
}

void _qsort()
{
    printf("\n \n \n =============================== This is _qsort() function ============================ \n");
   
    int values[] = { 88, 24, 29, 32, 6 };
    int n;
    printf("\n Before sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {
      printf("%d ", values[n]);
   }

   qsort(values, 5, sizeof(int), cmpfunc);

   printf("\nAfter sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) 
   {   
      printf("%d ", values[n]);
   }
    
}

int main () 
{   system("cls");
    char ch;
    int d,a,i=1;
    pscode();
    printf("\n \n \n Should we start:");
    scanf(" %c",&ch);
    if (ch=='Y'||ch=='y')
    {
       display();
        for (int i=0;i<4;i++)
        {
            printf(" \n \n \n Enter which function you want to print:");
            scanf("%d",&a);
            if(a==1)
            {
                _strtod();


            }
            else if (a==2)
            {
                _strtol();
            }
            else if(a==3) 
            {
                _bsearch();

            }
            else if (a==4)
            {
                _qsort();
            }
            else
             {
                 exit(0);
             }
        }
       
      
    } 
   return 0;
}
