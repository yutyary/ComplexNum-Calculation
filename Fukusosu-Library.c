#include<stdio.h>

typedef struct complex complex;

struct complex {
  double RealNum;
  double ImaginaryNum;
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
  scanf("%lf %lf",&x.RealNum,&x.ImaginaryNum);
  printf("Please write y's Real and Imaginary number.\n");
  printf("Real_Num Imaginary_Num:");
  scanf("%lf %lf",&y.RealNum,&y.ImaginaryNum);

  Ans = AddComplex(x,y);
  ShowComplex(x,y,Ans,1);
  Ans = SubComplex(x,y);
  ShowComplex(x,y,Ans,2);
  Ans = MulComplex(x,y);
  ShowComplex(x,y,Ans,3);
  Ans = DivComplex(x,y);
  ShowComplex(x,y,Ans,4);

  return 0;
}

void ShowComplex(complex x,complex y,complex Ans,int Command) {
  printf("%lf + %lfi",x.RealNum,x.ImaginaryNum);
  
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
  
  printf("%lf + %lfi = ",y.RealNum,y.ImaginaryNum);
  printf("%lf + %lfi\n",Ans.RealNum,Ans.ImaginaryNum);
  
}


complex AddComplex(complex x,complex y) {
  complex Ans;
  Ans.RealNum = x.RealNum + y.RealNum;
  Ans.ImaginaryNum = x.ImaginaryNum + y.ImaginaryNum;
  return Ans;
}


complex SubComplex(complex x,complex y) {
  complex Ans;
  Ans.RealNum = x.RealNum - y.RealNum;
  Ans.ImaginaryNum = x.ImaginaryNum - y.ImaginaryNum;
  return Ans;
}

complex MulComplex(complex x,complex y) {
  complex Ans;
  Ans.RealNum = x.RealNum * y.RealNum - x.ImaginaryNum * y.ImaginaryNum;
  Ans.ImaginaryNum = x.RealNum * y.ImaginaryNum + y.RealNum * y.ImaginaryNum;
  
  return Ans;
}

complex DivComplex(complex x,complex y) {
  complex Ans;
  Ans.RealNum = ((x.RealNum * x.ImaginaryNum) + (y.RealNum * y.ImaginaryNum)) / ((x.ImaginaryNum * x.ImaginaryNum) + (y.ImaginaryNum * y.ImaginaryNum));
  Ans.ImaginaryNum = ((x.ImaginaryNum * y.RealNum) - (x.RealNum * y.ImaginaryNum)) / ((x.ImaginaryNum * x.ImaginaryNum) + (y.ImaginaryNum * y.ImaginaryNum));
  return Ans;
}
