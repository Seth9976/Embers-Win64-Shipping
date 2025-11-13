// 函数: sub_140e190b0
// 地址: 0x140e190b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = data_143e20d08
int64_t* rcx = *(arg1 + 0x910)
float zmm6[0x4] = 0x3f800000
float zmm7[0x4]

if (rcx == 0)
    zmm7 = 0x3f800000
else
    (*(*rcx + 0xf8))(rcx)
    zmm7 = arg3

(*(*rsi + 0x48))(rsi)
int32_t zmm3 = *(arg1 + 0x790)
int32_t zmm2 = *(arg1 + 0x794)
float zmm4 = arg3[0] * zmm7[0]
int64_t var_34 = 0
zmm6[0] = 1f / zmm4
zmm6[0] = zmm6[0] f* *(arg1 + 0x7a4)
zmm6[0] = zmm6[0] f* *(arg1 + 0x7a0)
*arg2 = (_mm_unpacklo_ps(zmm6, zmm6[0].q)).q
*(arg2 + 0x2c) = zmm3
arg2[6].d = zmm2
float var_38[0x4]
var_38[0] = zmm4
float temp0_1[0x4] = _mm_shuffle_ps(var_38, var_38, 0x93)
temp0_1[0] = zmm4
*(arg2 + 0x1c) = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
*(arg2 + 0x34) &= 0xfe
*(arg2 + 0xc) = zmm3
arg2[2].d = zmm2
arg2[1].d = zmm4
*(arg2 + 0x14) = zmm3
arg2[3].d = zmm2
return arg2
