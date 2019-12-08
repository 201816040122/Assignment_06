#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
#include<stdexcept>
using namespace std;
class Package
{
public:
  Package( string ,string ,string ,string ,string ,int,double,double );        //����Package����
  void setSend(string );                       //set ��������ַ���ݣ����ң��������룬��������˾
  void setReceive(string );
  void setAddress(string );
  void setCity(string );
  void setState(string );
  void setPostal(int);
  void setWight(double);
  void setOunce(double);

  string getSend();                        //get��������ַ���ݣ����ң��������룬��������˾
  string getReceive();
  string getAddress();
  string getCity();
  string getState();
  int getPostal();
  double getWight();
  double getOunce();

  double calculatecost();                   //�����ܼ�
  void print();                           //��ӡ
private:
   string sender;
   string recipient;
   string address;
   string city;
   string state;
   int postal;
   double wight;
   double ounce;

}; // end class Package

#endif


