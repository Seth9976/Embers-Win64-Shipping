// 函数: sub_140dd3620
// 地址: 0x140dd3620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *arg4
float zmm5 = arg4[1]
int128_t zmm6 = *(arg3 + 4)
float zmm1 = zmm6.d * arg2[3]
*arg1 = *arg6
float zmm2 = zmm6.d * arg2[2]
arg1[1] = arg6[1]
arg1[2] = arg6[2]
arg1[3] = arg6[3]
int128_t zmm7 = *arg3
zmm6.d = zmm6.d f/ zmm5
zmm2 = zmm2 + zmm7.d * *arg2
float zmm0 = zmm7.d * arg2[1]
zmm7.d = zmm7.d f/ zmm4
zmm2 = zmm2 + arg2[4]
arg1[4] = zmm7.d
arg1[5] = zmm6.d
arg1[6] = zmm2
arg1[7] = zmm1 + zmm0 + arg2[5]
zmm1 = zmm4 * arg5
arg1[8] = *arg7
int32_t rax_5 = int.d(zmm1 + zmm1 + 0.5f)
zmm1 = zmm5 * arg5
arg1[9].w = (rax_5 s>> 1).w
*(arg1 + 0x26) = (int.d(zmm1 + zmm1 + 0.5f) s>> 1).w
return arg1
