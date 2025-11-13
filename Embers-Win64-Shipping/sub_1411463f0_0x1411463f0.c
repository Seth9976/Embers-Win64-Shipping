// 函数: sub_1411463f0
// 地址: 0x1411463f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x48f8)
void* r8 = data_143f115e8

if (rax != 0)
    r8 = *(rax + 0x78)

int32_t zmm4 = 0x3f800000
*arg2 = *(arg1 + 0x48b0)
uint128_t zmm0 = *(arg1 + 0x48d4)
float zmm2[0x4] = 0x3f800000
uint128_t zmm1 = *(arg1 + 0x48d8)
zmm2[0] = 1f f- *(arg1 + 0x48dc)
float zmm3[0x4] = *(arg1 + 0x48d0)
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm0.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1.d
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm2[0]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
arg2[2] = temp0_3
arg2[1] = *(arg1 + 0x48c0)
temp0_3[3] = 0x3f800000
arg2[3] = *(arg1 + 0x48e0)
arg2[6].q = *(arg1 + 0x48f0)
arg2[7].q = *(arg1 + 0x4900)
*(arg2 + 0x78) = *(arg1 + 0x4908)
zmm1 = *(arg1 + 0x491c)
temp0_3[0] = (*(arg1 + 0x4918)).d
zmm2 = *(arg1 + 0x4920)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
temp0_4[0] = zmm1.d
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
temp0_5[0] = zmm2[0]
arg2[4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)

if (*(arg1 + 0x490c) == 0)
    zmm0 = 0xbf800000
else
    zmm0 = _mm_max_ss((*(arg1 + 0x4914)).d, 0)

zmm3 = 0x358637bd
*(arg2 + 0x4c) = zmm0.d
zmm1 = *(arg1 + 0x4910)

if (not(zmm1.d f< 9.99999997e-07f))
    zmm3 = __minss_xmmss_memss(zmm1[0], 0x447a0000)

zmm2 = *(arg1 + 0x4924)
zmm0 = *(arg1 + 0x4928)
zmm1 = *(arg1 + 0x492c)
float temp0_9[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
temp0_9[0] = zmm0.d
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
temp0_10[0] = zmm1.d
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x27)
temp0_11[0] = zmm3[0]
arg2[5] = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
arg2[8].q = *(r8 + 0x10)
*(arg2 + 0x88) = data_1439b5ec0
void* r8_1 = *(arg1 + 0x5080)
int64_t rax_4

if (r8_1 != 0)
    rax_4 = *(r8_1 + 0x10)

if (r8_1 == 0 || rax_4 == 0)
    rax_4 = *(data_143f112a8 + 0x10)
    
    if (rax_4 == 0)
        rax_4 = *(data_143f10e68 + 0x10)

if (r8_1 == 0)
    zmm4 = (zx.o(0)).d

*(arg2 + 0x7c) = zmm4
arg2[9].q = rax_4
int64_t result = data_14395f4d0
*(arg2 + 0x98) = result
return result
