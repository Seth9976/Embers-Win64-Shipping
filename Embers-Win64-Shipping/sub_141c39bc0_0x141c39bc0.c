// 函数: sub_141c39bc0
// 地址: 0x141c39bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result_1[0x4] = zx.o(0)
uint32_t result[0x4]
uint32_t zmm1[0x4]

if (arg2 s> 0)
    zmm1 = data_143f348c0
    uint64_t i_1 = zx.q(((arg2 - 1) u>> 2) + 1)
    uint64_t i
    
    do
        result = *arg1
        arg1 = &arg1[1]
        result_1 = _mm_add_ps(result_1, _mm_and_ps(result, zmm1))
        i = i_1
        i_1 -= 1
    while (i != 1)

result = result_1
zmm1 = _mm_shuffle_ps(result_1, result_1, 0x55)
result[0] = result[0] f+ zmm1[0]
float temp0_4[0x4] = _mm_shuffle_ps(result_1, result_1, 0xaa)
float temp0_5[0x4] = _mm_shuffle_ps(result_1, result_1, 0xff)
zmm1 = _mm_cvtepi32_ps(zx.o(arg2))
result[0] = result[0] f+ temp0_4[0]
result[0] = result[0] f+ temp0_5[0]
result[0] = result[0] f/ zmm1[0]
return result
