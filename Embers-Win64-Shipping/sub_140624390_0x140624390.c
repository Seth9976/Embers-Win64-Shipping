// 函数: sub_140624390
// 地址: 0x140624390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
class std::iostream var_188
var_188.vtable = &data_143702040
uint128_t zmm8 = arg1
void var_178
var_178.q = &data_143702020
var_f0
std::ios::ios<char, struct std::char_traits<char> >(&var_f0)
var_170
std::iostream::iostream<char, struct std::char_traits<char> >(&var_188, &var_170)
*(&var_188 + sx.q(var_188.vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
int64_t rcx_3 = sx.q(var_188.vtable->__vecDelDtor:4.d)
void var_18c
*(&var_18c + rcx_3) = (rcx_3 - 0x98).d
std::streambuf::streambuf<char, struct std::char_traits<char> >()
int128_t zmm6
zmm6.d = arg3.d f* 44100f
int64_t r9 = 0
var_178:8.q = &std::stringbuf::`vftable'{for `std::streambuf'}
char rcx_4 = 0
void var_168
var_168:0x60.q = 0
int32_t rsi = 0
var_168:0x68.d = 0
int32_t r14 = int.d(zmm6.d)

if (r14 s> 0)
    uint128_t zmm7
    zmm7.d = arg2.d f* 6.28318548f
    zmm6.q = fconvert.d(zmm7.d)
    
    do
        arg1.q = _mm_cvtepi32_pd(zx.q(rsi)).q f* 0x3ef7c6f8c751f177
        arg1.q = arg1.q f* zmm6.q
        int32_t rbx_1 = 0
        arg1.d = sinf(_mm_cvtpd_ps(arg1).d).d f* zmm8.d
        int32_t i_1 = 2
        int32_t rax_4 = int.d(arg1.d)
        
        if (rax_4 s>= 0)
            rbx_1 = rax_4
        
        int32_t i
        
        do
            std::ostream::put(&var_178, rbx_1.b)
            rbx_1 s>>= 8
            i = i_1
            i_1 -= 1
        while (i != 1)
        rsi += 1
    while (rsi s< r14)
    
    rcx_4 = (var_168:0x68.d).b
    r9 = var_168:0x60.q

uint32_t var_78 = 0
int64_t var_70 = 0xf
char var_88 = 0
int64_t r8_1

if ((rcx_4 & 2) == 0)
    r8_1 = *var_168:0x38.q

int64_t rdx_3

if ((rcx_4 & 2) == 0 && r8_1 != 0)
    if (r8_1 u< r9)
        r8_1 = r9
    
    rdx_3 = *var_168:0x18.q
    sub_14058ad40(&var_88, rdx_3, r8_1 - rdx_3)
else if ((rcx_4 & 4) == 0)
    int64_t rcx_6 = *var_168:0x30.q
    
    if (rcx_6 != 0)
        rdx_3 = *var_168:0x10.q
        sub_14058ad40(&var_88, rdx_3, sx.q(*var_168:0x48.q) - rdx_3 + rcx_6)
char* rcx_8 = &var_88

if (var_70 u>= 0x10)
    rcx_8 = var_88.q

void* result = sub_1406246f0(rcx_8, var_78)

if (var_70 u>= 0x10)
    void* rcx_9 = var_88.q
    void* rax_10 = rcx_9
    
    if (var_70 + 1 u>= 0x1000)
        rcx_9 = *(rcx_9 - 8)
        
        if (rax_10 - rcx_9 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_9)

struct std::iostream::VTable* vtable = var_188.vtable
int64_t var_78_1 = 0
int64_t var_70_1 = 0xf
var_88 = 0
*(&var_188 + sx.q(vtable->__vecDelDtor:4.d)) = &std::stringstream::`vftable'
int64_t rcx_11 = sx.q(var_188.vtable->__vecDelDtor:4.d)
*(&var_18c + rcx_11) = (rcx_11 - 0x98).d
sub_140589260(&var_170)
std::iostream::~iostream<char, struct std::char_traits<char> >(&var_168)
std::ios::~ios<char, struct std::char_traits<char> >(&var_f0)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
