// 函数: sub_14248c7a0
// 地址: 0x14248c7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
float zmm1[0x4] = *(arg1 + 0x1e0)
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float result[0x4] = _mm_min_ss(temp0[0], zmm1[0])
temp0_1[0] = temp0_1[0] f* *(arg1 + 0x420)
result[0] = result[0] f* *(arg1 + 0x424)
temp0_1[0] = temp0_1[0] - result[0]
*arg3 = temp0_1[0]
return result
