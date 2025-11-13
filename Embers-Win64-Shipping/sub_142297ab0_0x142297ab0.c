// 函数: sub_142297ab0
// 地址: 0x142297ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = zx.o(0)
float zmm6[0x4] = arg5
int128_t zmm9
zmm9.d = arg6.d f- zmm6[0]
zmm0[0] = float.s(arg8)
zmm6[0] = zmm6[0] * 0.0174532924f
zmm9.d = zmm9.d f/ zmm0[0]
int64_t result
float zmm0_1[0x4]
float zmm6_1
float zmm9_1
float zmm10
result, zmm0_1, zmm6_1, zmm9_1, zmm10 = __libm_sse2_sincosf_(zmm6)
int32_t zmm11 = *arg4
float zmm14 = *arg3
int32_t zmm12 = arg4[1]
float zmm8 = zmm9_1 + zmm6_1
int32_t zmm13 = arg4[2]
float zmm15 = arg3[1]
float temp0[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
zmm0_1[0] = zmm0_1[0] f* zmm11
float zmm1_1 = temp0[0] * zmm14 + zmm0_1[0]
zmm0_1[0] = zmm0_1[0] f* zmm12
zmm0_1[0] = zmm0_1[0] f* zmm13
float var_c8 = zmm1_1 * arg7 + *arg2
zmm1_1 = temp0[0]
temp0[0] = temp0[0] f* arg3[2]
temp0[0] = temp0[0] + zmm0_1[0]
zmm1_1 = zmm1_1 * zmm15 + zmm0_1[0]
temp0[0] = temp0[0] * arg7
temp0[0] = temp0[0] + arg2[2]
float var_c0 = temp0[0]
float var_c4 = zmm1_1 * arg7 + arg2[1]

if (arg8 s> 0)
    uint64_t i_1 = zx.q(arg8)
    uint64_t i
    
    do
        zmm0_1 = zx.o(0)
        zmm0_1[0] = zmm8 * zmm10
        int32_t zmm6_2
        float zmm7_1
        float zmm9_2
        float zmm11_1
        int32_t zmm12_1
        float zmm13_1
        float zmm14_1
        float zmm15_1
        zmm0_1, zmm6_2, zmm7_1, zmm8, zmm9_2, zmm10, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
            __libm_sse2_sincosf_(zmm0_1)
        int64_t rax = *arg1
        zmm1_1 = zmm0_1[0] * zmm11_1
        float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
        float zmm3_1 = zmm0_1[0]
        float zmm2_1 = temp0_1[0]
        zmm0_1[0] = zmm0_1[0] f* zmm12_1
        zmm2_1 = zmm2_1 * zmm14_1 + zmm1_1
        zmm1_1 = temp0_1[0]
        temp0_1[0] = temp0_1[0] f* arg3[2]
        temp0_1[0] = temp0_1[0] + zmm3_1 * zmm13_1
        zmm1_1 = zmm1_1 * zmm15_1 + zmm0_1[0]
        zmm2_1 = zmm2_1 * zmm7_1 + *arg2
        temp0_1[0] = temp0_1[0] * zmm7_1
        temp0_1[0] = temp0_1[0] + arg2[2]
        float var_d8 = zmm2_1
        zmm1_1 = zmm1_1 * zmm7_1 + arg2[1]
        float var_d0_1 = temp0_1[0]
        result = (*(rax + 0x30))(arg1, &var_c8, &var_d8, arg9, arg10, zmm6_2, zmm6_2, 0, var_d8, 
            var_d0_1)
        zmm8 = zmm8 + zmm9_2
        var_c8 = var_d8[0]
        float var_c0_1 = var_d0_1[0]
        float var_c4_1 = zmm1_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
