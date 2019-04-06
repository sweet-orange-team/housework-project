#include <string>

//从网上找到的base64编码，就相当于一个加密吧......
//示例代码
//const std::string s = "123456";
//std::string encoded = base64_encode(reinterpret_cast<const unsigned char*>(s.c_str()), s.length());
//string decoded = base64_decode(encoded);
//ofstream fout;
//fout.open("..\\resource\\user_information\\user.txt", ios::app);
//fout << "charon," << encoded << decoded << flush << endl;


std::string base64_encode(unsigned char const*, unsigned int len);
std::string base64_decode(std::string const& s);