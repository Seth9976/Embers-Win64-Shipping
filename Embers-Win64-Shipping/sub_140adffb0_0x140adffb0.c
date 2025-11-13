// 函数: sub_140adffb0
// 地址: 0x140adffb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *arg4 - *arg3
float zmm4 = arg4[1] f- arg3[1]
float zmm3 = *arg1 - *arg3
int128_t zmm6 = arg1[1]
int128_t zmm7
zmm7.d = (*arg2).d f- *arg1
int128_t zmm8
zmm8.d = (*(arg2 + 4)).d f- zmm6.d
zmm6.d = zmm6.d f- arg3[1]
int128_t zmm9
zmm9.d = (*(arg2 + 8)).d f- arg1[2]
float zmm2 = 1f / (zmm4 f* zmm7.d - zmm5 f* zmm8.d)
float zmm1 = zmm6.d
zmm6.d = zmm6.d f* zmm5
zmm6.d = zmm6.d f- zmm3 * zmm4
zmm6.d = zmm6.d f* zmm2
zmm1 = (zmm1 f* zmm7.d - zmm3 f* zmm8.d) * zmm2
int64_t result

if (zmm1 < 0f || zmm1 > 1f || zmm6.d f< 0f || zmm6.d f> 1f)
    result.b = 0
else
    zmm7.d = zmm7.d f* zmm6.d
    result.b = 1
    zmm8.d = zmm8.d f* zmm6.d
    zmm7.d = zmm7.d f+ *arg1
    zmm9.d = zmm9.d f* zmm6.d
    *arg5 = zmm7.d
    zmm8.d = zmm8.d f+ arg1[1]
    arg5[1] = zmm8.d
    zmm9.d = zmm9.d f+ arg1[2]
    arg5[2] = zmm9.d

return result
