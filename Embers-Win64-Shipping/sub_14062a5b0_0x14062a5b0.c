// 函数: sub_14062a5b0
// 地址: 0x14062a5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = *(arg6 + 4)
int128_t zmm4 = *arg6
float zmm3 = *(arg6 + 8)
int128_t zmm13 = *(arg4 + 4)
int128_t zmm11
zmm11.d = zmm4.d f* zmm4.d
int128_t zmm14 = *(arg4 + 8)
int128_t zmm15 = *arg4
int128_t zmm9
zmm9.d = zmm4.d f* zmm15.d
int128_t zmm10
zmm10.d = zmm15.d f* zmm15.d
arg6.d = zmm2
float arg_20 = zmm4.d
zmm10.d = zmm10.d f+ zmm13.d f* zmm13.d
float var_98 = zmm3
zmm10.d = zmm10.d f+ zmm14.d f* zmm14.d
zmm9.d = zmm9.d f+ zmm2 f* zmm13.d
zmm9.d = zmm9.d f+ zmm3 f* zmm14.d
zmm11.d = zmm11.d f+ zmm2 * zmm2
zmm11.d = zmm11.d f+ zmm3 * zmm3
int128_t zmm12
zmm12.d = zmm11.d f* zmm10.d
zmm12.d = zmm12.d f- zmm9.d f* zmm9.d
int128_t* result

if (zmm12.d f== 0f)
    result.b = 0
else
    int128_t zmm5 = arg3[1]
    int128_t zmm8
    zmm8.d = zmm5.d f- *(arg5 + 4)
    zmm2 = arg3[2] f- *(arg5 + 8)
    zmm3 = *arg3 f- *arg5
    zmm4 = zmm8
    zmm8.d = zmm8.d f* arg6.d
    zmm4.d = zmm4.d f* zmm13.d
    zmm8.d = zmm8.d f+ zmm3 * arg_20
    zmm4.d = zmm4.d f+ zmm3 f* zmm15.d
    zmm8.d = zmm8.d f+ zmm2 * var_98
    zmm4.d = zmm4.d f+ zmm2 f* zmm14.d
    float zmm1 = 1f f/ zmm12.d
    zmm2 = zmm8.d
    zmm8.d = zmm8.d f* zmm10.d
    float zmm0 = zmm4.d f* zmm11.d
    zmm4.d = zmm4.d f* zmm9.d
    zmm8.d = zmm8.d f- zmm4.d
    zmm2 = (zmm2 f* zmm9.d - zmm0) * zmm1
    zmm8.d = zmm8.d f* zmm1
    zmm15.d = zmm15.d f* zmm2
    zmm15.d = zmm15.d f+ *arg3
    zmm13.d = zmm13.d f* zmm2
    zmm14.d = zmm14.d f* zmm2
    zmm13.d = zmm13.d f+ zmm5.d
    zmm14.d = zmm14.d f+ arg3[2]
    *arg1 = zmm15.d
    arg1[1] = zmm13.d
    arg1[2] = zmm14.d
    zmm0 = arg6.d f* zmm8.d f+ *(arg5 + 4)
    zmm3 = var_98 f* zmm8.d f+ *(arg5 + 8)
    result.b = 1
    *arg2 = arg_20 f* zmm8.d f+ *arg5
    arg2[1] = zmm0
    arg2[2] = zmm3

return result
