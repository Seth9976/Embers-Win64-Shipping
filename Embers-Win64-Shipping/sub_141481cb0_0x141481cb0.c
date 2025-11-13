// 函数: sub_141481cb0
// 地址: 0x141481cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm9 = arg1

if (not(zmm9.d f<= float.s(zx.q(arg2))))
    return 0x3f800000

arg1.d = float.s(zx.q(arg3))

if (zmm9.d f<= arg1.d)
    return zx.o(0)

zmm9.d = zmm9.d f- arg1.d
int128_t zmm10 = *(data_143ed9ba0 + 4)
float _Y = zmm10.d

if (arg3 u>= arg2)
    return 1f - powf(zmm9.d, _Y)

arg1.d = float.s(zx.q(arg2 - arg3))
int128_t zmm6
zmm6.d = 1f f/ arg1.d
int128_t zmm7 = powf(zmm6.d, _Y)
zmm9.d = zmm9.d f* zmm6.d
int128_t zmm8
zmm8.d = 1f f- zmm7.d
return (powf(zmm9.d, zmm10.d) f- zmm7.d) f/ zmm8.d
