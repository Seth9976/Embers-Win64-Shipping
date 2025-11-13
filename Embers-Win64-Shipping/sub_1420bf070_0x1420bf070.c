// 函数: sub_1420bf070
// 地址: 0x1420bf070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm4
zmm4.d = arg3.d f+ arg3.d
int128_t result = arg2
int128_t zmm8 = arg1

if (arg3.d f>= 0.5f)
    zmm4.d = zmm4.d f- 1f
    arg1.d = 1f f- zmm4.d
    arg2.d = 1f f- powf(arg1.d, arg4.d).d
    arg2.d = arg2.d f+ 1f
else
    arg2 = powf(zmm4.d, arg4.d)

arg2.d = arg2.d f* 0.5f
result.d = result.d f- zmm8.d
result.d = result.d f* arg2.d
result.d = result.d f+ zmm8.d
return result
