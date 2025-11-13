// 函数: sub_1406c0510
// 地址: 0x1406c0510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[4].d
int128_t zmm0 = sub_1406bc060(arg1)
int64_t result = av_gettime_relative()
*arg1 = zmm0.q
arg1[3] = arg2.q
arg1[4].d = rbx
int64_t zmm2 = float.d(result) f* 9.9999999999999995e-07
int128_t zmm6
zmm6.q = zmm0.q f- zmm2
arg1[2] = zmm2
arg1[1] = zmm6.q
return result
