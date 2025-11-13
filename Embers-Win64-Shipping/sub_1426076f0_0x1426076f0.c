// 函数: sub_1426076f0
// 地址: 0x1426076f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *arg2
float zmm0 = arg2[2]
float zmm5 = *arg4 - zmm1
int128_t zmm2
zmm2.d = arg4[2].d f- zmm0
int128_t zmm3
zmm3.d = (*(arg3 + 8)).d f- zmm0
float zmm4 = *arg1 - zmm1
int128_t zmm7
zmm7.d = (*arg3).d f- zmm1
int128_t zmm10
zmm10.d = arg4[1].d f- arg2[1]
int128_t zmm11
zmm11.d = arg1[2].d f- zmm0
int128_t zmm8
zmm8.d = zmm3.d f* zmm2.d
int128_t zmm12
zmm12.d = (*(arg3 + 4)).d f- arg2[1]
int128_t zmm6
zmm6.d = zmm11.d f* zmm2.d
zmm11.d = zmm11.d f* zmm3.d
int128_t zmm9
zmm9.d = zmm2.d f* zmm2.d
zmm9.d = zmm9.d f+ zmm5 * zmm5
zmm8.d = zmm8.d f+ zmm7.d * zmm5
zmm6.d = zmm6.d f+ zmm4 * zmm5
zmm11.d = zmm11.d f+ zmm4 f* zmm7.d
zmm5 = zmm3.d f* zmm3.d + zmm7.d f* zmm7.d
zmm1 = zmm5
zmm5 = zmm5 f* zmm6.d
zmm6.d = zmm6.d f* zmm8.d
zmm0 = zmm11.d f* zmm8.d
zmm11.d = zmm11.d f* zmm9.d
zmm2.d = 1f / (zmm1 f* zmm9.d - zmm8.d f* zmm8.d)
zmm11.d = zmm11.d f- zmm6.d
zmm5 = (zmm5 - zmm0) f* zmm2.d
zmm11.d = zmm11.d f* zmm2.d
int32_t* result

if (zmm5 < -9.99999975e-05f || zmm11.d f< -9.99999975e-05f || zmm11.d + zmm5 > 1.00010002f)
    result.b = 0
else
    zmm10.d = zmm10.d f* zmm5
    zmm12.d = zmm12.d f* zmm11.d
    zmm10.d = zmm10.d f+ arg2[1]
    zmm10.d = zmm10.d f+ zmm12.d
    *arg5 = zmm10.d
    result.b = 1

return result
