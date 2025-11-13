// 函数: sub_141704d50
// 地址: 0x141704d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
sub_141703350(arg1)
sub_141703070(&arg1[0x36])
int64_t rdi = sx.q(arg2[1].d)

if (rdi.d != arg1[3].d)
    sub_1417502a0(arg1, rdi.d)

int64_t* r12 = nullptr
int32_t r14 = 0

if (rdi.d s> 0)
    float (* rdx_1)[0x4] = nullptr
    float (* var_148_1)[0x4] = nullptr
    int64_t r15_1 = 0
    int64_t* rdi_1 = nullptr
    
    do
        int64_t rcx_2 = arg1[5]
        float zmm2[0x4] = *(rdi_1 + *arg2 + 0x20)
        float var_138_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
        *(r12 + rcx_2) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
        *(r12 + rcx_2 + 8) = var_138_1
        *(rdx_1 + arg1[0xd]) = *(rdi_1 + *arg2 + 0x10)
        arg1[0x10][r15_1] = *(rdi_1 + *arg2)
        sub_14175b390(arg1, r14)
        sub_141744270(arg1, r14)
        r12 += 0xc
        rdx_1 = &var_148_1[1]
        rdi_1 = &rdi_1[8]
        r14 += 1
        var_148_1 = rdx_1
        r15_1 += 1
    while (r15_1 s< rdi)

int16_t var_120 = 0x104
void** const var_128 = &data_142fc4a88
int64_t var_110
__builtin_memset(&var_110, 0, 0x3c)
int32_t var_d4 = 0x80
int32_t var_d0 = 0xffffffff
int32_t var_cc = 0
int64_t var_c0 = 0
int32_t var_b8 = 0
int64_t var_b0 = 0
int64_t var_a8 = 0
int32_t var_a0 = 1
int64_t var_98
__builtin_memset(&var_98, 0, 0x20)
CRITICAL_SECTION criticalSection
InitializeCriticalSection(&criticalSection)
SetCriticalSectionSpinCount(&criticalSection, 0xfa0)

if (arg1[3].d s> 0)
    sub_14175ab50(&var_128, 0, 0, zx.o(0))

arg1[0x38] = arg1

if (&arg1[0x39] != &var_110)
    int64_t rcx_9 = arg1[0x39]
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    arg1[0x39] = var_110
    int64_t var_108
    arg1[0x3a].d = var_108.d
    *(arg1 + 0x1d4) = var_108:4.d
    int64_t var_108_1 = 0
    var_110 = 0

int64_t var_100
sub_1417072e0(&arg1[0x3b], &var_100)
arg1[0x47].d = var_a0
sub_141706f80(&arg1[0x48], &var_98)
int64_t var_88
sub_141707010(&arg1[0x4a], &var_88)
sub_141705ba0(&var_128)
__security_check_cookie(rax_1 ^ &var_168)
return arg1
