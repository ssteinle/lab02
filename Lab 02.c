#include <stdio.h>
#include <time.h>

long long int busyCount;
double countNumber = 1;

void doBusyWork()
{
    int x = countNumber;

    for(int a=0; a<x; a++)
        busyCount++;
}

void linearFunction(int n)
{
    for(int i=0; i<n; i++)
        doBusyWork();
}

void busyAlgorithm_N3(int n)
{
    for(int a=1; a<=n; a++)
        for(int b=1; b<=a; b++)
            for(int c=b; c>0; c--)
                doBusyWork();
}

void busyAlgorithm_NlogN(int n)
{
    for(int a=0; a<=n; a++)
        for(int b=1; b<=a; b=b*2)
                doBusyWork();
}

void busyAlgorithm_logN(int n)
{
    if(n>1)
        busyAlgorithm_logN(n/2);
    
    doBusyWork();
    return;
}

void busyAlgorithm_N2logN(int n)
{
    if(n>1)
        busyAlgorithm_N2logN(n/2);

    for(int a=0; a<n; a++)
        for(int b=0; b<n; b++)
            doBusyWork();

    return;
}

void busyAlgorithm_N6(int n)
{
    for(int a=1; a<=n; a++)
        for(int b=1; b<=a; b++)
            for(int c=b; c>0; c--)
                for(int d=1; d<=c; d++)
                    for(int e=d; e>0; e--)
                        for(int f=1; f<=e; f++)
                            doBusyWork();
}

void busyAlgorithm_logN_squared(int n)
{
    for(int a=1; a<=n; a=a*2)
        doBusyWork();

    busyCount = busyCount*busyCount;
}

void busyAlgorithm_exp(int n)
{
    if(n==0)
    {
        doBusyWork();
        return;
    }

    busyAlgorithm_exp(n-1);
    busyAlgorithm_exp(n-1);
}

void busyAlgorithm_factorial(int n)
{
    if(n==0)
    {
        doBusyWork();
        return;
    }

    for(int i=0; i<n; i++)
        busyAlgorithm_factorial(n-1);
}

