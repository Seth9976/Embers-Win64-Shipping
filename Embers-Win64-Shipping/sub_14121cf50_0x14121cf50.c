// 函数: sub_14121cf50
// 地址: 0x14121cf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
uint128_t zmm9
uint128_t var_78 = zmm9
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* var_178 = &data_143ec4c60
char var_188 = 0

if (sub_1422dd780(*arg2) == 0 || data_143e8150c == 0)
    sub_141394ae0(&data_143ec4c60, arg1, 0, 0x21, true)
else
    sub_141394df0(&data_143ec4c60, arg1, arg2, arg3, arg4, data_143ec4e18 == 0)
    var_188 = 1

int64_t var_cc
__builtin_memset(&var_cc, 0, 0x43)
int128_t var_128
__builtin_memset(&var_128, 0, 0x30)
int128_t var_e0 = zx.o(0)
int16_t var_88 = 0
sub_140fdc870(arg1, &var_128)
zmm7 = zx.o(arg2[0x2b4].d)
void*** rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
zmm8 = zx.o(*(arg2 + 0x159c))
zmm9 = zx.o(arg2[0x2b3].d)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x15a4)))
void* rax_4 = &rcx_5[5]
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_4 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_5[5]

*(arg1 + 0x30) = rax_4
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_5
*(arg1 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142d54998
rcx_5[2].d = zmm9.d
*(rcx_5 + 0x14) = zmm8.d
*(rcx_5 + 0x1c) = zmm7.d
rcx_5[4].d = zmm6.d
rcx_5[3].d = 0
*(rcx_5 + 0x24) = 0x3f800000
int64_t var_f8 = data_1439b57b8
int64_t var_f0 = data_14395da18
int64_t var_e8 = data_14395d9e8
void* var_168
sub_1419a2ec0(arg2[0xa2a], &var_168, &data_143f55f90, 0)
void* var_138
sub_1419a2ec0(arg2[0xa2a], &var_138, &data_143e83710, 0)
void* rcx_11 = var_168
var_128.q = data_1439c9210
int64_t rax_11 = 0

if (rcx_11 != 0)
    int64_t rdx_5 = sx.q(*(rcx_11 + 0x10c))
    void* var_160
    int64_t* rdi_1 = *(var_160 + 0x10)
    int64_t rax_13 = rdi_1[3]
    
    if (*(rax_13 + (rdx_5 << 3)) == 0)
        sub_1419ccf30(rdi_1, rdx_5.d)
        rax_13 = rdi_1[3]
    
    rax_11 = *(rax_13 + (rdx_5 << 3))

void* rcx_13 = var_138
var_128:8.q = rax_11
int64_t rax_14 = 0

if (rcx_13 != 0)
    int64_t rdx_6 = sx.q(*(rcx_13 + 0x10c))
    void* var_130
    int64_t* rdi_2 = *(var_130 + 0x10)
    int64_t rax_16 = rdi_2[3]
    
    if (*(rax_16 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rdi_2, rdx_6.d)
        rax_16 = rdi_2[3]
    
    rax_14 = *(rax_16 + (rdx_6 << 3))

int128_t var_108
var_108.q = rax_14
int32_t var_d0 = 0
sub_1419870b0(arg1, &var_128, 2)
int32_t rax_17 = data_1439b6364
int32_t r8_1

if (rax_17 s>= 1)
    r8_1 = 8
    
    if (rax_17 s< 8)
        r8_1 = rax_17
else
    r8_1 = 1

int64_t rax_18 = data_143ec4fdc
int64_t rcx_16 = arg2[0x2b3]
int64_t var_184 = rax_18
var_184.d = divs.dp.d(sx.q(rax_18.d), r8_1)
var_184:4.d = divs.dp.d(sx.q(var_184:4.d), r8_1)
int32_t temp0_6 = divs.dp.d(sx.q(rcx_16.d), r8_1)
int64_t var_184_1 = rcx_16
var_184_1.d = temp0_6
int64_t var_148 = var_184
int32_t temp0_7 = divs.dp.d(sx.q(var_184_1:4.d), r8_1)
int32_t var_158 = temp0_6
var_184_1:4.d = temp0_7
uint64_t rsi_3 = zx.q(divu.dp.d(0:(arg2[0x2b4].d - rcx_16.d), r8_1))
uint32_t temp0_9 = divu.dp.d(0:(*(arg2 + 0x15a4) - (rcx_16 u>> 0x20).d), r8_1)
uint32_t r8_3 = (var_184_1 u>> 0x20).d
int32_t var_150 = temp0_6 + rsi_3.d
uint32_t var_154 = r8_3
uint32_t var_14c = r8_3 + temp0_9
int32_t var_1d0 = &var_158
bool var_1d8
var_1d8.q = &var_148
void* r9_3
int512_t zmm2
int512_t zmm3
r9_3, zmm2, zmm3 = sub_1412399c0(var_138, arg1, arg2, arg5, var_1d8)
int32_t rdx_16 = arg2[0x2b4].d - arg2[0x2b3].d
int32_t rcx_20 = *(arg2 + 0x15a4) - *(arg2 + 0x159c)
int32_t var_190 = 1
int32_t var_198 = 1
void** var_1a0 = &var_168
var_168.o = var_168.o
var_184_1.d = rdx_16
var_184_1:4.d = rcx_20
int128_t zmm0
zmm0.d = float.s(rsi_3)
zmm2.o = zx.o(temp0_6)
zmm3.o = zx.o(rdx_16)
int32_t var_1c0 = zmm0.d
int32_t var_1c8 = _mm_cvtepi32_ps(zx.o(temp0_7)).d
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rcx_20))
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
var_1d0 = zmm2.d
zmm2.o = zx.o(0)
var_1d8.d = zmm4.d
sub_1413993b0(arg1, zx.o(0), zmm2, r9_3, zmm3, var_1d8, var_1d0, var_1c8, var_1c0, 
    float.s(zx.q(temp0_9)), var_184_1, var_184, var_1a0, var_198, var_190)
int64_t result
int512_t zmm6_1

if (var_188 == 0)
    result, zmm6_1 = sub_14139bc50(var_178, arg1)
else
    sub_141096650(arg1)
    result, zmm6_1 = sub_1413a95e0(var_178, arg1, arg2)

__security_check_cookie(rax_1 ^ &var_1f8)
zmm6_1.o = arg4
return result
