// 函数: sub_14117e8e0
// 地址: 0x14117e8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t rbx = 0
int64_t var_c4
__builtin_memset(&var_c4, 0, 0x43)
int128_t var_120
__builtin_memset(&var_120, 0, 0x30)
int128_t var_d8 = zx.o(0)
int16_t var_80 = 0
sub_140fdc870(arg2, &var_120)
void* rcx_1 = arg1[1]
int64_t var_f0 = data_1439b6060
int64_t var_e8 = data_14395da18
int64_t var_e0 = data_14395d9e8
var_120.q = data_1439c9210
int64_t rax_6 = 0

if (rcx_1 != 0)
    int64_t rdx_1 = sx.q(*(rcx_1 + 0x10c))
    int64_t* r14_1 = *(arg1[2] + 0x10)
    int64_t rax_8 = r14_1[3]
    
    if (*(rax_8 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(r14_1, rdx_1.d)
        rax_8 = r14_1[3]
    
    rax_6 = *(rax_8 + (rdx_1 << 3))

var_120:8.q = rax_6
int64_t rcx_3 = 0
void* rax_9 = arg1[3]

if (rax_9 != 0)
    int64_t rdx_2 = sx.q(*(rax_9 + 0x10c))
    int64_t* r15_2 = *(arg1[4] + 0x10)
    int64_t rax_11 = r15_2[3]
    
    if (*(rax_11 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(r15_2, rdx_2.d)
        rax_11 = r15_2[3]
    
    rcx_3 = *(rax_11 + (rdx_2 << 3))

int128_t var_100
var_100.q = rcx_3
int32_t var_c8 = 0
sub_1419870b0(arg2, &var_120, 2)
uint128_t zmm7 = zx.o(arg1[6].d)
void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm8 = zx.o(*(arg1 + 0x2c))
uint128_t zmm9 = zx.o(arg1[5].d)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
void* rax_12 = &rcx_8[5]
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_12 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_8[5]

*(arg2 + 0x30) = rax_12
void** rax_13 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_13 = rcx_8
*(arg2 + 8) = &rcx_8[1]
rcx_8[1] = 0
rcx_8[2].d = zmm9.d
*(rcx_8 + 0x14) = zmm8.d
*(rcx_8 + 0x1c) = zmm7.d
rcx_8[4].d = zmm6.d
*rcx_8 = &data_142d54998
rcx_8[3].d = 0
*(rcx_8 + 0x24) = 0x3f800000
void* rax_15 = arg1[3]

if (rax_15 != 0)
    int64_t rdx_4 = sx.q(*(rax_15 + 0x10c))
    int64_t* r15_3 = *(arg1[4] + 0x10)
    int64_t rbx_1 = r15_3[3]
    
    if (*(rbx_1 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(r15_3, rdx_4.d)
        rbx_1 = r15_3[3]
    
    rbx = *(rbx_1 + (rdx_4 << 3))

void* r9_1
int512_t zmm2
int512_t zmm3
r9_1, zmm2, zmm3 = sub_141165be0(arg2, &arg1[3], rbx, *arg1)
int32_t rdx_6 = arg1[5].d
int32_t rcx_15 = arg1[6].d - rdx_6
uint128_t zmm0 = zx.o(*(arg1 + 0x2c))
int32_t var_140 = 1
int32_t var_148 = 1
int64_t var_130 = arg1[1]
int64_t var_128 = arg1[2]
int32_t rax_20 = *(arg1 + 0x34) - *(arg1 + 0x2c)
int32_t var_134 = rax_20
zmm3.o = zx.o(rcx_15)
zmm2.o = zx.o(rax_20)
int64_t* var_150 = &var_130
int64_t rax_21 = arg1[7]
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
int32_t var_168 = zmm2.d
int32_t var_188 = zmm2.d
zmm2.o = zx.o(0)
int64_t result = sub_1413993b0(arg2, zx.o(0), zmm2, r9_1, zmm3, var_188, 
    _mm_cvtepi32_ps(zx.o(rdx_6)).d, _mm_cvtepi32_ps(zmm0).d, zmm3.d, var_168, rcx_15.q, rax_21, 
    var_150, var_148, var_140)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
