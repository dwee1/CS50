#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{ 
    int val;
    int valid = 0;
    long number;

    number = get_long("Card Number:");
   
    int zz = (number % 100)/10;
        int z = 2 * zz;
        int z1 = z % 10; 
        int z2 = z / 10;
        int zs = z1 + z2;
    
    int yy = (number % 10000)/1000;
        int y = 2 * yy;
        int y1 = y % 10;
        int y2 = y / 10;
        int ys = y1 + y2;
    
    int xx = (number % 1000000)/100000;
        int x = 2 * xx;
        int x1 = x % 10;
        int x2 = x / 10;
        int xs = x1 + x2;
    
    int ww = (number % 100000000)/10000000;
        int w = 2 * ww;
        int w1 = w % 10;
        int w2 = w / 10;
        int ws = w1 + w2;
    
    int vv = (number % 10000000000)/1000000000;
        int v = 2 * vv;
        int v1 = v % 10;
        int v2 = v / 10;
        int vs = v1 + v2;
    
    int uu = (number % 1000000000000)/100000000000;
        int u = 2 * uu;
        int u1 = u % 10;
        int u2 = u / 10;
        int us = u1 + u2;
    
    int tt = (number % 100000000000000)/10000000000000;
        int t = 2 * tt;
        int t1 = t % 10;
        int t2 = t / 10;
        int ts = t1 + t2;
    
    int ss = (number % 10000000000000000)/1000000000000000;
        int s = 2 * ss;
        int s1 = s % 10;
        int s2 = s / 10;
        int ss1 = s1 + s2;
    
 // printf("%i,%i,%i,%i,%i,%i,%i,%i\n",z,y,x,w,v,u,t,s);
 // printf("%i,%i,%i,%i,%i,%i,%i,%i\n",zs,ys,xs,ws,vs,us,ts,ss1);
    
    int test = (zs + ys + xs + ws + vs + us + ts + ss1);
    
//  printf("%i\n",test);
       
    int a = (number % 10);
    int b = (number % 1000) / 100;
    int c = (number % 100000) / 10000;
    int d = (number % 10000000) / 1000000;
    int e = (number % 1000000000) / 100000000;
    int f = (number % 100000000000) / 10000000000;
    int g = (number % 10000000000000) / 1000000000000;
    int h = (number % 1000000000000000) / 100000000000000;
    
  //printf("%i,%i,%i,%i,%i,%i,%i,%i\n",a,b,c,d,e,f,g,h);
    
    int end = a + b + c + d + e + f + g + h + test;
    
  //printf("%i\n",end);
    
    if(end % 10 == 0)
    { 
        valid = 1;
     }
    else 
    {
        valid = 0;
        }
  
    
    if(valid == 1)
    {
//amex      
        if(number > 99999999999999 && number < 1000000000000000)
        {
            if(h == 3)
            {
                if(tt == 4 || tt == 7)
                {
                    printf("AMEX\n");
                }
                else
                { 
                    printf("INVALID\n"); 
                }
            }
            else
            {
                 printf("INVALID\n"); 
            }
        }
//MASTERCARD AND VISA 16         
        else if(number > 999999999999999 && number < 10000000000000000)
        {
            if(ss == 4)
            {
                printf("VISA\n");
            }
            else if(ss == 5)
            {
                if(h > 0 && h < 6)
                {
                    printf("MASTERCARD\n");
                }
                else
                {
                     printf("INVALID\n"); 
                }
            }
            else
            {
                 printf("INVALID\n"); 
            }
        }
 //VISA 13
        else if(number > 999999999999 && number < 10000000000000)
        {
            if(g == 4)
            {
                printf("VISA\n");
            }
            else
            {
                 printf("INVALID\n"); 
            }
        }
        else
        {
            printf("INVALID\n"); 
        }
    }
    else
    {
        printf("INVALID\n");   
    }
            
}
