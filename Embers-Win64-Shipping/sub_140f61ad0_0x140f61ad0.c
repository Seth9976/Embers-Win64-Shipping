// 函数: sub_140f61ad0
// 地址: 0x140f61ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8 = arg2
int128_t zmm6

if (arg1 f> zmm8.d)
    zmm6.d = 1f f- zmm8.d
    int128_t zmm7
    zmm7.d = 1f - powf(1f - (arg1 f- zmm8.d) f/ zmm6.d, arg3.d)
    zmm7.d = zmm7.d f* zmm6.d
    zmm7.d = zmm7.d f+ zmm8.d
    return zmm7.d

arg2.d = arg2.d f- arg1
arg2.d = arg2.d f/ zmm8.d
zmm6.d = 1f - powf(1f f- arg2.d, arg3.d)
zmm6.d = zmm6.d f* zmm8.d
zmm8.d = zmm8.d f- zmm6.d
return zmm8.d
