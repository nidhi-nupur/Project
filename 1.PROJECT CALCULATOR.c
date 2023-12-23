#include<stdio.h>
main()
{
    printf("Welcome to My Calculator\n");
    int a;
    printf("Choose Desired operation:\n");
    printf("1: Add\n");
    printf("2: Subtract\n");
    printf("3: Multiply\n");
    printf("4: Divide\n");
    printf("5: Square\n");
    printf("6: Cube\n");
    printf("7: Modulus\n");
    printf("8: pow(p,q)\n");
    printf("9: Factorial\n");
    printf("10: Exit\n");
    while(1)
    {
        printf("Enter the operation(1-10): ");
        scanf("%d",&a);

        switch(a)
        {
            case 1:
            {
                float p,q;
                printf("Enter the value of p and q:\n");
                scanf("%f %f",&p,&q);
                printf("Add=%f\n",p+q);
            }
                break;
            case 2:
            {
                float p,q;
                printf("Enter the value of p and q:\n");
                scanf("%f %f",&p,&q);
                printf("Subtract=%f\n",p-q);
            }
                break;    
            case 3:
            {
                float p,q;
                printf("Enter the value of p and q:\n");
                scanf("%f %f",&p,&q);
                printf("Multiply=%f\n",p*q);
            }
                break;
            case 4:
            {
                float p,q;
                printf("Enter the value of p and q:\n");
                scanf("%f %f",&p,&q);
                printf("Divide=%f\n",p/q);
            }
                break;
            case 5:
            {
                int p;
                printf("Enter the value of p:\n");
                scanf("%d",&p);
                printf("Square=%d\n",p*p);
            }
                break;
            case 6:
            {
                int q;
                printf("Enter the value of q:\n");
                scanf("%d",&q);
                printf("Cube=%d\n",q*q*q);
            }
                break;
            case 7:
            {
                float p,q;
                printf("Enter the value of p and q:\n");
                scanf("%f %f",&p,&q);
                printf("Modulus=%f\n",fmod(p,q));
            }
                break;
            case 8:
            { 
                int p,q;
                printf("Enter the value of p and q:\n");
                scanf("%d %d",&p,&q);
                printf("pow(%d,%d)=%f\n",p,q,pow(p,q));
            } 
                break;
            case 9:
            {
                int n,i,fact=1;
                printf("Enter the value of n:\n");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                {
                    fact=fact*i;
                }
                printf("The Factorial of %d is %d\n",n,fact);
            }
                break;
            case 10:
                exit(0);

            default:
            printf("Enter Valid Number\n");
                break;
        }
    }
}





// printf("____Welcome to My Calculator_____\nChoose the option\n1: Add\n2: Subtract\n");