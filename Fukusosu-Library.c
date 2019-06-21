#include<stdio.h>

typedef struct complex;

struct complex {
  double Real_Num;
  double Imaginary_Num;
}
  
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
  printf("(%lf + %lf) + (%lf + %lf) = %lf + %lf\n",&x.Real_Num,&x.Imaginary_Num,&y.Real_Num,&y.Imaginary_Num,&Ans.Real_Num,&Ans.Imaginary_Num);
  Ans = SubComplex(x,y);
  printf("(%lf + %lf) - (%lf + %lf) = %lf + %lf\n",&x.Real_Num,&x.Imaginary_Num,&y.Real_Num,&y.Imaginary_Num,&Ans.Real_Num,&Ans.Imaginary_Num);
  
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
