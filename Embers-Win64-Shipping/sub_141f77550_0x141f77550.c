// 函数: sub_141f77550
// 地址: 0x141f77550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 0x1e0)
float var_18 = zmm1[0]
float var_14 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
float zmm0[0x4] = *(arg1 + 0x4e4)
char rax = *(arg1 + 0x4e2)
int32_t r9 = *(arg1 + 0x4d4)
char r8 = *(arg1 + 0x4dc)
char rdx_1 = *(arg1 + 0x4e1)
float var_10 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
return sub_141f771f0(arg1 + 0x408, rdx_1, r8, r9, rax, zmm0[0], &var_18)
