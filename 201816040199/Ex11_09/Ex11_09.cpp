#include <iostream>
#include <iomanip>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{

   TwoDayPackage package1( "Bob","Jim","Yellowstone park","Hollywood","California",90001,20,5,10); // ����TwoDayPackage����
   OvernightPackage package2( "Black","Whait","Bronx","New York","State of New York",10041,30,5,0.1); //����OvernightPackage����

   package1.print();              //��ӡ���
   cout<<endl;
   package2.print();              //��ӡ���

  return 0;
}


