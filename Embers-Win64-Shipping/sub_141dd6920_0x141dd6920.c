// 函数: sub_141dd6920
// 地址: 0x141dd6920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx != 0)
    float zmm3[0x4] = *(rcx + 0x1d0)
    float zmm0[0x4] = *arg2
    int128_t zmm1 = *(arg2 + 4)
    zmm0[0] = zmm0[0] - zmm3[0]
    float zmm2 = *(arg2 + 8)
    float var_a8 = zmm0[0]
    float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    zmm1.d = zmm1.d f- temp0[0]
    int32_t var_a4 = zmm1.d
    float var_a0 = zmm2 - temp0_1[0]
    return sub_141f42080(rcx, &var_a8, arg3, arg4, arg5, 0, arg6)

if (arg5 != 0)
    int128_t var_98
    memset(&var_98, 0, 0x88)
    int32_t var_90_1 = 0x3f800000
    *arg5 = var_98
    int128_t var_88
    arg5[1] = var_88
    int128_t var_78
    arg5[2] = var_78
    int128_t var_68
    arg5[3] = var_68
    int128_t var_58
    arg5[4] = var_58
    int128_t var_48
    arg5[5] = var_48
    int128_t var_38
    arg5[6] = var_38
    int128_t var_28
    arg5[7] = var_28
    int64_t var_18
    arg5[8].q = var_18

int64_t result
result.b = 0
return result
