// 函数: sub_1419ec380
// 地址: 0x1419ec380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_70
sub_140ae2c60(arg1 + 0x4c0, &var_70, arg3)
int32_t var_68
float zmm3[0x4] = var_68
int32_t var_64
float zmm4[0x4] = var_64
int32_t var_60
int64_t zmm5 = var_60
float zmm6[0x4] = var_70
int32_t var_6c
int64_t zmm7 = var_6c
zmm3[0] = zmm3[0] f- *(arg1 + 0x548)
int32_t var_5c
int64_t zmm2
zmm2.d = var_5c.d f+ *(arg1 + 0x54c)
int64_t var_44 = (_mm_unpacklo_ps(zmm4, zmm5)).q
float temp0_1[0x4] = _mm_unpacklo_ps(zmm6, zmm7)
float var_48 = zmm3[0]
float var_50[0x4]
var_50[0].q = temp0_1.q
int32_t var_3c = zmm2.d
int32_t var_58 = 1.d
void* rax_3 = *(arg1 + 0x20)
var_70.o = var_50
var_60.q = var_44

if (rax_3 != 0)
    zmm3[0] = zmm3[0] f- *(rax_3 + 0x2e4)
    zmm2.d = zmm2.d f+ *(rax_3 + 0x2e8)
    char var_38_1 = 1
    int64_t var_44_1 = (_mm_unpacklo_ps(zmm4, zmm5)).q
    float var_48_1 = zmm3[0]
    var_50[0].q = (_mm_unpacklo_ps(zmm6, zmm7)).q
    var_70.o = var_50
    int32_t var_3c_1 = zmm2.d
    var_60.q = var_44_1

zmm6 = var_70
float zmm0[0x4] = var_5c
zmm4 = var_68
zmm3 = var_64
zmm0[0] = zmm0[0] - zmm4[0]
zmm3[0] = zmm3[0] - zmm6[0]
zmm5 = var_6c
zmm2.d = var_60.d f- zmm5.d
zmm0[0] = zmm0[0] * 0.5f
zmm3[0] = zmm3[0] * 0.5f
float var_74_2 = zmm0[0]
zmm2.d = zmm2.d f* 0.5f
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm3, zmm2)).q
*(arg2 + 0x14) = var_74_2
zmm6[0] = zmm6[0] f+ *(arg2 + 0xc)
zmm5.d = zmm5.d f+ arg2[2].d
zmm4[0] = zmm4[0] f+ *(arg2 + 0x14)
*arg2 = (_mm_unpacklo_ps(zmm6, zmm5)).q
arg2[1].d = zmm4[0]
zmm0 = arg2[2].d
zmm2 = *(arg2 + 0xc)
float zmm1[0x4] = *(arg2 + 0x14)
zmm0[0] = zmm0[0] * zmm0[0]
zmm2.d = zmm2.d f* zmm2.d
zmm1[0] = zmm1[0] * zmm1[0]
zmm2.d = zmm2.d f+ zmm0[0]
zmm2.d = zmm2.d f+ zmm1[0]
arg2[3].d = _mm_sqrt_ss(0, zmm2.d)[0]
return arg2
