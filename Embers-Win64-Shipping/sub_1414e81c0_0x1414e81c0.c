// 函数: sub_1414e81c0
// 地址: 0x1414e81c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rax_2 = sub_14139bef0(arg1)
sub_141394ae0(rax_2, arg1, 0, 0x21, 1)
uint128_t zmm7 = zx.o(*(arg2 + 0x15a0))
void*** rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm8 = zx.o(*(arg2 + 0x159c))
uint128_t zmm9 = zx.o(*(arg2 + 0x1598))
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x15a4)))
void* rax_3 = &rcx_3[5]
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_3 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_3[5]

*(arg1 + 0x30) = rax_3
void**** rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_4 = rcx_3
*(arg1 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142d54998
rcx_3[2].d = zmm9.d
*(rcx_3 + 0x14) = zmm8.d
*(rcx_3 + 0x1c) = zmm7.d
rcx_3[4].d = zmm6.d
rcx_3[3].d = 0
*(rcx_3 + 0x24) = 0x3f800000
int128_t var_128
__builtin_memset(&var_128, 0, 0x30)
int64_t var_cc
__builtin_memset(&var_cc, 0, 0x43)
int128_t var_e0 = zx.o(0)
int16_t var_88 = 0
sub_140fdc870(arg1, &var_128)
int64_t var_f0 = data_14395da18
int64_t var_e8 = data_14395d9e8
int64_t rax_8 = data_1439b5250

if (arg3 != 0)
    rax_8 = data_14395da00

int64_t var_f8 = rax_8
void* var_158
sub_1419a2ec0(*(arg2 + 0x5150), &var_158, &data_143f55f90, 0)
uint32_t temp0_4[0x4]

if (*(data_143ee7b58 + 4) != 0)
    uint32_t zmm0_1[0x4] = *(rax_2 + 0x39c)
    zmm0_1[0] = zmm0_1[0] f- 0.5f
    temp0_4 = __andps_xmmxud_memxud(zmm0_1, data_142d3f770)

void* var_148
void* var_138
void* r13
void* r14_1

if (*(data_143ee7b58 + 4) == 0 || temp0_4[0] f>= 0.00100000005f)
    sub_1419a2ec0(*(arg2 + 0x5150), &var_138, &data_143ee8b70, 0)
    r14_1 = var_138
    void* var_130
    r13 = var_130
else
    sub_1419a2ec0(*(arg2 + 0x5150), &var_148, &data_143ee8c70, 0)
    r14_1 = var_148
    void* var_140
    r13 = var_140

void* rcx_11 = var_158
var_128.q = data_1439c9210
int64_t rax_11 = 0

if (rcx_11 != 0)
    int64_t rdx_5 = sx.q(*(rcx_11 + 0x10c))
    void* var_150
    int64_t* rsi_1 = *(var_150 + 0x10)
    int64_t rax_13 = rsi_1[3]
    
    if (*(rax_13 + (rdx_5 << 3)) == 0)
        sub_1419ccf30(rsi_1, rdx_5.d)
        rax_13 = rsi_1[3]
    
    rax_11 = *(rax_13 + (rdx_5 << 3))

var_128:8.q = rax_11
int64_t rax_14 = 0

if (r14_1 != 0)
    int64_t rdx_6 = sx.q(*(r14_1 + 0x10c))
    int64_t* rsi_2 = *(r13 + 0x10)
    int64_t rax_15 = rsi_2[3]
    
    if (*(rax_15 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rsi_2, rdx_6.d)
        rax_15 = rsi_2[3]
    
    rax_14 = *(rax_15 + (rdx_6 << 3))

int128_t var_108
var_108.q = rax_14
int32_t var_d0 = 0
sub_1419870b0(arg1, &var_128, 2)
sub_1414ddd80(r14_1, arg1, arg2)
int64_t* rcx_16 = rax_2[0x37]
zmm8 = *(rax_2 + 0x39c)
void* rax_17 = (*(*rcx_16 + 0x10))(rcx_16)
int64_t* rcx_17 = rax_2[0x37]
var_138.o = var_158.o
int32_t rdx_9 = *(rax_17 + 0x14)
var_148.d = rdx_9
void* rax_19
void* r9
rax_19, r9 = (*(*rcx_17 + 0x10))(rcx_17, rdx_9)
int32_t rdx_10 = *(arg2 + 0x1598)
int512_t zmm2
zmm2.o = zx.o(*(arg2 + 0x159c))
int32_t var_160 = 1
int32_t rax_21 = *(arg2 + 0x15a4) - *(arg2 + 0x159c)
int32_t var_168 = 1
var_148:4.d = *(rax_19 + 0x18)
int32_t rcx_20 = *(arg2 + 0x15a0) - rdx_10
var_158:4.d = rax_21
void** var_170 = &var_138
void* rax_22 = var_148
int512_t zmm3
zmm3.o = zx.o(rcx_20)
var_158.d = rcx_20
void* rax_23 = var_158
zmm7 = _mm_cvtepi32_ps(zx.o(rax_21))
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rdx_10))
uint128_t zmm0_2
zmm0_2.d = zmm1_1.d f* zmm8.d
char var_1a8
var_1a8.d = zmm7.d
sub_1413993b0(arg1, zmm1_1, zmm2, r9, zmm3, var_1a8, zmm0_2.d, zmm2.d f* zmm8.d, zmm3.d f* zmm8.d, 
    zmm7.d f* zmm8.d, rax_23, rax_22, var_170, var_168, var_160)
sub_14139bc50(rax_2, arg1)
__security_check_cookie(rax_1 ^ &var_1c8)
return &data_142d549b8
