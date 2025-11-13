// 函数: sub_1422995f0
// 地址: 0x1422995f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rbp = 0
uint128_t zmm6 = arg6
uint128_t zmm1
zmm1.d = zmm6.d f* arg3[1]
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg7))
zmm1.d = zmm1.d f+ arg2[1]
int128_t zmm7
zmm7.d = 3.14159274f f/ zmm0.d
int32_t var_74 = zmm1.d
zmm0.d = zmm6.d f* *arg3
zmm0.d = zmm0.d f+ *arg2
int32_t var_78 = zmm0.d
zmm0.d = zmm6.d f* arg3[2]
zmm0.d = zmm0.d f+ arg2[2]
int32_t var_70 = zmm0.d

if (arg7 s> 0)
    do
        rbp += 1
        zmm1.d = _mm_cvtepi32_ps(zx.o(rbp)).d f* zmm7.d
        float zmm6_1
        int32_t zmm8_1
        int32_t zmm9_1
        zmm0, zmm6_1, zmm7, zmm8_1, zmm9_1 = __libm_sse2_sincosf_(zmm1)
        int64_t rax = *arg1
        uint128_t zmm3_1 = _mm_shuffle_ps(zmm0, zmm0, 1)
        zmm1.d = zmm3_1.d f* *arg3
        float zmm4_1 = zmm0.d * arg4[2]
        float zmm2_1 = zmm0.d * *arg4 f+ zmm1.d
        zmm1.d = zmm0.d f* arg4[1]
        zmm0.d = zmm3_1.d f* arg3[1]
        zmm3_1.d = zmm3_1.d f* arg3[2]
        zmm1.d = zmm1.d f+ zmm0.d
        zmm1.d = zmm1.d f* zmm6_1
        zmm1.d = zmm1.d f+ arg2[1]
        float var_88 = zmm2_1 * zmm6_1 f+ *arg2
        zmm4_1 = (zmm4_1 f+ zmm3_1.d) * zmm6_1 f+ arg2[2]
        int32_t var_84_1 = zmm1.d
        result =
            (*(rax + 0x30))(arg1, &var_78, &var_88, arg5, 0, zmm9_1, zmm8_1, arg10, var_88, zmm4_1)
        var_78 = var_88.d
        int32_t var_70_1 = zmm4_1.d
        int32_t var_74_1 = var_84_1.d
    while (rbp s< arg7)

return result
