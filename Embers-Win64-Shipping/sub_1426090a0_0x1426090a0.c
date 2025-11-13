// 函数: sub_1426090a0
// 地址: 0x1426090a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *arg3 - *arg2
int128_t zmm6
zmm6.d = arg3[2].d f- arg2[2]
float zmm4 = zmm6.d f* zmm6.d + zmm5 * zmm5
float zmm3 = (*arg1 - *arg2) * zmm5 + (arg1[2] f- arg2[2]) f* zmm6.d
float zmm0 = (zx.o(0)).d
*arg4 = zmm3

if (not(zmm4 <= 0f))
    zmm3 = zmm3 / zmm4
    *arg4 = zmm3

if (zmm3 >= 0f)
    zmm0 = zmm3
    
    if (not(zmm3 <= 1f))
        *arg4 = 1f
        zmm0 = 1f
else
    *arg4 = 0f

float zmm1 = zmm0
zmm0 = zmm0 f* zmm6.d + arg2[2] f- arg1[2]
zmm1 = zmm1 * zmm5 + *arg2 f- *arg1
return zmm0 * zmm0 + zmm1 * zmm1
