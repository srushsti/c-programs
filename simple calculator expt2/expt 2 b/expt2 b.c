#include<stdio.h>
void display(float s);
float add(int x,int y);
float subtract(int x,int y);
float multiply(int x,int y);
float divide(int x,int y);
int main()
{
    int a,b;
    float ans;
    unsigned char c;
    while(1)
    {


    printf("enter the two numbers separating with single space:");
    scanf("%d%d",&a,&b);
    printf("enter the arithmetic operation (+,-,*,/):");
    scanf(" %c",&c);
    float (*ptr_op)(int,int);
    void (*ptr_disp)(float);
    ptr_disp=display;

     switch(c)
    {
        case '+':ptr_op=add;
        break;
        case '-':ptr_op=subtract;
        break;
        case '*':ptr_op=multiply;
        break;
        case '/':ptr_op=divide;
        break;
        default:printf("invalid operator");


    }

    ans=(*ptr_op)(a,b);
    (*ptr_disp)(ans);
    }
    return 0;

}
void display(float s)
{
    printf("\nAns: %f\n",s);
}
float add(int x,int y)
{
    return (x+y);
}
float subtract(int x,int y)
{
    return x-y;
}
float multiply (int x,int y)
{
    return x*y;
}
float divide (int x,int y)
{
    if (y!=0)
        return (float)x/y;
    else return 0.0;
}



