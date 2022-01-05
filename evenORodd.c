// c Programs to check the input number is even or odd.

# include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);
    (num%2==0?printf("The number is even\n") : printf("The number is odd\n"));

    return 0;
}