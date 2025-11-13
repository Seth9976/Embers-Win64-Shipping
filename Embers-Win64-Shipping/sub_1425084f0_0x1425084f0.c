// 函数: sub_1425084f0
// 地址: 0x1425084f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_3 = *(arg2 + 0x38)
float zmm8[0x4] = var_58
void* rcx_2 = &var_48
int32_t var_54
int128_t zmm6 = var_54

if (rax_3 != 0)
    rcx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
int128_t zmm7 = *(rcx_2 + 8)
float zmm5[0x4] = *(rcx_2 + 4)
float zmm3 = *rcx_2
float zmm4 = zmm3 * zmm8[0]
zmm5[0] = zmm5[0] f* zmm6.d
float var_50
zmm4 = zmm4 + zmm5[0] + zmm7.d * var_50 f- *(rcx_2 + 0xc)
zmm4 = zmm4 + zmm4
zmm7.d = zmm7.d f* zmm4
float result = var_50 f- zmm7.d
zmm5[0] = zmm5[0] * zmm4
zmm8[0] = zmm8[0] - zmm3 * zmm4
zmm6.d = zmm6.d f- zmm5[0]
*arg3 = (_mm_unpacklo_ps(zmm8, zmm6.q)).q
arg3[1].d = result
return result
