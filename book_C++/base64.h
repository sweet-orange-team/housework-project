#include <string>

//�������ҵ���base64���룬���൱��һ�����ܰ�......
//ʾ������
//const std::string s = "123456";
//std::string encoded = base64_encode(reinterpret_cast<const unsigned char*>(s.c_str()), s.length());
//string decoded = base64_decode(encoded);
//ofstream fout;
//fout.open("..\\resource\\user_information\\user.txt", ios::app);
//fout << "charon," << encoded << decoded << flush << endl;


std::string base64_encode(unsigned char const*, unsigned int len);
std::string base64_decode(std::string const& s);