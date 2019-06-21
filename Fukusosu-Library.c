#include<stdio.h>

typedef struct complex;

struct complex {
  double Real_Num;
  double Imaginary_Num;
}  

  void ShowComplex(complex x,complex y,complex Ans,int Command); //Command: 1>+ 2>- 3>* 4>/
complex AddComplex(complex x,complex y); // = x + y
complex SubComplex(complex x,complex y); // = x - y
complex MulComplex(complex x,complex y); // = x * y
complex DivComplex(complex x,complex y); // = x / y

int main(void) {
  complex x,y,Ans;
  printf("Please write x's Real and Imaginary number.\n");
  printf("Real_Num Imaginary_Num:");
  scanf("%lf %lf",&x.Real_Num,&x.Imaginary_Num);
  printf("Please write y's Real and Imaginary number.\n");
  printf("Real_Num Imaginary_Num:");
  scanf("%lf %;f",&x.Real_Num,&x.Imaginary_Num);

  Ans = AddComplex(x,y);
  ShowComplex(x,y,Ans,1);
  Sub = AddComplex(x,y);
  ShowComplex(x,y,Ans,2);
  /* Mul = AddComplex(x,y);
  ShowComplex(x,y,Ans,3);
  Div = AddComplex(x,y);
  ShowComplex(x,y,Ans,4);*/

  return 0;
}

ShowComplex(complex x,complex y,complex Ans,int Command) {
  printf("%lf + %lfi",&x.Real_num,&x.Imaginary_Num);
  
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
  
  printf("%lf + %lfi = ",&y.Real_num,&y.Imaginary_Num);
  printf("%lf + %lfi\n",&Ans.Real_num,&Ans.Imaginary_Num);
  
  return 0;
}


complex AddComplex(complex x,complex y) {
  complex Ans;
  Ans.Real_Num = x.Real_Num + y.Real_Num;
  Ans.Imaginary_Num = x.Imaginary_Num + y.Imaginary_Num;
  return Ans;
}


complex SubComplex(complex x,complex y) {
  complex Ans;
  Ans.Real_Num = x.Real_Num - y.Real_Num;
  Ans.Imaginary_Num = x.Imaginary_Num - y.Imaginary_Num;
  return Ans;
}

complex MulComplex(complex x,complex y) {
  complex Ans;

  
  return Ans;
}

complex DivComplex(complex x,complex y) {
  complex Ans;

  return Ans;
}
