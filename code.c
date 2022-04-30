
/////////       Program to show calculations for different operators    //////////

#include<stdio.h>

int main(){
    int n[100],sum=0,i,m,k,l,p;
    float mult=1;
    printf("Different Options are:\n 1.Assignment Operator \n 2.Relational Operator \n 3.Bitwise Operator \n 4.Sizeof Operator \n PLEASE CHOOSE THE OPTION BY ENTERING THE RESPECTIVE NUMBER:  ");
    scanf(" %d",&l);
    if(l==1)
    {
        int c[20],d[20];
        printf("\n\nOperation you want:\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Modulus \n PLEASE CHOOSE THE OPTION BY ENTERING THE RESPECTIVE NUMBER:  ");
        scanf("%d",&m);
        if(m==1){
            printf("\nHow many Numbers you want to enter: ");
            scanf("%d",&k);
            for(i=0;i<k;++i)
            {
                scanf("%d",&n[i]);
                sum= sum + n[i];
            }
            printf("\nAddition of the numbers are: %d",sum);
        }
        
        else if(m==2){
            printf("\nHow many Numbers you want to enter: ");
            scanf("%d",&k);
            for(i=0;i<k;++i){scanf("%d",&n[i]);}
            sum= n[0] - n[1];
            for(p=2;p<k;++p){
                sum = sum - n[p];
                }
            printf("\nSubtraction of the numbers are:  %d",sum);
        }

        else if(m==3){
            printf("\nHow many Numbers you want to enter: ");
            scanf("%d",&k);
            for(i=0;i<k;++i)
            {
                scanf("%d",&n[i]);
                mult= n[i] * mult;
            }
            printf("\nMultiplication of the numbers are: %d",mult);
        }

        else if(m==4){
            printf("\nHow many Numbers you want to enter: ");
            scanf("%d",&k);
            for(i=0;i<k;++i){scanf("%d",&n[i]);}
            mult = n[0]/n[1];
            for(p=2;p<k;++p){
                mult = mult / n[p];
                }
            printf("\nDivision of the numbers are: %f",mult);
        }

        else if(m==5){
            int modu = 1;
            printf("\nHow many Numbers you want to enter: ");
            scanf("%d",&k);
            for(i=0;i<k;++i){scanf("%d",&n[i]);}
            modu = n[0]%n[1];
            for(p=2;p<k;++p){
                modu = modu % n[p];
                }
            printf("\nModulus of the numbers are: %d",modu);
        }

        else{
            printf("\nChoose the correct option!!!!");
        }

    }

    else if(l==2){

        int a,b;
        printf("\nEnter First Number: ");
        scanf("%d",&a);
        printf("\nEnter Second Number: ");
        scanf("%d",&b);


        (a>b) ? printf("\na is greater than b that is %d > %d",a,b ) : printf("");
        (a<b) ? printf("\na is smaller than b that is %d < %d",a,b) : printf("");
        (a==b) ? printf("\na is equals to b that is %d = %d",a,b ) : printf("");
    
    }

    else if(l==3){
        int a,b;
        printf("\nEnter First Number: ");
        scanf("%d",&a);
        printf("\nEnter Second Number: ");
        scanf("%d",&b);
        printf("\nBitwise value is : %d",a|b);
        
    }

    else if(l==4){
        int h;
        printf("\n\nWhich Datatype you want to check? :\n 1.int \n 2.float \n 3.double \n 4.char \n PLEASE CHOOSE THE OPTION BY ENTERING THE RESPECTIVE NUMBER:  ");
        scanf("%d",&h);
        int intType;
        float floatType;
        double doubleType;
        char charType;

        if(h==1){printf("\nSize of int: %zu bytes", sizeof(intType));}
        else if(h==2){printf("\nSize of float: %zu bytes", sizeof(floatType));}
        else if(h==3){printf("\nSize of double: %zu bytes", sizeof(doubleType));}
        else if(h==4){printf("\nSize of char: %zu bytes", sizeof(charType));}
        else {printf("Choose the correct option!!!!");}
    }
    
    else {printf("\nChoose the correct option!!!!");}

    return 0;
}
