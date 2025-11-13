// 函数: sub_141c3d480
// 地址: 0x141c3d480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg4
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)

if (arg3 s<= 0)
    return 

void* r9_1 = arg1 - arg2
uint64_t i_1 = zx.q(((arg3 - 1) u>> 2) + 1)
uint64_t i

do
    *arg2 = __addps_xmmps_memps(_mm_mul_ps(*(r9_1 + arg2), temp0), *arg2)
    arg2 = &arg2[1]
    i = i_1
    i_1 -= 1
while (i != 1)
