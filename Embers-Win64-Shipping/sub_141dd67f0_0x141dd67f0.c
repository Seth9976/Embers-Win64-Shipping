// 函数: sub_141dd67f0
// 地址: 0x141dd67f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx != 0)
    float zmm3[0x4] = *(rcx + 0x1d0)
    float zmm0[0x4] = *arg2
    int128_t zmm1 = *(arg2 + 4)
    zmm0[0] = zmm0[0] - zmm3[0]
    float zmm2 = *(arg2 + 8)
    float var_b8 = zmm0[0]
    zmm1.d = zmm1.d f- _mm_shuffle_ps(zmm3, zmm3, 0x55)[0]
    int32_t var_b4 = zmm1.d
    float var_b0 = zmm2 - _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
    float var_a8[0x4] = *(rcx + 0x1c0)
    return (*(*rcx + 0x470))(rcx, &var_b8, &var_a8, zx.q(arg3), arg4, 0, arg5)

if (arg4 != 0)
    int128_t var_98
    memset(&var_98, 0, 0x88)
    int32_t var_90_1 = 0x3f800000
    *arg4 = var_98
    int128_t var_88
    arg4[1] = var_88
    int128_t var_78
    arg4[2] = var_78
    int128_t var_68
    arg4[3] = var_68
    int128_t var_58
    arg4[4] = var_58
    int128_t var_48
    arg4[5] = var_48
    int128_t var_38
    arg4[6] = var_38
    int128_t var_28
    arg4[7] = var_28
    int64_t var_18
    arg4[8].q = var_18

int64_t result
result.b = 0
return result
