// 函数: sub_1419ed880
// 地址: 0x1419ed880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = arg1[9]
int128_t zmm3 = arg1[8]
float zmm5 = arg1[0xa]
int128_t zmm8 = arg1[4]
int128_t zmm9 = arg1[5]
int128_t zmm10 = arg1[6]
int128_t zmm12 = *arg1
int128_t zmm13 = arg1[1]
int128_t zmm14 = arg1[2]
int128_t zmm15
zmm15.d = zmm12.d f* zmm12.d
int128_t zmm7
zmm7.d = zmm8.d f* zmm8.d
zmm15.d = zmm15.d f+ zmm13.d f* zmm13.d
int128_t zmm6
zmm6.d = zmm3.d f* zmm3.d
zmm15.d = zmm15.d f+ zmm14.d f* zmm14.d
zmm7.d = zmm7.d f+ zmm9.d f* zmm9.d
zmm7.d = zmm7.d f+ zmm10.d f* zmm10.d
zmm6.d = zmm6.d f+ zmm4 * zmm4
zmm6.d = zmm6.d f+ zmm5 * zmm5
float zmm1

if (zmm15.d f<= arg3.d)
    *arg2 = 0f
else
    float temp0_1 = _mm_sqrt_ss((zx.o(0)).d, zmm15.d)
    zmm1 = 1f / temp0_1
    *arg2 = temp0_1
    zmm12.d = zmm12.d f* zmm1
    zmm13.d = zmm13.d f* zmm1
    zmm14.d = zmm14.d f* zmm1
    *arg1 = zmm12.d
    arg1[1] = zmm13.d
    arg1[2] = zmm14.d

if (zmm7.d f<= arg3.d)
    arg2[1] = 0
else
    float temp0_2 = _mm_sqrt_ss((zx.o(0)).d, zmm7.d)
    zmm1 = 1f / temp0_2
    arg2[1] = temp0_2
    zmm8.d = zmm8.d f* zmm1
    zmm9.d = zmm9.d f* zmm1
    zmm10.d = zmm10.d f* zmm1
    arg1[4] = zmm8.d
    arg1[5] = zmm9.d
    arg1[6] = zmm10.d

if (zmm6.d f<= arg3.d)
    arg2[2] = 0
else
    float temp0_3 = _mm_sqrt_ss(0, zmm6.d)
    arg3.d = 1f / temp0_3
    arg2[2] = temp0_3
    zmm3.d = zmm3.d f* arg3.d
    arg1[8] = zmm3.d
    arg1[9] = zmm4 f* arg3.d
    arg1[0xa] = zmm5 f* arg3.d

return arg2
