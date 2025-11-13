// 函数: sub_1408a8860
// 地址: 0x1408a8860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4]
int128_t zmm7
float zmm8_1
uint128_t zmm9_1
uint128_t zmm10_1
int128_t zmm12
zmm0, zmm7, zmm8_1, zmm9_1, zmm10_1, zmm12 = sub_1408a7580(arg1, *arg1, arg2, arg3, arg4.d)
uint32_t result[0x4] = 0x3f800000
int64_t rsi = sx.q(*(arg1 + 0x410))
result[0] = 1f f- _mm_and_ps(zmm0, 0x7fffffff)[0]

if (rsi s> 1)
    char* rbx_1 = 1
    int128_t var_28_1 = zmm7
    zmm7 = *(arg1 + 0x414)
    int128_t var_78_1 = zmm12
    *(arg1 + 0x418)
    
    do
        zmm10_1.d = zmm10_1.d f* zmm7.d
        zmm9_1.d = zmm9_1.d f* zmm7.d
        float zmm11
        int32_t zmm13_1
        uint32_t zmm14_1[0x4]
        zmm0, result, zmm7, zmm8_1, zmm9_1, zmm10_1, zmm11, zmm12, zmm13_1, zmm14_1 =
            sub_1408a7580(arg1, *(rbx_1 + arg1), zmm10_1, zmm9_1, zmm8_1 f* zmm7.d)
        uint32_t temp0_1[0x4] = _mm_and_ps(zmm0, zmm14_1)
        rbx_1 = &rbx_1[1]
        temp0_1[0] = temp0_1[0] f- zmm13_1
        temp0_1[0] = temp0_1[0] f* zmm11
        result[0] = result[0] f+ temp0_1[0]
    while (rbx_1 s< rsi)

return result
