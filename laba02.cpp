/****************************************************
 *  Автор:    Струк С.А.                            *
 *  Дата:     20.09.2023                            *
 *  Название: Циклы с пред- и постусловием.         *
 *  https://onlinegdb.com/W3d4QQA6J                 *
 ****************************************************/
 
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  const double e = 2.71828;
  double C, U0, L, R, Uc, Ul, alpha, beta, omega, t;
  
  cout << "C = ";
  cin >> C;
  cout << endl << "U0 = ";
  cin >> U0;
  cout << endl << "L = ";
  cin >> L;
  cout << endl << "R = ";
  cin >> R;
  
  alpha = R / (2 * L);
  omega = 1 / sqrt(L * C);
  beta = sqrt( pow(alpha, 2) - pow(omega, 2) );
  t = 0.0;
  
  cout.precision(5);
  cout << fixed;
  
  while (t <= 0.04) {
    Uc = (U0 / (2 * beta) ) * 
         ( (alpha + beta) * pow(e, -1 * (alpha - beta) * t) - 
         (alpha - beta) * pow(e, -1 * (alpha + beta) * t) );
    Ul = (U0 / (2 * beta) ) * 
         ( (alpha - beta) * pow(e, -1 * (alpha - beta) * t) - 
         (alpha + beta) * pow(e, -1 * (alpha + beta) * t) );
    
    cout << endl << "t = " << t 
         << endl << "Uc = " << Uc 
         << endl << "Ul = " << Ul << endl;
    
    if (t < 0.01) {
      t = t + 0.002;
    } else {
      t = t + 0.01;
    }
  }
  
  return 0;
}
