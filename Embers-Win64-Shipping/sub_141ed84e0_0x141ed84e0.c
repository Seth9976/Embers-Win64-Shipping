// 函数: sub_141ed84e0
// 地址: 0x141ed84e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 f<= 0f)
    int32_t rax_3 = arg5[1].d
    *arg2 = *arg5
    arg2[1].d = rax_3
    return arg2

float zmm2[0x4] = 0x3f800000
zmm2[0] = 1f f/ arg4
int64_t zmm1 = zmm2[0].q
zmm2[0] = zmm2[0] f* *arg3
zmm1.d = zmm1.d f* arg3[1]
zmm2[0] = zmm2[0] f* arg3[2]
*arg2 = (_mm_unpacklo_ps(zmm2, zmm1)).q
arg2[1].d = zmm2[0]
return arg2