int main()
{
    int n;
    int y= 2;



    clock_t start, end;
    double total;

    printf("\nSet N: ");
    scanf("%d", &n);

    if(1==0)
    for(int p=1; p<=n; p=p*2)
    {
        //*****************************************************
        {
        busyCount = 0;

        printf("\n========================================");

        start = clock();
        linearFunction(p);
        end = clock();

        printf("\n\nN Busy Count: %lld for N=%d", busyCount, p);

        total = (double)(end - start) / CLOCKS_PER_SEC;
        printf("\n\nExperimental Time Raw: %f", total);
        printf("\n\nExperimental Time Averaged: %f", total/busyCount);
        

        printf("\n\n========================================");
        }
        //*****************************************************
    }

    printf("\n\n********************************************************************************");

    if(1==0)
    for(int p=1; p<=n; p=p*2)
    {
        //*****************************************************
        {
        busyCount = 0;

        start = clock();
        busyAlgorithm_N3(p);
        end = clock();
        printf("\n\nN3 Busy Count: %lld for N=%d", busyCount, p);

        total = (double)(end - start) / CLOCKS_PER_SEC;
        printf("\n\nExperimental Time Raw: %f", total);
        printf("\n\nExperimental Time Averaged: %f", total/countNumber);

        printf("\n\n========================================");
        }
        //*****************************************************
    }

    printf("\n\n********************************************************************************");

    if(1==0)
    for(int p=1; p<=n; p=p*2)
    {
        //*****************************************************
        {
        busyCount = 0;

        start = clock();
        busyAlgorithm_NlogN(p);
        end = clock();
        printf("\n\nNlogN Busy Count: %lld for N=%d", busyCount, p);

        total = (double)(end - start) / CLOCKS_PER_SEC;
        printf("\n\nExperimental Time Raw: %f", total);
        printf("\n\nExperimental Time Averaged: %f", total/countNumber);

        printf("\n\n========================================");
        }
        //*****************************************************
    }

    printf("\n\n********************************************************************************");

    if(1==0)
    for(int p=1; p<=n; p=p*2)
    {
        //*****************************************************
        {
        busyCount = 0;

        start = clock();
        busyAlgorithm_logN(p);
        end = clock();
        printf("\n\nRecursive logN Busy Count: %lld for N=%d", busyCount, p);

        total = (double)(end - start) / CLOCKS_PER_SEC;
        printf("\n\nExperimental Time Raw: %f", total);
        printf("\n\nExperimental Time Averaged: %f", total/countNumber);

        printf("\n\n========================================");
        }
        //*****************************************************
    }

    printf("\n\n********************************************************************************");

    //if(1==0)
    for(int p=1; p<=n; p=p*2)
    {
        //*****************************************************
        {
        busyCount = 0;

        start = clock();
        busyAlgorithm_N2logN(p);
        end = clock();
        printf("\n\nN2logN Busy Count: %lld for N=%d", busyCount, p);

        total = (double)(end - start) / CLOCKS_PER_SEC;
        printf("\n\nExperimental Time Raw: %f", total);
        printf("\n\nExperimental Time Averaged: %f", total/countNumber);

        printf("\n\n========================================");
        }
        //*****************************************************
    }

    printf("\n\n********************************************************************************");

    if(1==0)
    for(int p=1; p<=n; p=p*2)
    {
        //*****************************************************
        //if(1==0)
        {
        busyCount = 0;

        start = clock();
        busyAlgorithm_N6(p);
        end = clock();
        printf("\n\nN6 Busy Count: %lld for N=%d", busyCount, p);

        total = (double)(end - start) / CLOCKS_PER_SEC;
        printf("\n\nExperimental Time Raw: %f", total);
        printf("\n\nExperimental Time Averaged: %f", total/countNumber);

        printf("\n\n========================================");
        }
        //*****************************************************
    }



    printf("\n\n********************************************************************************");
if(1==0)
    for(int p=1; p<=n; p=p*2)
    {
        //*****************************************************
        //if(1==0)
        {
        busyCount = 0;

        start = clock();
        busyAlgorithm_logN_squared(p);
        end = clock();
        printf("\n\nlogN_squared Busy Count: %lld for N=%d", busyCount, p);

        total = (double)(end - start) / CLOCKS_PER_SEC;
        printf("\n\nExperimental Time Raw: %f", total);
        printf("\n\nExperimental Time Averaged: %f", total/countNumber);

        printf("\n\n========================================");
        }
        //*****************************************************
    }


    printf("\n\n********************************************************************************");
if(1==0)
    for(int p=1; p<=n; p++)
    {
        //*****************************************************
        //if(1==0)
        {
        busyCount = 0;

        start = clock();
        busyAlgorithm_exp(p);
        end = clock();
        printf("\n\nexp Busy Count: %lld for N=%d", busyCount, p);

        total = (double)(end - start) / CLOCKS_PER_SEC;
        printf("\n\nExperimental Time Raw: %f", total);
        printf("\n\nExperimental Time Averaged: %f", total/countNumber);

        printf("\n\n========================================");
        }
        //*****************************************************
    }

    printf("\n\n********************************************************************************");

    if(1==0)
    for(int p=1; p<=n; p++)
    {
        //*****************************************************

        {
        busyCount = 0;

        start = clock();
        busyAlgorithm_factorial(p);
        end = clock();

        printf("\n\nfactorial Busy Count: %lld for N=%d", busyCount, p);

        total = (double)(end - start) / CLOCKS_PER_SEC;
        printf("\n\nExperimental Time Raw: %f", total);
        printf("\n\nExperimental Time Averaged: %f", total/countNumber);

        printf("\n\n========================================");
        }
        //*****************************************************
    }

    printf("\n");
    
    return 0;
}