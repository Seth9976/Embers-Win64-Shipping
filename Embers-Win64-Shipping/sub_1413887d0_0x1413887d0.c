// 函数: sub_1413887d0
// 地址: 0x1413887d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(arg1[0xa].d)
uint128_t zmm8 = zx.o(*(arg1 + 0x4c))
void* rax = &r8_2[5]
uint128_t zmm9 = zx.o(arg1[9].d)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x54)))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r8_2[5]

*(arg2 + 0x30) = rax
*(arg2 + 0x14) += 1
**(arg2 + 8) = r8_2
*(arg2 + 8) = &r8_2[1]
r8_2[1] = 0
r8_2[2].d = zmm9.d
*(r8_2 + 0x14) = zmm8.d
*(r8_2 + 0x1c) = zmm7.d
*r8_2 = &data_142d54998
r8_2[4].d = zmm6.d
r8_2[3].d = 0
*(r8_2 + 0x24) = 0x3f800000
int64_t* rcx_1 = *(*arg1 + 0x5150)
int64_t var_c8
int128_t zmm6_2
uint128_t var_b8
uint128_t var_a8

if (arg1[1].b == 0)
    sub_1419a2ec0(rcx_1, &var_b8, &data_143ed5e80, 0)
    zmm6 = var_b8
    var_c8 = arg1[2]
    int64_t var_c0_1 = arg1[3]
    int128_t zmm0_2 = var_c8.o
    int64_t var_88_1 = data_14395da00
    int64_t var_80_1 = data_14395d9e8
    int64_t var_78_1 = data_1439c9210
    var_a8 = zmm6
    int128_t var_98_1 = zmm0_2
    zmm6_2 = sub_141461130(arg2, &var_a8)
else
    sub_1419a2ec0(rcx_1, &var_c8, &data_143ec4370, 0)
    zmm6 = var_c8.o
    var_c8 = arg1[2]
    int64_t var_c0 = arg1[3]
    int128_t zmm0 = var_c8.o
    int64_t var_88 = data_14395da00
    int64_t var_80 = data_14395d9e8
    int64_t var_78 = data_1439c9210
    var_b8 = zmm6
    var_a8 = zmm6
    int128_t var_98 = zmm0
    uint128_t zmm6_1 = sub_141461130(arg2, &var_a8)
    void* rax_9 = zmm6_1.q
    int64_t r8_5 = 0
    
    if (rax_9 != 0)
        int64_t rdx_2 = sx.q(*(rax_9 + 0x10c))
        int64_t* r15_1 = *(_mm_bsrli_si128(zmm6_1, 8).q + 0x10)
        int64_t rax_11 = r15_1[3]
        
        if (*(rax_11 + (rdx_2 << 3)) == 0)
            sub_1419ccf30(r15_1, rdx_2.d)
            rax_11 = r15_1[3]
        
        r8_5 = *(rax_11 + (rdx_2 << 3))
    
    zmm6_2 = sub_141380fb0(arg2, &var_b8, r8_5, arg1[4])
void* rax_17 = arg1[2]
int64_t r8_6 = 0
var_c8.o = zmm6_2

if (rax_17 != 0)
    int64_t rdx_6 = sx.q(*(rax_17 + 0x10c))
    int64_t* r15_2 = *(arg1[3] + 0x10)
    int64_t rax_19 = r15_2[3]
    
    if (*(rax_19 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(r15_2, rdx_6.d)
        rax_19 = r15_2[3]
    
    r8_6 = *(rax_19 + (rdx_6 << 3))

sub_1413809f0(arg2, &arg1[2], r8_6, arg1[4])
int32_t rdx_8 = *(arg1 + 0x34)
int32_t r8_7 = arg1[6].d
int32_t rax_20 = (arg1[5]).d
int32_t r10_1 = arg1[0xa].d - arg1[9].d
void* r9_4 = zx.q(*(arg1 + 0x54) - *(arg1 + 0x4c))
int32_t r14
r14.b = arg1[1].b != 0
int32_t rcx_9 = *(arg1 + 0x3c) - rdx_8
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rdx_8))
int32_t arg_c = r9_4.d
int32_t rcx_11 = arg1[7].d - r8_7
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r8_7))
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rcx_9))
int32_t var_100 = _mm_cvtepi32_ps(zx.o(rcx_11)).d
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(r9_4.d))
return sub_14137d5e0(arg2, zx.o(0), zx.o(0).d, r9_4, _mm_cvtepi32_ps(zx.o(r10_1)), zmm4.d, zmm2.d, 
    zmm1.d, var_100, zmm5.d, r10_1, rax_20, &var_c8, r14 + 1, 1, var_c8.d)
