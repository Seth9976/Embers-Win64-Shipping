// 函数: sub_142482ef0
// 地址: 0x142482ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
float zmm2[0x4] = *(arg1 + 0x1e0)
zmm2[0] = zmm2[0] f* *(arg1 + 0x420)
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
temp0[0] = temp0[0] f* *(arg1 + 0x424)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
temp0_1[0] = temp0_1[0] f* *(arg1 + 0x428)
*arg3 = (_mm_unpacklo_ps(zmm2, temp0[0].q)).q
float result = temp0_1[0]
arg3[1].d = result
return result
