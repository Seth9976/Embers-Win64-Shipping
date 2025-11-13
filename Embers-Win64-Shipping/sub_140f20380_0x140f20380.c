// 函数: sub_140f20380
// 地址: 0x140f20380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2].d = 0xbf800000
*(arg1 + 0x14) = 0xbf800000
arg1[3].d = 0xbf800000
*(arg1 + 0x1c) = 0xbf800000
int64_t arg_8

if (arg4 - 3 u> 1)
    arg_8 = *arg3
else
    arg_8.d = __maxss_xmmss_memss((*arg2)[0], *arg3)[0]
    arg_8:4.d = (*arg3)[1][0]

float zmm1[0x4] = arg_8.d
float zmm4[0x4] = arg_8:4.d
*arg1 = (_mm_unpacklo_ps(zmm1, zmm4[0].q)).q
float zmm0[0x4]
float zmm3[0x4]

if (arg4 u> 0xc)
    zmm3 = data_143dbb1f0.d
    zmm4 = data_143dbb1f0:4.d
else
    switch (arg4)
        case 0, 3
            zmm4 = *(arg2 + 4)
            zmm3 = zx.o(0)
        case 1
            zmm3 = *arg2
            zmm3[0] = zmm3[0] * 0.5f
            zmm1[0] = zmm1[0] * 0.5f
            zmm4 = *(arg2 + 4)
            zmm3[0] = zmm3[0] - zmm1[0]
        case 2, 4
            zmm3 = *arg2
            zmm4 = *(arg2 + 4)
            zmm3[0] = zmm3[0] - zmm1[0]
        case 5
            zmm3 = *arg2
            zmm4 = zx.o(0)
        case 6
            zmm4 ^= data_142d3f780
            zmm3 = zx.o(0)
        case 7
            zmm3 = *arg2
            zmm3[0] = zmm3[0] * 0.5f
            zmm1[0] = zmm1[0] * 0.5f
            zmm4 ^= data_142d3f780
            zmm3[0] = zmm3[0] - zmm1[0]
        case 8
            zmm4 ^= data_142d3f780
            zmm3 = zmm1 ^ data_142d3f780
            zmm3[0] = zmm3[0] f- *arg2
        case 9
            zmm4 = zx.o(0)
            zmm3 = zmm1 ^ data_142d3f780
        case 0xa
            zmm0 = zmm4
            zmm3 = *arg2
            zmm1[0] = zmm1[0] * 0.5f
            zmm3[0] = zmm3[0] * 0.5f
            zmm0[0] = zmm0[0] * 0.5f
            zmm3[0] = zmm3[0] - zmm1[0]
            zmm1 = *(arg2 + 4)
            zmm1[0] = zmm1[0] * 0.5f
            zmm4 = zmm1
            zmm4[0] = zmm4[0] - zmm0[0]
        case 0xb
            float zmm2[0x4] = *(arg2 + 4)
            zmm1 = zmm4
            zmm2[0] = zmm2[0] * 0.5f
            zmm1[0] = zmm1[0] * 0.5f
            zmm3 = *arg2
            zmm4 = zmm2
            zmm4[0] = zmm4[0] - zmm1[0]
        case 0xc
            zmm0 = *(arg2 + 4)
            zmm3 = zx.o(0)
            zmm0[0] = zmm0[0] - zmm4[0]
            zmm4 = zmm0

arg1[1].d = zmm3[0]
*(arg1 + 0xc) = zmm4[0]
zmm3 = data_143dbb1f0.d
zmm0 = data_143dbb1f0:4.d
zmm3[0] = zmm3[0] f+ *arg2
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int32_t rax_3
rax_3.b = ((arg4 - 5) & 0xfffffffb) != 0
temp0_3[0] = zmm0[0]
zmm0[0] = zmm0[0] f+ *(arg2 + 4)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = zmm3[0]
arg1[4].d = rax_3
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = zmm0[0]
*(arg1 + 0x10) = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
return arg1
