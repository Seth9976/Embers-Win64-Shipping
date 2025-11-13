// 函数: sub_1408a58b0
// 地址: 0x1408a58b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4]
uint128_t zmm7_1
uint128_t zmm8_1
int128_t zmm10
int128_t zmm12
zmm0, zmm7_1, zmm8_1, zmm10, zmm12 = sub_1408a4110(arg1, *arg1, arg2, arg3)
uint32_t result[0x4] = 0x3f800000
int64_t rsi = sx.q(*(arg1 + 0x410))
result[0] = 1f f- _mm_and_ps(zmm0, 0x7fffffff)[0]

if (rsi s> 1)
    char* rdi_1 = 1
    int128_t var_58_1 = zmm10
    zmm10 = *(arg1 + 0x414)
    int128_t var_78_1 = zmm12
    *(arg1 + 0x418)
    
    do
        zmm8_1.d = zmm8_1.d f* zmm10.d
        zmm7_1.d = zmm7_1.d f* zmm10.d
        float zmm9
        int32_t zmm11_1
        uint32_t zmm13_1[0x4]
        zmm0, result, zmm7_1, zmm8_1, zmm9, zmm10, zmm11_1, zmm12, zmm13_1 =
            sub_1408a4110(arg1, *(rdi_1 + arg1), zmm8_1, zmm7_1)
        uint32_t temp0_1[0x4] = _mm_and_ps(zmm0, zmm13_1)
        rdi_1 = &rdi_1[1]
        temp0_1[0] = temp0_1[0] f- zmm11_1
        temp0_1[0] = temp0_1[0] f* zmm9
        result[0] = result[0] f+ temp0_1[0]
    while (rdi_1 s< rsi)

return result
