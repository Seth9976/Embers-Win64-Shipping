// 函数: sub_140dd3500
// 地址: 0x140dd3500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *arg4
float zmm5 = arg4[1]
*arg1 = *arg6
arg1[1] = arg6[1]
arg1[2] = arg6[2]
arg1[3] = arg6[3]
int128_t zmm6 = *(arg3 + 4)
float zmm1 = zmm6.d f* arg2[2]
float zmm2 = zmm6.d f* arg2[3]
uint128_t zmm7 = *arg3
uint128_t zmm0
zmm0.d = zmm7.d f* *arg2
zmm6.d = zmm6.d f/ zmm5
zmm1 = zmm1 f+ zmm0.d
zmm0.d = zmm7.d f* arg2[1]
zmm7.d = zmm7.d f/ zmm4
zmm1 = zmm1 f+ arg2[4]
arg1[4] = zmm7.d
arg1[5] = zmm6.d
zmm2 = zmm2 f+ zmm0.d f+ arg2[5]
int32_t rax_4 = int.d(zmm1 + zmm1 + 0.5f)
zmm1 = zmm4 * arg5
arg1[6] = _mm_cvtepi32_ps(zx.o(rax_4 s>> 1)).d
arg1[7] = _mm_cvtepi32_ps(zx.o(int.d(zmm2 + zmm2 + 0.5f) s>> 1)).d
int32_t rax_9 = int.d(zmm1 + zmm1 + 0.5f)
arg1[8] = *arg7
zmm1 = zmm5 * arg5
arg1[9].w = (rax_9 s>> 1).w
*(arg1 + 0x26) = (int.d(zmm1 + zmm1 + 0.5f) s>> 1).w
return arg1
