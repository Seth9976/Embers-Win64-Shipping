// 函数: sub_1413c9cd0
// 地址: 0x1413c9cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void* var_160
sub_1419a2ec0(*(*(arg1 + 0x10) + 0x5150), &var_160, &data_143ed5e80, 0)
void* r12 = var_160
int128_t var_148
sub_1419a2ec0(*(*(arg1 + 0x10) + 0x5150), &var_148, &data_143ec9430, 0)
int128_t var_138 = var_148
int64_t var_cc
__builtin_memset(&var_cc, 0, 0x43)
int128_t var_e0 = zx.o(0)
int128_t var_128
__builtin_memset(&var_128, 0, 0x30)
int16_t var_88 = 0
sub_140fdc870(arg2, &var_128)
int64_t var_f8 = data_1439b57b8
int64_t var_f0 = data_14395da18
int64_t var_e8 = data_14395d9e8
var_128.q = data_1439c9210
int64_t rax_6 = 0
void* var_158

if (r12 != 0)
    int64_t rdx_3 = sx.q(*(r12 + 0x10c))
    int64_t* rbx_1 = *(var_158 + 0x10)
    int64_t rax_7 = rbx_1[3]
    
    if (*(rax_7 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_3.d)
        rax_7 = rbx_1[3]
    
    rax_6 = *(rax_7 + (rdx_3 << 3))

void* rbx_2 = var_148.q
void* r15 = var_148:8.q
var_128:8.q = rax_6
int64_t rax_8 = 0

if (rbx_2 != 0)
    int64_t rdx_4 = sx.q(*(rbx_2 + 0x10c))
    int64_t* rdi_2 = *(r15 + 0x10)
    int64_t rax_9 = rdi_2[3]
    
    if (*(rax_9 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(rdi_2, rdx_4.d)
        rax_9 = rdi_2[3]
    
    rax_8 = *(rax_9 + (rdx_4 << 3))

int128_t var_108
var_108.q = rax_8
int32_t var_d0 = 0
sub_1419870b0(arg2, &var_128, 2)
int64_t r8 = 0

if (rbx_2 != 0)
    int64_t rdx_6 = sx.q(*(rbx_2 + 0x10c))
    int64_t* rbx_3 = *(r15 + 0x10)
    int64_t rax_10 = rbx_3[3]
    
    if (*(rax_10 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rbx_3, rdx_6.d)
        rax_10 = rbx_3[3]
    
    r8 = *(rax_10 + (rdx_6 << 3))

int512_t zmm2
int512_t zmm3
zmm2, zmm3 = sub_1413bcc20(arg2, &var_138, r8, *(arg1 + 0x18))
void* rax_11 = *(arg1 + 0x10)
void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(*(rax_11 + 0x15a0))
uint128_t zmm8 = zx.o(*(rax_11 + 0x159c))
uint128_t zmm9 = zx.o(*(rax_11 + 0x1598))
void* rax_12 = &rcx_12[5]
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(rax_11 + 0x15a4)))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_12 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_12[5]

*(arg2 + 0x30) = rax_12
*(arg2 + 0x14) += 1
void**** rax_13 = *(arg2 + 8)
int32_t var_170 = 1
int32_t var_178 = 0
var_160 = r12
*rax_13 = rcx_12
*(arg2 + 8) = &rcx_12[1]
rcx_12[2].d = zmm9.d
*(rcx_12 + 0x14) = zmm8.d
*(rcx_12 + 0x1c) = zmm7.d
rcx_12[4].d = zmm6.d
rcx_12[3].d = 0
*(rcx_12 + 0x24) = 0x3f800000
rcx_12[1] = 0
*rcx_12 = &data_142d54998
void* rcx_16 = *(arg1 + 0x10)
void* var_158_1 = var_158
void* r9_1 = zx.q(*(rcx_16 + 0x1598))
int32_t rdx_8 = *(rcx_16 + 0x159c)
int32_t r8_2 = *(rcx_16 + 0x15a0) - r9_1.d
int64_t rax_16 = *(*(arg1 + 8) + 0x37c)
int32_t rcx_18 = *(rcx_16 + 0x15a4) - rdx_8
void* var_168
var_168:4.d = rcx_18
zmm3.o = zx.o(r8_2)
zmm2.o = zx.o(rcx_18)
void** var_180 = &var_160
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
var_168.d = r8_2
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
int32_t var_198 = zmm2.d
int32_t var_1b8 = zmm2.d
zmm2.o = zx.o(0)
int64_t result = sub_1413993b0(arg2, zx.o(0), zmm2, r9_1, zmm3, var_1b8, 
    _mm_cvtepi32_ps(zx.o(r9_1.d)).d, _mm_cvtepi32_ps(zx.o(rdx_8)).d, zmm3.d, var_198, var_168, 
    rax_16, var_180, var_178, var_170)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
