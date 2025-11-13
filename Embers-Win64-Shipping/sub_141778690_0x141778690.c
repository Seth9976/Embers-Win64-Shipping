// 函数: sub_141778690
// 地址: 0x141778690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg5 = _mm_unpacklo_ps(zx.o(0), 0)
int32_t var_c0 = 0
arg5[1].d = 0
*arg6 = 0
*arg7 = _mm_unpacklo_ps(zx.o(0), 0)
arg7[1].d = 0
*arg8 = 0
int128_t zmm6
zmm6.d = (*arg3).d f- *arg2
int128_t zmm7
zmm7.d = (*(arg3 + 4)).d f- arg2[1]
int128_t zmm8
zmm8.d = (*(arg3 + 8)).d f- arg2[2]
int32_t var_c0_1 = 0
float var_78[0x4][0x4]
float (* rax)[0x4]
float zmm6_1[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
rax, zmm6_1, zmm7_1, zmm8_1 = sub_140ad9d00(&var_78, arg1)
float var_a8[0x4] = rax[1]
float zmm1[0x4] = rax[3]
float var_b8[0x4] = *rax
float var_88[0x4] = zmm1
int64_t rax_2 = sx.q(arg4) * 2
float var_98[0x4] = rax[2]
float zmm0_1[0x4] = var_b8[2 + rax_2 * 2]
*arg5 = (_mm_unpacklo_ps(var_b8[rax_2 * 2], var_b8[1 + rax_2 * 2][0].q)).q
float result = zmm0_1[0]
arg5[1].d = result
zmm6_1[0] = zmm6_1[0] f* *arg5
zmm7_1[0] = zmm7_1[0] f* *(arg5 + 4)
zmm8_1[0] = zmm8_1[0] f* arg5[1].d
zmm6_1[0] = zmm6_1[0] + zmm7_1[0]
zmm6_1[0] = zmm6_1[0] + zmm8_1[0]
*arg6 = zmm6_1[0]
zmm6_1[0] = zmm6_1[0] f* *arg5
zmm6_1[0] = zmm6_1[0] f* arg5[1].d
zmm6_1[0] = zmm6_1[0] f* *(arg5 + 4)
zmm6_1[0] = zmm6_1[0] - zmm6_1[0]
zmm8_1[0] = zmm8_1[0] - zmm6_1[0]
zmm7_1[0] = zmm7_1[0] - zmm6_1[0]
zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
zmm7_1[0] = zmm7_1[0] + zmm6_1[0]
zmm7_1[0] = zmm7_1[0] + zmm8_1[0]
int32_t temp0_3 = _mm_sqrt_ss(0, zmm7_1[0])

if (not(temp0_3 f<= 9.99999975e-05f))
    zmm0_1 = 0x3f800000
    zmm0_1[0] = 1f f/ temp0_3
    zmm8_1[0] = zmm8_1[0] * zmm0_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm0_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm0_1[0]
    result = zmm8_1[0]
    *arg7 = (_mm_unpacklo_ps(zmm6_1, zmm7_1[0].q)).q
    arg7[1].d = result
    *arg8 = temp0_3

return result
