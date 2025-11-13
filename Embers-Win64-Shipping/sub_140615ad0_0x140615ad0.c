// 函数: sub_140615ad0
// 地址: 0x140615ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
class std::iostream var_148
var_148.vtable = &data_143702040
var_148.vtable = &data_143702020
var_b0
std::ios::ios<char, struct std::char_traits<char> >(&var_b0)
var_130
std::iostream::iostream<char, struct std::char_traits<char> >(&var_148, &var_130)
*(&var_148 + sx.q(var_148.vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
int64_t rcx_3 = sx.q(var_148.vtable->__vecDelDtor:4.d)
void var_14c
*(&var_14c + rcx_3) = (rcx_3 - 0x98).d
std::streambuf::streambuf<char, struct std::char_traits<char> >()
void var_128
var_128:0x60.q = 0
var_148.__offset(0x18).q = &std::stringbuf::`vftable'{for `std::streambuf'}
var_128:0x68.d = 0
void* var_48
char* rax_4 = sub_1406158a0(arg1, &var_48)
wchar16* r8 = *(rax_4 + 0x10)

if (*(rax_4 + 0x18) u>= 0x10)
    rax_4 = *rax_4

void* rdi_1 = arg1 + 0x20
var_138
void** rax_6 = sub_14058b120(sub_14058bab0(&var_138, rax_4, r8), ": ")
wchar16* r8_1 = *(rdi_1 + 0x10)

if (*(rdi_1 + 0x18) u>= 0x10)
    rdi_1 = *rdi_1

sub_14058bab0(rax_6, rdi_1, r8_1)
int64_t var_30

if (var_30 u>= 0x10)
    void* rcx_8 = var_48
    void* rax_7 = rcx_8
    
    if (var_30 + 1 u>= 0x1000)
        rcx_8 = *(rcx_8 - 8)
        
        if (rax_7 - rcx_8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_8)

char rcx_9 = (var_128:0x68.d).b
*(arg2 + 0x10) = 0
*(arg2 + 0x18) = 0xf
*arg2 = 0
int64_t r8_2

if ((rcx_9 & 2) == 0)
    r8_2 = *var_128:0x38.q

int64_t rdx_7

if ((rcx_9 & 2) == 0 && r8_2 != 0)
    if (r8_2 u< var_128:0x60.q)
        r8_2 = var_128:0x60.q
    
    rdx_7 = *var_128:0x18.q
    sub_14058ad40(arg2, rdx_7, r8_2 - rdx_7)
else if ((rcx_9 & 4) == 0)
    int64_t rcx_10 = *var_128:0x30.q
    
    if (rcx_10 != 0)
        rdx_7 = *var_128:0x10.q
        sub_14058ad40(arg2, rdx_7, sx.q(*var_128:0x48.q) - rdx_7 + rcx_10)
*(&var_148 + sx.q(var_148.vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
int64_t rdx_9 = sx.q(var_148.vtable->__vecDelDtor:4.d)
*(&var_14c + rdx_9) = (rdx_9 - 0x98).d
sub_140589260(&var_130)
std::iostream::~iostream<char, struct std::char_traits<char> >(&var_128)
std::ios::~ios<char, struct std::char_traits<char> >(&var_b0)
__security_check_cookie(rax_1 ^ &var_168)
return arg2
