// 函数: sub_1409fcaf0
// 地址: 0x1409fcaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm7[0x4] = arg1[4]
zmm7[0] = zmm7[0] f- arg1[1]
uint32_t zmm8[0x4] = arg1[5]
zmm8[0] = zmm8[0] f- arg1[2]
uint32_t zmm9[0x4] = arg1[3]
zmm9[0] = zmm9[0] f- *arg1
zmm7[0] = zmm7[0] f* 0.5f
zmm8[0] = zmm8[0] f* 0.5f
zmm9[0] = zmm9[0] f* 0.5f
zmm7[0] = zmm7[0] f* arg2[1]
float zmm1 = zmm8[0]
zmm7[0] = zmm7[0] f+ arg1[1]
zmm1 = zmm1 + arg1[2]
zmm8[0] = zmm8[0] f* arg2[2]
float zmm0 = zmm9[0]
zmm9[0] = zmm9[0] f* *arg2
zmm7[0] = zmm7[0] f* arg2[1]
zmm1 = zmm1 * arg2[2]
zmm7[0] = zmm7[0] f+ (zmm0 + *arg1) * *arg2
uint32_t temp0[0x4] = _mm_and_ps(zmm9, 0x7fffffff)
uint32_t temp0_1[0x4] = _mm_and_ps(zmm7, 0x7fffffff)
temp0[0] = temp0[0] f+ temp0_1[0]
uint32_t temp0_2[0x4] = _mm_and_ps(zmm8, 0x7fffffff)
zmm7[0] = zmm7[0] f+ zmm1
temp0[0] = temp0[0] f+ temp0_2[0]
zmm7[0] = zmm7[0] f- arg2[3]

if (not(zmm7[0] f<= temp0[0]))
    return 1

int32_t rax_1
rax_1.b = (temp0 ^ data_142d3f780)[0] f<= zmm7[0]
return zx.q(rax_1 - 1)
