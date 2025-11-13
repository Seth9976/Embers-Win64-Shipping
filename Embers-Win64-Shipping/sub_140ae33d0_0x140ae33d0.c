// 函数: sub_140ae33d0
// 地址: 0x140ae33d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg4 = arg4 * arg5
int128_t zmm7 = *arg2
float zmm4 = *arg3 f- zmm7.d
int128_t zmm8 = *(arg2 + 4)
int64_t zmm5
zmm5.d = arg3[1].d f- zmm8.d
int128_t zmm9 = *(arg2 + 8)
int128_t zmm6
zmm6.d = arg3[2].d f- zmm9.d
int64_t zmm0
zmm0.d = zmm5.d f* zmm5.d
float temp0 = _mm_sqrt_ss(0, zmm4 * zmm4 f+ zmm0.d + zmm6.d f* zmm6.d)
int32_t rax_1

if (temp0 <= arg4)
    rax_1 = arg3[2]
    *arg1 = *arg3
    arg1[2] = rax_1
else if (arg4 <= 0f)
    rax_1 = *(arg2 + 8)
    *arg1 = *arg2
    arg1[2] = rax_1
else
    zmm0.d = 1f / temp0
    zmm5.d = zmm5.d f* zmm0.d
    zmm6.d = zmm6.d f* zmm0.d
    zmm5.d = zmm5.d f* arg4
    zmm6.d = zmm6.d f* arg4
    zmm5.d = zmm5.d f+ zmm8.d
    zmm6.d = zmm6.d f+ zmm9.d
    *arg1 = zmm4 f* zmm0.d * arg4 f+ zmm7.d
    arg1[1] = zmm5.d
    arg1[2] = zmm6.d
return arg1
