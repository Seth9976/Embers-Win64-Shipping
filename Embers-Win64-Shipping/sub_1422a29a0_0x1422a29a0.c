// 函数: sub_1422a29a0
// 地址: 0x1422a29a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = *arg2
float zmm1

if (arg6 == 0)
    zmm1 = 1f
else
    zmm1 = *(data_143f5b298 + 0x9a0)

int128_t zmm0

if (arg4 != 0)
    zmm0 = 0x3f000000
else if (arg5 == 0)
    zmm0 = zx.o(0)
else
    zmm0 = 0x3e19999a

zmm0.d = zmm0.d f* zmm1
zmm0.d = zmm0.d f+ 0.5f
float zmm0_1 = powf(zmm0.d, 2.20000005f)
*arg1 = zmm0_1 f* var_18.d
arg1[1] = zmm0_1 f* var_18:4.d
arg1[2] = zmm0_1 f* var_18:8.d
arg1[3] = var_18:0xc.d
return arg1
