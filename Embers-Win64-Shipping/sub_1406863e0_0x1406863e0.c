// 函数: sub_1406863e0
// 地址: 0x1406863e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

class std::iostream var_128
var_128.vtable = &data_143702040
void** rdi = arg2
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
int64_t* rsi = &rdi[2]
void var_108
var_108:0x60.q = 0
var_128.__offset(0x18).q = &std::stringbuf::`vftable'{for `std::streambuf'}
var_108:0x68.d = 0

if (*rsi != 0)
    var_118
    void** rax_2 = sub_14058b120(&var_118, "invalid node; first invalid key: "")
    
    if (rdi[3] u>= 0x10)
        rdi = *rdi
    
    sub_14058b120(sub_14058bab0(rax_2, rdi, *rsi), U""\tv 0")
    char rcx_10 = (var_108:0x68.d).b
    *(arg1 + 0x10) = 0
    *(arg1 + 0x18) = 0xf
    *arg1 = 0
    int64_t r8_2
    
    if ((rcx_10 & 2) == 0)
        r8_2 = *var_108:0x38.q
    
    int64_t rdx_5
    
    if ((rcx_10 & 2) == 0 && r8_2 != 0)
        if (r8_2 u< var_108:0x60.q)
            r8_2 = var_108:0x60.q
        
        rdx_5 = *var_108:0x18.q
        sub_14058ad40(arg1, rdx_5, r8_2 - rdx_5)
    else if ((rcx_10 & 4) == 0)
        int64_t rcx_11 = *var_108:0x30.q
        
        if (rcx_11 != 0)
            rdx_5 = *var_108:0x10.q
            sub_14058ad40(arg1, rdx_5, sx.q(*var_108:0x48.q) - rdx_5 + rcx_11)
    *(&var_128 + sx.q(var_128.vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
    int64_t rcx_14 = sx.q(var_128.vtable->__vecDelDtor:4.d)
    *(&var_12c + rcx_14) = (rcx_14 - 0x98).d
else
    *(arg1 + 0x10) = 0
    *(arg1 + 0x18) = 0xf
    *arg1 = 0
    sub_14058ad40(arg1, 
        "invalid node; this may result from using a map iterator as a sequence iterator, or vice-versa", 
        0x5d)
    *(&var_128 + sx.q(var_128.vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
    int64_t rdx_3 = sx.q(var_128.vtable->__vecDelDtor:4.d)
    *(&var_12c + rdx_3) = (rdx_3 - 0x98).d

sub_140589260(&var_110)
std::iostream::~iostream<char, struct std::char_traits<char> >(&var_108)
std::ios::~ios<char, struct std::char_traits<char> >(&var_90)
return arg1
