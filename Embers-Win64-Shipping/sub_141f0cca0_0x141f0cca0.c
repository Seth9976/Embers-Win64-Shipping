// 函数: sub_141f0cca0
// 地址: 0x141f0cca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm9 = arg4
int64_t zmm0
int64_t zmm2
int128_t zmm6
int128_t zmm7
int128_t zmm8

if ((arg1[0x1d].b & 0x10) != 0)
    zmm0 = *arg5
    int32_t var_50_1 = arg5[1].d
    int64_t rax_2 = *arg1
    int64_t var_58 = zmm0
    int32_t var_68
    (*(rax_2 + 0x4f0))(zmm0, &var_68, &var_58)
    int64_t zmm4_1 = *arg3
    zmm7 = arg3[1]
    zmm2 = var_68
    zmm8 = arg3[2]
    int32_t var_60
    arg4 = var_60
    float var_64
    zmm6.d = zmm7.d f* var_64
    zmm0.d = zmm4_1.d f* zmm2.d
    zmm6.d = zmm6.d f+ zmm0.d
    zmm6.d = zmm6.d f+ zmm8.d f* arg4.d
    zmm2.d = zmm2.d f* zmm6.d
    arg4.d = arg4.d f* zmm6.d
    zmm4_1.d = zmm4_1.d f- zmm2.d
    zmm7.d = zmm7.d f- var_64 f* zmm6.d
    zmm8.d = zmm8.d f- arg4.d
    zmm4_1.d = zmm4_1.d f* zmm9.d
    zmm7.d = zmm7.d f* zmm9.d
    zmm8.d = zmm8.d f* zmm9.d
    *arg2 = zmm4_1.d
    arg2[1] = zmm7.d
    arg2[2] = zmm8.d
else
    zmm7 = arg3[1]
    zmm2 = *arg5
    float zmm5 = *(arg5 + 4)
    float zmm4 = *arg3
    zmm8 = arg3[2]
    zmm6 = arg5[1].d
    arg4.d = zmm7.d f* zmm5
    zmm0.d = zmm2.d f* zmm4
    arg4.d = arg4.d f+ zmm0.d
    arg4.d = arg4.d f+ zmm8.d f* zmm6.d
    zmm2.d = zmm2.d f* arg4.d
    zmm6.d = zmm6.d f* arg4.d
    zmm7.d = zmm7.d f- zmm5 f* arg4.d
    zmm8.d = zmm8.d f- zmm6.d
    zmm7.d = zmm7.d f* zmm9.d
    zmm8.d = zmm8.d f* zmm9.d
    *arg2 = (zmm4 f- zmm2.d) f* zmm9.d
    arg2[1] = zmm7.d
    arg2[2] = zmm8.d
return arg2
