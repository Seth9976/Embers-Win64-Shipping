// 函数: sub_1411dadc0
// 地址: 0x1411dadc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
int128_t zmm7 = arg5
zmm7.d f- 0f
int128_t zmm12

if (zmm7.d f<= 0f)
    zmm12 = data_1439b60ac
else
    zmm12 = zmm7

if (not(zmm7.d f> 0f))
    zmm7 = data_1439b60b4

int128_t zmm6 = 0x3f800000
int128_t zmm8 = 0x3f800000
float temp0[0x4] = _mm_max_ss(data_1439b60b0[0], 0x3f800000)

if (arg4 == 1)
    zmm8 = 0x3f800000
else if (arg4 == 4)
    zmm8 = 0x3f000000
else if (arg4 == 8)
    zmm8 = 0x3e800000

uint128_t zmm0_1 = tanf(arg3 f* 0.00872664619f)
int32_t zmm4 = 0x3f800000
*arg1 = zmm0_1.d f/ _mm_cvtepi32_ps(zx.o((rbx u>> 0x20).d)).d f* zmm8.d f* zmm12.d

if (arg4 == 1)
    zmm4 = 0x3f800000
else if (arg4 == 4)
    zmm4 = 0x3f000000
else if (arg4 == 8)
    zmm4 = 0x3e800000

uint128_t zmm3
zmm3.d = zmm0_1.d f/ _mm_cvtepi32_ps(zx.o((rbx u>> 0x20).d)).d
uint128_t zmm1
zmm1.d = zmm3.d f* zmm4
zmm1.d = zmm1.d f* zmm7.d
arg1[1] = zmm1.d

if (arg4 != 1)
    if (arg4 == 4)
        zmm6 = 0x3f000000
    else if (arg4 == 8)
        zmm6 = 0x3e800000

zmm3.d = zmm3.d f* zmm6.d
zmm3.d = zmm3.d f* temp0[0]
arg1[2] = zmm3.d
return arg1
