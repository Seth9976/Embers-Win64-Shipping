// 函数: sub_1420f9940
// 地址: 0x1420f9940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
float zmm7[0x4] = *(arg1 + 0x20)
float temp0[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
float var_30 = temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
(*(rax + 0x18))()
*arg2 = (_mm_unpacklo_ps(zmm7, temp0_1[0].q)).q
arg2[1].d = var_30
*(arg2 + 0xc) = temp0[0]
return arg2
