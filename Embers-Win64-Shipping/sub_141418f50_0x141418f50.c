// 函数: sub_141418f50
// 地址: 0x141418f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(arg1.d)).d f/ _mm_cvtepi32_ps(zx.o((arg1 u>> 0x20).d)).d
float zmm1[0x4]

if (arg2 != 1)
    uint128_t zmm0_1 = tanf(arg3.d)
    zmm1 = 0x3f800000
    int128_t* rax_1 = arg6
    arg4 = data_142d3f660
    zmm1[0] = 1f f/ zmm0_1.d
    int64_t var_54_1 = 0
    int64_t var_40_1 = 0
    int32_t var_1c = 0
    zmm0_1.d = zmm1[0]
    float zmm4_1 = zmm1[0]
    zmm1 = 0:4.o
    *rax_1 = zmm0_1
    zmm0_1 = 0.o
    float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
    _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
    temp0_4[0] = zmm4_1 f* zmm6.d
    zmm0_1.d = arg5.d
    rax_1[1] = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
    zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
    rax_1[2] = arg4
    rax_1[3] = zmm0_1
    return rax_1

arg4.d = arg4.d f* 0.5f
zmm1 = 0x3f800000
float zmm4 = 1f
uint128_t zmm0
zmm0.d = arg4.d f/ zmm6.d

if (not(zmm0.d f== 0f))
    zmm4 = 1f f/ zmm0.d

if (not(arg4.d f== 0f))
    zmm1[0] = 1f f/ arg4.d

int64_t var_54 = 0
zmm0.d = zmm1[0]
int64_t var_40 = 0
zmm1 = 0:4.o
*arg6 = zmm0
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
temp0_2[0] = zmm4
arg6[1] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
__builtin_memcpy(&arg6[2], 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xb6\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x20)
return arg6
