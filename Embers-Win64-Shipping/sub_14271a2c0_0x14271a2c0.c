// 函数: sub_14271a2c0
// 地址: 0x14271a2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float _X = *(arg2 + 0x50)
arg1[1] = _X * _X
_X = (zx.o(0)).d
float zmm1 = *(arg2 + 0x54)
arg1[3] = zmm1 * zmm1
float zmm2 = *(arg2 + 0x58) * 0.0174532924f

if (not(zmm2 < 0f))
    _X = __minss_xmmss_memss(zmm2, 0x40490fdb)

*arg1 = cosf(_X)
int32_t rdx = *(arg2 + 0x5c)
arg1[4].b = ((((rdx u>> 1).b & 1) | ((rdx.b & 1) * 2)) * 2) | ((rdx u>> 2).b & 1)
float zmm0 = *(arg2 + 0x60)

if (zmm0 != -1f)
    arg1[2] = zmm0 * zmm0
    return arg1

arg1[2] = 0xbf800000
return arg1
