#include<stdio.h>
int main()
{
    int i;
    double lirun;
    double jiangjin = 0;
    float fanwei[] = {100000, 200000, 400000, 600000, 1000000};
    float ticheng[] = {0.1, 0.075, 0.05, 0.03, 0.015, 0.01};
    printf("lirun\n");
    scanf("%lf", &lirun);
    for (i=0;i<5;i++)
    {
        if (lirun < fanwei[i])
        {
            jiangjin += lirun * ticheng[i];
            break;
        }
        else
        {
            jiangjin += fanwei[i] * ticheng[i];
            lirun -= fanwei[i];
        }
    }
    printf("jiangjin\n%.2lf\n", jiangjin);

    return 0;
}
