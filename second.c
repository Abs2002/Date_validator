#include <stdio.h>

int main()
{
    int d,m,y;
    printf("enter date : ");
    scanf("%d", &d);
    printf("enter month : ");
    scanf("%d", &m);
    printf("enter year : ");
    scanf("%d", &y);
    printf("your date is %d / %d / %d\n", d,m,y);

    if (m>12 || m<1)
    {
        printf("invalid month");
    }
    else
    {
        if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        {
            if (d>31 || d<1)
            {
                printf("date invalid");
            }
            else
            {
                printf("valid date");
            }
        }
        else if (m==4 || m==6 || m==9 || m==11)
        {
            if (d>30 || d<1)
            {
                printf("invalid date");
            }
            else
            {
                printf("valid date");
            }
        }
        else if (m==2)
        {
            if (y%4==0)
            {
                if (y%100==0)
                {
                    if (y%400==0)
                    {
                        if (d>29 || d<1)
                        {
                            printf("invalid date");
                        }
                        else
                        {
                            printf("valid date");
                        }
                    }
                    else
                    {
                        if (d>28 || d<1)
                        {
                            printf("invalid date");
                        }
                        else
                        {
                            printf("valid date");
                        }
                    }
                }
                else
                {
                    if (d>29 || d<1)
                    {
                        printf("invalid date");
                    }
                    else
                    {
                        printf("valid date");
                    }
                }
            }
            else
            {
                if (d>28 || d<1)
                {
                    printf("invalid date");
                }
                else 
                {
                    printf("valid date");
                }
            }
        }
    }
    return 0;
}