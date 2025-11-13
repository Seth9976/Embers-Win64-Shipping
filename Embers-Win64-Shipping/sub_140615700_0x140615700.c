// 函数: sub_140615700
// 地址: 0x140615700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

class std::iostream var_118
var_118.vtable = &data_143702040
var_118.vtable = &data_143702020
var_80
std::ios::ios<char, struct std::char_traits<char> >(&var_80)
var_100
std::iostream::iostream<char, struct std::char_traits<char> >(&var_118, &var_100)
*(&var_118 + sx.q(var_118.vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
int64_t rcx_3 = sx.q(var_118.vtable->__vecDelDtor:4.d)
void var_11c
*(&var_11c + rcx_3) = (rcx_3 - 0x98).d
std::streambuf::streambuf<char, struct std::char_traits<char> >()
void var_f8
var_f8:0x60.q = 0
var_118.__offset(0x18).q = &std::stringbuf::`vftable'{for `std::streambuf'}
var_f8:0x68.d = 0
var_108
std::ostream::operator<<(sub_14058b120(
    std::ostream::operator<<(sub_14058b120(&var_108, "Metronome: ")), &(*"\tv 0")[1]))
char rcx_8 = (var_f8:0x68.d).b
*(arg2 + 0x10) = 0
*(arg2 + 0x18) = 0xf
*arg2 = 0
int64_t r8_1

if ((rcx_8 & 2) == 0)
    r8_1 = *var_f8:0x38.q

int64_t rdx_2

if ((rcx_8 & 2) == 0 && r8_1 != 0)
    if (r8_1 u< var_f8:0x60.q)
        r8_1 = var_f8:0x60.q
    
    rdx_2 = *var_f8:0x18.q
    sub_14058ad40(arg2, rdx_2, r8_1 - rdx_2)
else if ((rcx_8 & 4) == 0)
    int64_t rcx_9 = *var_f8:0x30.q
    
    if (rcx_9 != 0)
        rdx_2 = *var_f8:0x10.q
        sub_14058ad40(arg2, rdx_2, sx.q(*var_f8:0x48.q) - rdx_2 + rcx_9)
*(&var_118 + sx.q(var_118.vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
int64_t rdx_4 = sx.q(var_118.vtable->__vecDelDtor:4.d)
*(&var_11c + rdx_4) = (rdx_4 - 0x98).d
sub_140589260(&var_100)
std::iostream::~iostream<char, struct std::char_traits<char> >(&var_f8)
std::ios::~ios<char, struct std::char_traits<char> >(&var_80)
return arg2
