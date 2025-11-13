// 函数: sub_141e7e4a0
// 地址: 0x141e7e4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6

if (sub_140a80ea0() == 0)
    zmm6 = *(arg1 + 0xa0)
else
    zmm6 = *(arg1 + 0x9c)

zmm6.d = zmm6.d f* data_143a2d474
int32_t rcx

if (sub_140a80ea0() == 0)
    rcx = *(arg1 + 0x98)
else
    rcx = *(arg1 + 0x94)

int32_t rax_2 = data_143f39bdc

if (rax_2 s> 0)
    rcx = rax_2

uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rcx)).d f* zmm6.d
int32_t rcx_1 = int.d(zmm0.d)

if (rcx_1 s< 1)
    return 1

int32_t rax_4 = *(arg1 + 0x90)

if (rcx_1 s< rax_4)
    return rcx_1

return rax_4
