// 函数: sub_1424508d0
// 地址: 0x1424508d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(arg3)
float zmm0[0x4]

if (arg3 == 0)
    zmm0 = *(arg1 + 0xc) ^ data_142d3f780
    float temp0_6[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
    float var_10_2 = zmm0[0]
    *arg1 = temp0_6.q
    arg1[1].d = var_10_2
    return 

float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]

if (r9 == 1)
    zmm3 = *(arg2 + 0x10)
    zmm0 = 0x3727c5ac
    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    zmm2 = zmm3
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    zmm3[0] = zmm3[0] * 9.99999975e-06f
    zmm3[0] = zmm3[0] f- *(arg1 + 0xc)
label_14245090b:
    zmm2[0] = zmm2[0] * zmm0[0]
    zmm1[0] = zmm1[0] * zmm0[0]
    float var_10_1 = zmm3[0]
    *arg1 = (_mm_unpacklo_ps(zmm2, zmm1[0].q)).q
    arg1[1].d = var_10_1
    return 

if (r9 != 2)
    return 

zmm3 = *(arg2 + 0x10)
zmm0 = 0x3727c5ac
zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm2 = zmm3
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3[0] = zmm3[0] * 9.99999975e-06f
goto label_14245090b
