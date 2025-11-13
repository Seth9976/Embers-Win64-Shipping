// 函数: sub_142052540
// 地址: 0x142052540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *arg2
float zmm5 = arg2[1]
int128_t zmm11 = *arg1
float zmm3 = zmm4 f+ zmm11.d
int128_t zmm12 = *(arg1 + 8)
zmm11.d = zmm11.d f- zmm4
float zmm0 = arg2[2] f+ zmm12.d
int128_t zmm13 = *(arg1 + 4)
zmm12.d = zmm12.d f- arg2[2]
float zmm1 = zmm5 f+ zmm13.d
zmm3 = zmm3 * 0.5f
zmm13.d = zmm13.d f- zmm5
zmm11.d = zmm11.d f* zmm11.d
float zmm2 = *arg4 - zmm3
zmm0 = zmm0 * 0.5f
int128_t zmm8
zmm8.d = (*arg3).d f- zmm3
zmm1 = zmm1 * 0.5f
int128_t zmm6
zmm6.d = (*(arg3 + 8)).d f- zmm0
int128_t zmm9
zmm9.d = (*(arg3 + 4)).d f- zmm1
zmm13.d = zmm13.d f* zmm13.d
zmm3 = arg4[1] f- zmm1
zmm8.d = zmm8.d f* zmm8.d
zmm13.d = zmm13.d f+ zmm11.d
zmm1 = arg4[2] f- zmm0
zmm9.d = zmm9.d f* zmm9.d
zmm9.d = zmm9.d f+ zmm8.d
zmm6.d = zmm6.d f* zmm6.d
zmm9.d = zmm9.d f+ zmm6.d
zmm12.d = zmm12.d f* zmm12.d
zmm13.d = zmm13.d f+ zmm12.d
float temp0 = _mm_sqrt_ss(0, zmm9.d)
int64_t result
result.b = arg5 > _mm_max_ss(_mm_sqrt_ss(0, zmm3 * zmm3 + zmm2 * zmm2 + zmm1 * zmm1), temp0)
    + _mm_sqrt_ss(0, zmm13.d) * 0.5f
return result
