// 函数: sub_142b54500
// 地址: 0x142b54500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = sub_142b54440(arg1)
int128_t zmm9 = sin(zmm0.q)
int128_t zmm10 = cos(zmm0.q)
int128_t zmm0_3 = sin(arg3.q)
int128_t zmm6
zmm6.q = zmm0_3.q f* zmm10.q
zmm6.q = zmm6.q f- tan(arg4.q) f* zmm9.q
*arg2 = atan2(zmm6.q, cos(arg3.q))
zmm6.q = cos(arg4.q).q f* zmm9.q
zmm6.q = zmm6.q f* zmm0_3.q
zmm6.q = zmm6.q f+ sin(arg4.q) f* zmm10.q
arg2[1] = asin(zmm6.q)
return arg2
