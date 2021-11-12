int main()
{
    double a;
    double b;
    char factor;
    printf("What is the operator wanted : \n ");
    printf("+, -, *, / \n");
    scanf("%c", &factor);
    printf("What is the first number : \n");
    scanf("%lf", &a);
    printf("What is the second number : \n");
    scanf("%lf", &b);

    switch(factor){
    case '+':
        printf("%f", a + b);
        break;
    case '-':
        printf("%f", a - b);
        break;
    case '*':
        printf("%f", a * b);
        break;
    case '/':
        printf("%f", a / b);
        break;
    default:
        printf("%c is an Invalid Operator", factor);



    }



    return 0;
}

