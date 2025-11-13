// 函数: sub_140adf3c0
// 地址: 0x140adf3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0_1[0x4] = sub_140a3f4a0(*(arg1 + 4), *arg1)
float zmm1_1[0x4] = *(arg1 + 4)
float zmm2 = *arg1
zmm0_1[0] = zmm0_1[0] f* 57.2957764f
zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
arg2[1] = zmm0_1[0]
float zmm0_2 = sub_140a3f4a0(*(arg1 + 8), _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1_1[0])) * 57.2957764f
arg2[2] = 0
*arg2 = zmm0_2
return arg2
