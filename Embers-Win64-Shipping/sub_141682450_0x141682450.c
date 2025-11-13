// 函数: sub_141682450
// 地址: 0x141682450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg2
int128_t* rax = sub_141746340(&arg_8)
int128_t* rax_1 = sub_141749180(&arg_8)
float zmm3[0x4] = *rax
float temp0[0x4] = _mm_unpacklo_ps(*(rax + 4), 0)
*arg1 = *rax_1
float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, (*(rax + 8)).q)
int128_t zmm0 = data_14399f670
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float zmm2[0x4] = data_14399f66c
arg1[1] = temp0_2
arg1[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), _mm_unpacklo_ps(zmm2, 0)[0].q)
return arg1
