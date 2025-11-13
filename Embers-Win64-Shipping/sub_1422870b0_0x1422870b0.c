// 函数: sub_1422870b0
// 地址: 0x1422870b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
float zmm4 = arg3
int32_t rax_1 = arg4 & 0xfffffff0
*(arg1 + 0x58) = 0x80000000

do
    *(arg1 + ((zx.q(rax_1) & 7) << 3) + 0x18) = 0
    
    if ((rax_1.b & 7) u>= 7)
        rax_1 |= 8
    else
        rax_1 ^= ((rax_1 + 1) ^ rax_1) & 7
while (((rax_1 u>> 3).b & 1) == 0)

float zmm1[0x4] = *arg2
arg3 = *(arg2 + 4)
int32_t zmm3 = *(arg2 + 8)
*(arg1 + 0x88) = 0
int32_t var_1c = 0
float var_28[0x4]
var_28[0] = zmm1[0]
int32_t var_c = 0
float var_18[0x4]
var_18[0] = zmm4
float temp0[0x4] = _mm_shuffle_ps(var_28, var_28, 0xe1)
float temp0_1[0x4] = _mm_shuffle_ps(var_18, var_18, 0xe1)
temp0[0] = arg3
temp0_1[0] = zmm4
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = zmm3
temp0_3[0] = zmm4
*(arg1 + 0x60) = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
*(arg1 + 0x70) = temp0_5
temp0_5[0] = temp0_5[0] * 0.53125f
*(arg1 + 0x80) = temp0_5[0]
temp0_5[0] = temp0_5[0] - temp0_5[0]
*(arg1 + 0x84) = temp0_5[0]
*(arg1 + 0x90) = zmm4 * 0.000505344244f
*(arg1 + 0x98) = 0
return arg1
