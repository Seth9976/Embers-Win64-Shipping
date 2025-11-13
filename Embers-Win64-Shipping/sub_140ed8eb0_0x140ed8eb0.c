// 函数: sub_140ed8eb0
// 地址: 0x140ed8eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *arg1
int512_t result
result.o = zx.o(0)
zmm1.d f- 0f
int32_t zmm3 = 0x3f800000
arg3 = arg3 f/ *(arg2 + 8) f+ zmm1.d
*arg1 = arg3
int32_t zmm4

if (not(zmm1.d f<= 0f))
    zmm4 = 0x3f800000
else if (zmm1.d f>= 0f)
    zmm4 = (zx.o(0)).d
else
    zmm4 = -0x40800000

arg3 - 0f

if (not(arg3 > 0f))
    if (arg3 >= 0f)
        zmm3 = (zx.o(0)).d
    else
        zmm3 = -0x40800000

if (not(zmm4 f== zmm3) && not(zmm1.d f== 0f))
    *arg1 = 0
    arg3 = (zx.o(0)).d

zmm1.d = zmm1.d f- arg3
result.o = zmm1
return result
