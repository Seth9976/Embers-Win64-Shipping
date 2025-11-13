// 函数: sub_142788b40
// 地址: 0x142788b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rax_2 = arg1[2]
int128_t* rax_6
void* rdx
int64_t r15

if (*(rax_2 + 0x718) != 0 || *(rax_2 + 0x719) != 0)
    r15 = sx.q(arg2)
    rax_6 = (r15 << 4) + *(*arg1[1] + 0x80)
    void var_a8
    rdx = &var_a8
else
    r15 = sx.q(arg2)
    void var_ac
    rdx = &var_ac
    rax_6 = (r15 << 4) + *(*arg1[1] + 0x60)

char* rax_10 = sub_140ae16d0(rax_6, rdx, 1)
int64_t* rcx_2 = arg1[1]
int64_t rsi = r15 * 3
int64_t var_b8 = 0x3f800000
int32_t var_b0 = 0
int64_t* rdx_2 = *rcx_2
int64_t rcx_3 = *rdx_2
int64_t rdi = rdx_2[0xa]
int32_t var_90 = *(rcx_3 + (rsi << 2) + 8)
uint64_t var_98 = *(rcx_3 + (rsi << 2))
uint128_t var_58
sub_1414f8a70(&var_58:0xc, &var_b8)
var_b8 = 0
int32_t var_b0_1 = 0x3f800000
int64_t var_48
sub_1414f8a70(&var_48, &var_b8)
int32_t zmm1 = *(rdi + (r15 << 3))
uint128_t zmm2 = *(rdi + (r15 << 3) + 4)
int32_t rax_11 = *rax_10
uint128_t zmm0 = var_98.o
_mm_shuffle_ps(zmm0, zmm0, 0x93)
zmm0.d = zmm1
int32_t var_44 = rax_11
int64_t* rax_12 = *arg1
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
int64_t r10 = r15 * 0x58
uint128_t* rcx_7 = *rax_12
char var_45 = 0x7f
*(rcx_7 + r10) = zmm0
_mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm0.d = zmm1
_mm_shuffle_ps(zmm0, zmm0, 0xc6)
zmm0.d = zmm2.d
_mm_shuffle_ps(zmm0, zmm0, 0x27)
zmm0.d = zmm1
*(rcx_7 + r10 + 0x10) = _mm_shuffle_ps(zmm0, zmm0, 0x39)
_mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm0.d = zmm1
_mm_shuffle_ps(zmm0, zmm0, 0xc6)
zmm0.d = zmm2.d
_mm_shuffle_ps(zmm0, zmm0, 0x27)
zmm0.d = zmm1
*(rcx_7 + r10 + 0x20) = _mm_shuffle_ps(zmm0, zmm0, 0x39)
_mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm0.d = zmm1
_mm_shuffle_ps(zmm0, zmm0, 0xc6)
zmm0.d = zmm2.d
_mm_shuffle_ps(zmm0, zmm0, 0x27)
zmm0.d = zmm1
*(rcx_7 + r10 + 0x30) = _mm_shuffle_ps(zmm0, zmm0, 0x39)
zmm0.d = zmm2.d
_mm_shuffle_ps(zmm0, zmm0, 0xe1)
zmm0.d = zmm1
_mm_shuffle_ps(zmm0, zmm0, 0xc6)
zmm0.d = zmm2.d
*(rcx_7 + r10 + 0x40) = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
*(rcx_7 + r10 + 0x50) = var_48
void* rcx_8 = *arg1[1]
sub_142252cf0(**arg1 + r10, *(rcx_8 + 0x30) + (rsi << 2), *(rcx_8 + 0x40) + (rsi << 2), 
    *(rcx_8 + 0x20) + (rsi << 2))
__security_check_cookie(rax_1 ^ &var_d8)
return 0xffffff81
