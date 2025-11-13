// 函数: sub_1424fd690
// 地址: 0x1424fd690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_38

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
float zmm4[0x4] = *rcx_1
int128_t zmm2 = *(rcx_1 + 8)
float zmm5[0x4] = *(rcx_1 + 0xc)
zmm4[0] = zmm4[0] + zmm4[0]
int128_t zmm8 = zmm2 ^ data_142d3f780
zmm8.d = zmm8.d f+ zmm8.d
zmm5[0] = zmm5[0] * zmm4[0]
zmm4[0] = zmm4[0] f* *(rcx_1 + 4)
zmm5[0] = zmm5[0] f* zmm8.d
int64_t zmm1 = zmm8.q
zmm8.d = zmm8.d f* *(rcx_1 + 4)
zmm5[0] = zmm5[0] + zmm4[0]
zmm1.d = zmm1.d f* zmm2.d
zmm5[0] = zmm5[0] f- zmm8.d
zmm4[0] = zmm4[0] * zmm4[0]
float result = zmm5[0]
zmm1.d = zmm1.d f- zmm4[0]
zmm1.d = zmm1.d f+ 1f
*arg3 = (_mm_unpacklo_ps(zmm5, zmm1)).q
arg3[1].d = result
return result
