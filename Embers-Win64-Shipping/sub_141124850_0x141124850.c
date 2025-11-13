// 函数: sub_141124850
// 地址: 0x141124850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439b5c4c == 0 || data_1439b5c2c == 0)
    *arg1 = 0.0
    return arg1

int64_t rax = sx.q(arg2)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(data_1439b5c50))
float zmm0 = zmm1.d
zmm1.d = zmm1.d f* *((rax << 3) + 0x1439b5db4)
zmm0 = zmm0 f* *(&data_1439b5db0 + (rax << 3))
arg1[1] = zmm1.d
*arg1 = zmm0
return arg1
