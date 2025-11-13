// 函数: sub_140da9b20
// 地址: 0x140da9b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm11 = data_143dbb1f0:4.d
uint128_t zmm12 = data_143dbb1f0.d
int32_t var_d8
int32_t var_d4
int64_t var_d0
int32_t* rbx

if (zmm12.d f!= 0f || zmm11.d f!= 0f)
    rbx = arg1 + 0x40
else
    rbx = arg1 + 0x40
    var_d0 = 0
    int64_t var_c8_1 = 0
    int128_t var_98
    __builtin_memset(&var_98, 0, 0x20)
    sub_140d96000(&var_d8, rbx)
    zmm12 = _mm_cvtepi32_ps(zx.o(var_d8))
    zmm11 = _mm_cvtepi32_ps(zx.o(var_d4))
    sub_140d72800(&var_d0)

var_d0 = 0
int128_t var_98_1
__builtin_memset(&var_98_1, 0, 0x20)
int64_t var_c8_2 = 0
sub_140d96000(&var_d8, rbx)
int128_t zmm7 = var_98_1.d
int128_t zmm8
zmm8.d = 2f f/ _mm_cvtepi32_ps(zx.o(var_d8)).d
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(var_d4))
int128_t zmm6
zmm6.d = zmm8.d f* var_98_1:8.d
int128_t zmm10
zmm10.d = 2f f/ zmm0.d
int128_t zmm9 = zmm10
zmm10.d = zmm10.d f* var_98_1:0xc.d
zmm9.d = zmm9.d f* var_98_1:4.d
int64_t result = sub_140d72800(&var_d0)
zmm8.d = zmm8.d f* zmm7.d
zmm6.d = zmm6.d f* zmm12.d
zmm8.d = zmm8.d f* zmm12.d
zmm9.d = zmm9.d f* zmm11.d
zmm10.d = zmm10.d f* zmm11.d
zmm8.d = zmm8.d f* 0.5f
zmm6.d = zmm6.d f* 0.5f
zmm9.d = zmm9.d f* 0.5f
zmm10.d = zmm10.d f* 0.5f
*arg2 = zmm8.d
arg2[2] = zmm6.d
arg2[1] = zmm9.d
arg2[3] = zmm10.d
return result
