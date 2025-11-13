// 函数: sub_140db3320
// 地址: 0x140db3320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *arg1
int32_t zmm3 = 0x3f800000
int128_t zmm8 = *arg2
int128_t zmm9 = arg1[1]
int128_t zmm12 = *(arg2 + 4)
float zmm5 = (zmm4 f- zmm8.d) * (arg3[1] f- zmm12.d) - (*arg3 f- zmm8.d) * (zmm9.d f- zmm12.d)
zmm5 - 0f
int128_t zmm6

if (not(zmm5 <= 0f))
    zmm6 = 0x3f800000
else if (zmm5 >= 0f)
    zmm6 = zx.o(0)
else
    zmm6 = 0xbf800000

zmm5 = (zmm4 f- *arg3) * (arg4[1] f- arg3[1]) - (*arg4 f- *arg3) * (zmm9.d f- arg3[1])
zmm5 - 0f
float zmm0

if (not(zmm5 <= 0f))
    zmm0 = 1f
else if (zmm5 >= 0f)
    zmm0 = (zx.o(0)).d
else
    zmm0 = -1f

zmm12.d = zmm12.d f- arg4[1]
zmm8.d = zmm8.d f- *arg4
zmm9.d = zmm9.d f- arg4[1]
zmm8.d = zmm8.d f* zmm9.d
zmm4 = (zmm4 f- *arg4) f* zmm12.d f- zmm8.d
zmm4 - 0f

if (not(zmm4 > 0f))
    if (zmm4 >= 0f)
        zmm3 = (zx.o(0)).d
    else
        zmm3 = 0xbf800000

int64_t result

if (zmm6.d f!= zmm0 || zmm0 f!= zmm3)
    result.b = 0
else
    result.b = 1

return result
