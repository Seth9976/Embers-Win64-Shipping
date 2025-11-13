// 函数: sub_14058a100
// 地址: 0x14058a100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9
int32_t arg_20 = r9
void** arg_8 = arg1
arg_20 = 0
*arg1 = &data_143702038
arg1[2] = &data_143702018
std::ios::ios<char, struct std::char_traits<char> >(&arg1[0x17])
arg_20 = 1
std::iostream::iostream<char, struct std::char_traits<char> >(arg1, &arg1[3])
*(sx.q(*(*arg1 + 4)) + arg1) = &std::fstream::`vftable'
int64_t rcx_3 = sx.q(*(*arg1 + 4))
*(rcx_3 + arg1 - 4) = (rcx_3 - 0xb8).d
struct std::streambuf::std::filebuf::VTable** var_18 = &arg1[3]
std::streambuf::streambuf<char, struct std::char_traits<char> >()
arg1[3] = &std::filebuf::`vftable'{for `std::streambuf'}
*(arg1 + 0x94) = 0
*(arg1 + 0x89) = 0
std::streambuf::_Init()
arg1[0x13] = 0
*(arg1 + 0x8c) = data_14401b790
arg1[0x10] = 0

if (sub_14058ab10(&arg1[3], arg2, 0x22, 0x40) == 0)
    std::ios::setstate(sx.q(*(*arg1 + 4)) + arg1, 2, 0)

return arg1
