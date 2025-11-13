// 函数: sub_1408a53b0
// 地址: 0x1408a53b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4]
uint128_t zmm7_1
uint128_t zmm8_1
int128_t zmm10
int128_t zmm12
int32_t zmm13
zmm0, zmm7_1, zmm8_1, zmm10, zmm12, zmm13 = sub_1408a4110(arg1, *arg1, arg2, arg3)
int64_t rsi = sx.q(*(arg1 + 0x410))
uint32_t result[0x4] = _mm_and_ps(zmm0, 0x7fffffff)
result[0] = result[0] f+ result[0]
result[0] = result[0] f- 1f

if (rsi s> 1)
    char* rdi_1 = 1
    int128_t var_58_1 = zmm10
    zmm10 = *(arg1 + 0x414)
    int128_t var_78_1 = zmm12
    *(arg1 + 0x418)
    int32_t var_88_1 = zmm13
    
    do
        zmm8_1.d = zmm8_1.d f* zmm10.d
        zmm7_1.d = zmm7_1.d f* zmm10.d
        float zmm9
        int32_t zmm11_1
        int32_t zmm13_1
        uint32_t zmm14_1[0x4]
        zmm0, result, zmm7_1, zmm8_1, zmm9, zmm10, zmm11_1, zmm12, zmm13_1, zmm14_1 =
            sub_1408a4110(arg1, *(rdi_1 + arg1), zmm8_1, zmm7_1)
        uint32_t temp0_1[0x4] = _mm_and_ps(zmm0, zmm14_1)
        rdi_1 = &rdi_1[1]
        temp0_1[0] = temp0_1[0] f* zmm13_1
        temp0_1[0] = temp0_1[0] f- zmm11_1
        temp0_1[0] = temp0_1[0] f* zmm9
        result[0] = result[0] f+ temp0_1[0]
    while (rdi_1 s< rsi)

result[0] = result[0] f* *(arg1 + 0x420)
return result
