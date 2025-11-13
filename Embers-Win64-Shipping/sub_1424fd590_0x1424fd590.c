// 函数: sub_1424fd590
// 地址: 0x1424fd590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_18

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
float zmm1[0x4] = *(rcx_1 + 8)
float zmm0[0x4] = *(rcx_1 + 4)
float zmm2[0x4] = *(rcx_1 + 0xc)
zmm1[0] = zmm1[0] + zmm1[0]
float zmm4[0x4] = zmm0 ^ data_142d3f780
zmm4[0] = zmm4[0] + zmm4[0]
zmm4[0] = zmm4[0] * zmm0[0]
zmm1[0] = zmm1[0] * zmm1[0]
zmm2[0] = zmm2[0] * zmm1[0]
zmm1[0] = zmm1[0] f* *rcx_1
zmm4[0] = zmm4[0] - zmm1[0]
zmm2[0] = zmm2[0] * zmm4[0]
zmm4[0] = zmm4[0] f* *rcx_1
zmm4[0] = zmm4[0] + 1f
zmm2[0] = zmm2[0] + zmm1[0]
zmm2[0] = zmm2[0] - zmm4[0]
float result = zmm2[0]
*arg3 = (_mm_unpacklo_ps(zmm4, zmm2[0].q)).q
arg3[1].d = result
return result
