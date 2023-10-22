
package com.mycompany.main;

import static java.lang.Math.*;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {

    double x,sum=0,fac=1,sin=0,z=0;
Scanner in=new Scanner(System.in);
x=in.nextDouble();
for(int i=2;i<=50;i++)
{
    z+=.5;
    fac=i*fac;
    if(i%2!=0)
 sin+=((pow(x,i)/fac)*pow(-1,z)) ;
}
        System.out.println("sin(X)= "+(x+sin));
}

  
}
