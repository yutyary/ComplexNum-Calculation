#include<stdio.h>

typedef struct complex complex;

struct complex {
  double real;
  double imaginary;
};

void ShowComplex(complex x,complex y,complex Ans,int Command); //Command: 1>+ 2>- 3>* 4>/
complex AddComplex(complex x,complex y); // = x + y
complex SubComplex(complex x,complex y); // = x - y
complex MulComplex(complex x,complex y); // = x * y
complex DivComplex(complex x,complex y); // = x / y

int main(void) {
  complex x,y,Ans;
  printf("Please write x's Real and Imaginary number.\n");
  printf("Real_Num Imaginary_Num:");
  scanf("%lf %lf",&x.real,&x.imaginary);
  printf("Please write y's Real and Imaginary number.\n");
  printf("Real_Num Imaginary_Num:");
  scanf("%lf %lf",&y.real,&y.imaginary);

  Ans = AddComplex(x,y);
  ShowComplex(x,y,Ans,1);
  Ans = SubComplex(x,y);
  ShowComplex(x,y,Ans,2);
  Ans = MulComplex(x,y);
  ShowComplex(x,y,Ans,3);
  /*Ans = DivComplex(x,y);
  ShowComplex(x,y,Ans,4);*/

  return 0;
}

void ShowComplex(complex x,complex y,complex Ans,int Command) {
  printf("%lf + %lfi",x.real,x.imaginary);
  
  switch(Command) {
  case 1:
    printf(" + ");
    break;
  case 2:
    printf(" - ");
    break;
  case 3:
    printf(" * ");
    break;
  case 4:
    printf(" / ");
    break;
  }
  
  printf("%lf + %lfi = ",y.real,y.imaginary);
  printf("%lf + %lfi\n",Ans.real,Ans.imaginary);
  
}


complex AddComplex(complex x,complex y) {
  complex Ans;
  Ans.real = x.real + y.real;
  Ans.imaginary = x.imaginary + y.imaginary;
  return Ans;
}


complex SubComplex(complex x,complex y) {
  complex Ans;
  Ans.real = x.real - y.real;
  Ans.imaginary = x.imaginary - y.imaginary;
  return Ans;
}

complex MulComplex(complex x,complex y) {
  complex Ans;
  Ans.real = x.real * y.real - x.imaginary * y.imaginary;
  Ans.imaginary = x.real * y.imaginary + y.real * y.imaginary;
  
  return Ans;
}

complex DivComplex(complex x,complex y) {
  complex Ans;

  return Ans;
}
