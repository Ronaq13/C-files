#include<stdio.h>

int main()
{   char str[50];
    do{
            int i,n,x,x1,j;  float e; int A[100],B[100], C[100][100]; int m, c, d, matrix[10][10], transpose[10][10];
            printf("\n\t\t1. Addition of two matrices.");;
            printf("\n\t\t2. Subtraction of two matrices.");
            printf("\n\t\t3. Finding upper and lower triangular matrices matrices.");
            printf("\n\t\t4. Transpose of a matrix");
            printf("\n\t\t");
            printf("\n\n\t--> Enter your choice:");                             // Entering the choice
            scanf("%d",&n);
            switch(n)
            {
                case 1 : printf("\n\t\t Enter your 1st matrix:");
                         printf("\n\t\t Enter size:");
                         scanf("%d",&x);
                         printf("\n\t\t Enter elements:");
                         for(i=0;i<x;i++)
                         {
                             scanf("%d",&A[i]);
                         }

                         printf("\n\t\t Enter your 2nd matrix:");
                         printf("\n\t\t Enter size:");
                         scanf("%d",&x1);
                         printf("\n\t\t Enter elements:");
                         for(i=0;i<x1;i++)
                         {
                             scanf("%d",&B[i]);
                         }

                         if(x>=x1)
                         {
                               for(i=0;i<x1;i++)
                               {
                                   A[i]=A[i]+B[i];
                               }
                                printf("\n\t\tSum of matrix is:");

                               for(i=0;i<x;i++)
                                    {
                                        printf("\n%d",A[i]);
                                    }

                         }


                          else
                            {
                                    for(i=0;i<x;i++)
                                    {
                                        B[i]=B[i]+A[i];
                                    }
                                    printf("\n\t\tSum of matrix is:");
                                    for(i=0;i<x1;i++)
                                    {
                                        printf("\n\t\t%d",B[i]);
                                    }
                            }

                            break;

                    case 2 : printf("\n\t\t Enter your 1st matrix:");
                             printf("\n\t\t Enter size:");
                             scanf("%d",&x);
                             printf("\n\t\t Enter elements:");
                             for(i=0;i<x;i++)
                             {
                                 scanf("%d",&A[i]);
                             }

                             printf("\n\t\t Enter your 2nd matrix:");
                             printf("\n\t\t Enter size:");
                             scanf("%d",&x1);
                             printf("\n\t\t Enter elements:");
                             for(i=0;i<x1;i++)
                             {
                                 scanf("%d",&B[i]);
                             }

                             if(x>=x1)
                             {
                                   for(i=0;i<x1;i++)
                                   {
                                       A[i]=A[i]-B[i];
                                   }
                                    printf("\n\t\tSum of matrix is:");

                                   for(i=0;i<x;i++)
                                        {
                                            printf("\n%d",A[i]);
                                        }

                             }


                              else
                                {
                                        for(i=0;i<x;i++)
                                        {
                                            B[i]=B[i]-A[i];
                                        }
                                        printf("\n\t\tSum of matrix is:");
                                        for(i=0;i<x1;i++)
                                        {
                                            printf("\n\t\t%d",B[i]);
                                        }
                                }

                                break;

                        case 3 : printf("\n\t\t Enter your 2-D matrix:");
                                 printf("\n\t\t Enter Size:");
                                 scanf("%d",&x);
                                 printf("\n\t\t Enter elements:");
                                 for(i=0;i<x;i++)
                                 {
                                     for(j=0;j<x;j++)
                                     {
                                         scanf("%d",&C[i][j]);
                                     }
                                        printf("\n\t\t\t\t");
                                 }
                                 printf("\n\t\t Your matrix is:");
                                 for(i=0;i<x;i++)
                                 {
                                     for(j=0;j<x;j++)
                                     {
                                         printf("%d",C[i][j]);
                                     }
                                        printf("\n\t\t\t\t");
                                 }


                                 printf("\n\t\t Your LOWER triangle is:");
                                 for(i=0;i<x;i++)
                                 {
                                     for(j=0;j<=i;j++)
                                     {
                                         printf("%d",C[i][j]);
                                     }
                                     printf("\n\t\t\t\t\t");
                                 }

                                  printf("\n\t\t Your UPPER triangle is:");
                                 for(i=0;i<x;i++)
                                 {
                                     for(j=0;j<=(x-i-1);j++)
                                     {
                                         printf("%d",C[i][j]);
                                     }
                                     printf("\n\t\t\t\t\t");
                                 }

                                 break;

                            case 4 :


                                           printf("\n\t\tEnter the number of rows and columns of matrix:");
                                           scanf("%d%d", &m, &n);

                                           printf("\n\t\tEnter the elements of matrix:\n\t\t");

                                           for (c = 0; c < m; c++)
                                              for(d = 0; d < n; d++)
                                                 scanf("%d",&matrix[c][d]);
                                           printf("\n\t\t Your matrix is:\n\t\t");
                                           for (c = 0; c < m; c++){
                                              for(d = 0; d < n; d++)
                                                 printf("%d\t",matrix[c][d]);
                                                 printf("\n\t\t");}

                                           for (c = 0; c < m; c++)
                                              for( d = 0 ; d < n ; d++ )
                                                 transpose[d][c] = matrix[c][d];

                                           printf("\n\t\tTranspose of entered matrix :-\n\t\t");

                                           for (c = 0; c < n; c++)
                                            {
                                              for (d = 0; d < m; d++)
                                                 printf("%d\t",transpose[c][d]);
                                              printf("\n\t\t");
                                            }


                                           break ;





            }

            printf("\n\n\t\t======================Want to enter more(yes/no):");
            scanf("%s",str);




      }while(strcmp(str,"yes")==0);

   return 0;
}
