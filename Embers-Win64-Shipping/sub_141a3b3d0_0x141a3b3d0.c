// 函数: sub_141a3b3d0
// 地址: 0x141a3b3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg4.d = arg4.d f- arg3.d
int128_t zmm9 = arg5
int128_t zmm8 = arg2
int128_t zmm6
zmm6.d = arg3.d f- zmm8.d
int128_t zmm10 = arg1
int128_t zmm4
zmm4.d = arg2.d f- zmm10.d
arg4.d = arg4.d f* zmm9.d
int128_t zmm5
zmm5.d = zmm6.d f* zmm9.d
arg4.d = arg4.d f+ arg3.d
zmm5.d = zmm5.d f+ zmm8.d
arg2.d = zmm4.d f* zmm9.d
arg2.d = arg2.d f+ zmm10.d
arg4.d = arg4.d f- zmm5.d
arg3.d = zmm5.d f- arg2.d
arg4.d = arg4.d f+ zmm6.d
arg3.d = arg3.d f+ zmm4.d
arg4.d = arg4.d f* zmm9.d
arg4.d = arg4.d f+ zmm8.d
arg1.d = arg3.d f* zmm9.d
arg1.d = arg1.d f+ zmm10.d
arg4.d = arg4.d f- arg1.d
arg4.d = arg4.d f+ arg3.d
arg4.d = arg4.d f* zmm9.d
arg4.d = arg4.d f+ zmm10.d
return arg4
