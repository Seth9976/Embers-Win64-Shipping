// 函数: sub_140686d00
// 地址: 0x140686d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg1

if (*arg2 == 0xffffffff && *(arg2 + 4) == 0xffffffff && *(arg2 + 8) == 0xffffffff)
    sub_140592d30(arg1, arg3)
    return result

class std::iostream var_128
var_128.vtable = &data_143702040
var_128.vtable = &data_143702020
var_90
std::ios::ios<char, struct std::char_traits<char> >(&var_90)
var_110
std::iostream::iostream<char, struct std::char_traits<char> >(&var_128, &var_110)
*(&var_128 + sx.q(var_128.vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
int64_t rcx_3 = sx.q(var_128.vtable->__vecDelDtor:4.d)
void var_12c
*(&var_12c + rcx_3) = (rcx_3 - 0x98).d
std::streambuf::streambuf<char, struct std::char_traits<char> >()
var_128.__offset(0x18).q = &std::stringbuf::`vftable'{for `std::streambuf'}
void var_108
var_108:0x60.q = 0
var_108:0x68.d = 0
var_118
void** rax_7 = sub_14058b120(
    std::ostream::operator<<(sub_14058b120(
        std::ostream::operator<<(sub_14058b120(&var_118, "yaml-cpp: error at line ")), 
        ", column ")), 
    ": ")
int64_t* rdx_3 = arg3

if (arg3[3] u>= 0x10)
    rdx_3 = *arg3

sub_14058bab0(rax_7, rdx_3, arg3[2])
char rcx_10 = (var_108:0x68.d).b
*(result + 0x10) = 0
*(result + 0x18) = 0xf
*result = 0
int64_t r8_1

if ((rcx_10 & 2) == 0)
    r8_1 = *var_108:0x38.q

int64_t rdx_4

if ((rcx_10 & 2) == 0 && r8_1 != 0)
    if (r8_1 u< var_108:0x60.q)
        r8_1 = var_108:0x60.q
    
    rdx_4 = *var_108:0x18.q
    sub_14058ad40(result, rdx_4, r8_1 - rdx_4)
else if ((rcx_10 & 4) == 0)
    int64_t rcx_11 = *var_108:0x30.q
    
    if (rcx_11 != 0)
        rdx_4 = *var_108:0x10.q
        sub_14058ad40(result, rdx_4, sx.q(*var_108:0x48.q) - rdx_4 + rcx_11)
*(&var_128 + sx.q(var_128.vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
int64_t rcx_14 = sx.q(var_128.vtable->__vecDelDtor:4.d)
*(&var_12c + rcx_14) = (rcx_14 - 0x98).d
sub_140589260(&var_110)
std::iostream::~iostream<char, struct std::char_traits<char> >(&var_108)
std::ios::~ios<char, struct std::char_traits<char> >(&var_90)
return result
