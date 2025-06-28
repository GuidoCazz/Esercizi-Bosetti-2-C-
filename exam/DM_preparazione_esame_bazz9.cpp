/*
Write a main file that calculates the main parameters of a milling operation.
The data are provided by an INI file such as: “shopfloor.ini”. The information in the INI file must be used to calculate
the rotational speed N, the feed-rate f, the material removal rate MRR, and the mechanical power P.
The resulting values must be printed on stdout exactly with this format:

    N   = 00.000 rpm
    f   = 0.000 mm/min
    MRR = 000.000 mm3/min
    Pm  = 0.000 kW

Also, pay attention to the units used above and let each result have 3 decimal digits.
Use “double” type for real values and “int” type for integers. The main file must assume that the INI file is
already available in the local directory under the name “shopfloor.ini”.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    ifstream file("shopfloor.ini");
    if (!file.is_open()) {
        cerr << "Errore: impossibile aprire il file shopfloor.ini\n";
        return 1;
    }
  
  double D, vc, fz, z, ap, ae, eta;

  string label;
  file >> label >>D;
  file >> label >>vc;
  file >> label >>fz;
  file >> label >>z;
  file >> label >>ap;
  file >> label >>ae;
  file >> label >>eta;

  const double pi = 3.14;
  int N = static_cast<int>((1000 * vc) / (pi * D));
  double f = fz * z * N;
  double MRR = f * ap * ae;
  double Pm = (MRR/1000.0)/eta;

  cout<< fixed << setprecision(3);
  cout<<"N = "<<N<<".000 rpm"<<endl;
  cout<<"f = "<<f<<" mm/min"<<endl;
  cout<<"MRR = "<<MRR<<" mm3/min"<<endl;
  cout<<"Pm = "<<Pm<<" kW"<<endl;

}
