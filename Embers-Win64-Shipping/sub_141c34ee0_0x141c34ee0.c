// 函数: sub_141c34ee0
// 地址: 0x141c34ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

float zmm5[0x4] = data_142ff88b0
uint32_t zmm4[0x4] = data_143f34880
uint64_t i_1 = zx.q(((arg2 - 1) u>> 2) + 1)
float zmm6[0x4] = data_143205590
uint64_t i

do
    float zmm2[0x4] = *arg1
    arg1 = &arg1[1]
    arg1[-1] = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zmm6, zmm2, 1), _mm_cmpeq_ps(zmm2, zmm5, 1)), 
        zmm4 ^ zmm2) ^ zmm2
    i = i_1
    i_1 -= 1
while (i != 1)
