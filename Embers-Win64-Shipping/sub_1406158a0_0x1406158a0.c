// 函数: sub_1406158a0
// 地址: 0x1406158a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
class std::iostream var_148
var_148.vtable = &data_143702040
void var_138
var_138.q = &data_143702020
var_b0
std::ios::ios<char, struct std::char_traits<char> >(&var_b0)
var_130
std::iostream::iostream<char, struct std::char_traits<char> >(&var_148, &var_130)
*(&var_148 + sx.q(var_148.vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
int64_t rcx_3 = sx.q(var_148.vtable->__vecDelDtor:4.d)
void var_14c
*(&var_14c + rcx_3) = (rcx_3 - 0x98).d
std::streambuf::streambuf<char, struct std::char_traits<char> >()
var_138:8.q = &std::stringbuf::`vftable'{for `std::streambuf'}
void var_128
var_128:0x60.q = 0
var_128:0x68.d = 0
void** rax_7 = sub_14058b120(
    std::ostream::operator<<(sub_14058b120(std::ostream::operator<<(&var_138), " (")), "): ")
void* var_48
char* rax_8 = sub_1406118c0(arg1, &var_48, *(arg1 + 8))
wchar16* r8_1 = *(rax_8 + 0x10)

if (*(rax_8 + 0x18) u>= 0x10)
    rax_8 = *rax_8

sub_14058bab0(rax_7, rax_8, r8_1)
int64_t var_30

if (var_30 u>= 0x10)
    void* rcx_10 = var_48
    void* rax_9 = rcx_10
    
    if (var_30 + 1 u>= 0x1000)
        rcx_10 = *(rcx_10 - 8)
        
        if (rax_9 - rcx_10 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_10)

char rcx_11 = (var_128:0x68.d).b
*(arg2 + 0x10) = 0
*(arg2 + 0x18) = 0xf
*arg2 = 0
int64_t r8_2

if ((rcx_11 & 2) == 0)
    r8_2 = *var_128:0x38.q

int64_t rdx_6

if ((rcx_11 & 2) == 0 && r8_2 != 0)
    if (r8_2 u< var_128:0x60.q)
        r8_2 = var_128:0x60.q
    
    rdx_6 = *var_128:0x18.q
    sub_14058ad40(arg2, rdx_6, r8_2 - rdx_6)
else if ((rcx_11 & 4) == 0)
    int64_t rcx_12 = *var_128:0x30.q
    
    if (rcx_12 != 0)
        rdx_6 = *var_128:0x10.q
        sub_14058ad40(arg2, rdx_6, sx.q(*var_128:0x48.q) - rdx_6 + rcx_12)
*(&var_148 + sx.q(var_148.vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
int64_t rdx_8 = sx.q(var_148.vtable->__vecDelDtor:4.d)
*(&var_14c + rdx_8) = (rdx_8 - 0x98).d
sub_140589260(&var_130)
std::iostream::~iostream<char, struct std::char_traits<char> >(&var_128)
std::ios::~ios<char, struct std::char_traits<char> >(&var_b0)
__security_check_cookie(rax_1 ^ &var_168)
return arg2
