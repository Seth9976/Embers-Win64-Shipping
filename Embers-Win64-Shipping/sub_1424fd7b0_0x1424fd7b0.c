// 函数: sub_1424fd7b0
// 地址: 0x1424fd7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_28

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
float zmm5[0x4] = *rcx_1
float zmm4[0x4] = *(rcx_1 + 4)
float zmm7[0x4] = zmm5 ^ data_142d3f780
zmm4[0] = zmm4[0] + zmm4[0]
float zmm3[0x4] = *(rcx_1 + 0xc)
zmm7[0] = zmm7[0] + zmm7[0]
zmm3[0] = zmm3[0] * zmm4[0]
zmm3[0] = zmm3[0] * zmm7[0]
zmm7[0] = zmm7[0] f* *(rcx_1 + 8)
zmm7[0] = zmm7[0] * zmm5[0]
zmm3[0] = zmm3[0] - zmm7[0]
zmm4[0] = zmm4[0] f* *(rcx_1 + 8)
zmm4[0] = zmm4[0] f* *(rcx_1 + 4)
zmm3[0] = zmm3[0] + zmm4[0]
zmm7[0] = zmm7[0] - zmm4[0]
*arg3 = (_mm_unpacklo_ps(zmm3, zmm3[0].q)).q
zmm7[0] = zmm7[0] + 1f
float result = zmm7[0]
arg3[1].d = result
return result
