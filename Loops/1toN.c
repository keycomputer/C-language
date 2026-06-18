
int main()
{
    int i, n;

    /* Input upper limit from user */
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("\n--------For Loop --------\n");
    printf("Natural numbers from 1 to %d : \n", n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    printf("\n--------While Loop --------\n");
    i=1;
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}