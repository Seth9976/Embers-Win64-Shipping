// 函数: sub_14244ba40
// 地址: 0x14244ba40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = *(arg2 + 0x1f4)
arg1[2].d = *(arg2 + 0x1fc) f+ *(arg2 + 0x1f4)
float var_28
*(arg1 + 0x88) = *sub_140acc920(&var_28, arg2 + 0x1f8)
*(arg1 + 0x14) = *(arg2 + 0x200)
float zmm0_1[0x4] = 0xbf800000
zmm0_1[0] = -1f f/ *(arg2 + 0x218)
arg1[5].d = zmm0_1[0]
float zmm1[0x4] = *(arg2 + 0x204)
zmm1[0] = zmm1[0] f* *(arg2 + 0x208)
zmm1[0] = zmm1[0] f* *(arg2 + 0x20c)
bool cond:0 = zmm1[0] >= 0f
zmm1[0] = zmm1[0] f* *(arg2 + 0x210)
zmm1[0] = zmm1[0] f* *(arg2 + 0x214)

if (cond:0)
    var_28 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    var_28 = 0f

if (zmm1[0] >= 0f)
    float var_24_1 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    int32_t var_24 = 0

if (zmm1[0] >= 0f)
    float var_20_1 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    int32_t var_20 = 0

if (zmm1[0] >= 0f)
    float var_1c_1 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    int32_t var_1c = 0

*(arg1 + 0x18) = var_28.o
zmm1 = *(arg2 + 0x21c)
zmm1[0] = zmm1[0] f* *(arg2 + 0x220)
zmm1[0] = zmm1[0] f* *(arg2 + 0x224)
bool cond:1 = zmm1[0] >= 0f
zmm1[0] = zmm1[0] f* *(arg2 + 0x228)
zmm1[0] = zmm1[0] f* *(arg2 + 0x22c)

if (cond:1)
    var_28 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    var_28 = 0f

if (zmm1[0] >= 0f)
    float var_24_3 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    int32_t var_24_2 = 0

if (zmm1[0] >= 0f)
    float var_20_3 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    int32_t var_20_2 = 0

if (zmm1[0] >= 0f)
    float var_1c_3 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    int32_t var_1c_2 = 0

*(arg1 + 0x2c) = var_28.o
zmm1 = *(arg2 + 0x230)
zmm1[0] = zmm1[0] f* *(arg2 + 0x234)
zmm1[0] = zmm1[0] f* *(arg2 + 0x238)
bool cond:2 = zmm1[0] >= 0f
zmm1[0] = zmm1[0] f* *(arg2 + 0x23c)
zmm1[0] = zmm1[0] f* *(arg2 + 0x240)

if (cond:2)
    var_28 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    var_28 = 0f

if (zmm1[0] >= 0f)
    float var_24_5 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    int32_t var_24_4 = 0

if (zmm1[0] >= 0f)
    float var_20_5 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    int32_t var_20_4 = 0

if (zmm1[0] >= 0f)
    float var_1c_5 = _mm_min_ss(zmm1[0], 0x7e967699)[0]
else
    int32_t var_1c_4 = 0

float zmm3[0x4] = var_28.o
*(arg1 + 0x4c) = zmm3
zmm3[0] = zmm3[0] f+ *(arg1 + 0x2c)
zmm0_1 = arg1[0xa].d
zmm0_1[0] = zmm0_1[0] f+ arg1[6].d
zmm1 = *(arg1 + 0x54)
zmm1[0] = zmm1[0] f+ *(arg1 + 0x34)
float zmm2[0x4] = arg1[0xb].d
zmm2[0] = zmm2[0] f+ arg1[7].d
float temp0_13[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_13[0] = zmm0_1[0]
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
temp0_14[0] = zmm1[0]
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
temp0_15[0] = zmm2[0]
float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
*(arg1 + 0x3c) = temp0_16
arg1[0xc].d = *(arg2 + 0x244)
int128_t zmm6
zmm6.d = -1f f/ *(arg2 + 0x248)
var_28.o = temp0_16
*(arg1 + 0x5c) = zmm6.d
zmm0_1 = *(arg2 + 0x24c)
zmm0_1[0] = zmm0_1[0] f* *(arg2 + 0x250)
zmm0_1[0] = zmm0_1[0] f* *(arg2 + 0x254)
bool cond:3 = zmm0_1[0] >= 0f
zmm0_1[0] = zmm0_1[0] f* *(arg2 + 0x258)
zmm0_1[0] = zmm0_1[0] f* *(arg2 + 0x25c)

if (cond:3)
    var_28 = _mm_min_ss(zmm0_1[0], 0x7e967699)[0]
else
    var_28 = 0f

if (zmm0_1[0] >= 0f)
    float var_24_7 = _mm_min_ss(zmm0_1[0], 0x7e967699)[0]
else
    int32_t var_24_6 = 0

if (zmm0_1[0] >= 0f)
    float var_20_7 = _mm_min_ss(zmm0_1[0], 0x7e967699)[0]
else
    int32_t var_20_6 = 0

if (zmm0_1[0] >= 0f)
    float var_1c_7 = _mm_min_ss(zmm0_1[0], 0x7e967699)[0]
else
    int32_t var_1c_6 = 0

*(arg1 + 0x64) = var_28.o
zmm1 = *(arg2 + 0x268)

if (not(zmm1[0] <= 0f))
    zmm3 = *(arg2 + 0x264)

if (zmm1[0] <= 0f || zmm3[0] <= 0f)
    __builtin_memset(arg1 + 0x74, 0, 0x14)
else
    zmm2 = *(arg2 + 0x260)
    zmm3[0] = zmm3[0] / zmm1[0]
    *(arg1 + 0x74) = zmm2[0]
    *(arg1 + 0x7c) = zmm3[0]
    *(arg1 + 0x84) = (zmm3 ^ 0x80000000)[0]
    zmm2[0] = zmm2[0] f* *(arg1 + 0x7c)
    zmm3[0] = zmm3[0] - zmm2[0]
    arg1[0xf].d = zmm3[0]

arg1[0x13].d = *(arg2 + 0x284)
uint32_t rcx_1 = zx.d(*(arg2 + 0x1f0))
float var_20_8

if (rcx_1 == 0)
    zmm0_1 = *(arg1 + 0xc) ^ 0x80000000
    float temp0_27[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
    var_20_8 = zmm0_1[0]
    *arg1 = temp0_27.q
    arg1[1].d = var_20_8
else if (rcx_1 == 1)
    zmm3 = *(arg2 + 0x1d0)
    zmm0_1 = 0x3727c5ac
    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    zmm2 = zmm3
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    zmm3[0] = zmm3[0] * 9.99999975e-06f
    zmm3[0] = zmm3[0] f- *(arg1 + 0xc)
label_14244be36:
    zmm2[0] = zmm2[0] * zmm0_1[0]
    zmm1[0] = zmm1[0] * zmm0_1[0]
    var_20_8 = zmm3[0]
    *arg1 = (_mm_unpacklo_ps(zmm2, zmm1[0].q)).q
    arg1[1].d = var_20_8
else if (rcx_1 == 2)
    zmm3 = *(arg2 + 0x1d0)
    zmm0_1 = 0x3727c5ac
    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    zmm2 = zmm3
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    zmm3[0] = zmm3[0] * 9.99999975e-06f
    goto label_14244be36
return arg1
