// 函数: sub_141f651c0
// 地址: 0x141f651c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x430)

if (r9 == 0 || arg3 s< 0 || arg3 s>= *(r9 + 0x1b0))
    *arg2 = data_143dbb1f8.q
    arg2[2] = data_143dbb200
    return arg2

float zmm1[0x4] = *(*(r9 + 0x1b8) + sx.q(arg3) * 0x30 + 0x10)
*arg2 = zmm1[0]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
arg2[2] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
arg2[1] = temp0[0]
return arg2
