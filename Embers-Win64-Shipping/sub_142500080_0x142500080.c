// 函数: sub_142500080
// 地址: 0x142500080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int32_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t rax_3 = *(arg2 + 0x20)
float zmm8[0x4] = var_98
int32_t var_90
float zmm3[0x4] = var_90
int32_t var_94
int128_t zmm7 = var_94
int32_t var_80
zmm3[0] = zmm3[0] f- var_80
zmm3[0] = zmm3[0] f+ var_80
char var_40 = 1
zmm8[0] = zmm8[0] f- var_88
zmm8[0] = zmm8[0] f+ var_88
float result = zmm3[0]
int32_t var_84
int64_t zmm5
zmm5.d = zmm7.q.d f- var_84
zmm7.d = zmm7.d f+ var_84
float var_60 = zmm3[0]
int64_t rcx_2
rcx_2.b = rax_3 != 0
int64_t var_58 = (_mm_unpacklo_ps(zmm8, zmm5)).q
float temp0_1[0x4] = _mm_unpacklo_ps(zmm8, zmm7.q)
*(arg2 + 0x20) = rcx_2 + rax_3
float result_1 = result
int64_t var_4c = temp0_1.q
float var_44 = var_60
int64_t var_78
sub_140ade9e0(&var_78, &var_58)
*arg3 = var_78
arg3[1].d = result
return result
