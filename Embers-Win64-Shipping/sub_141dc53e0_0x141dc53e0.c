// 函数: sub_141dc53e0
// 地址: 0x141dc53e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2 = *(arg1 + 0x130)

if (rax_2 == 0)
    *arg2 = 0x3f800000
    arg2[1] = 0x3f800000
    arg2[2] = 0x3f800000
    return arg2

float zmm1[0x4] = *(rax_2 + 0x1e0)
*arg2 = zmm1[0]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
arg2[2] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
arg2[1] = temp0[0]
return arg2
