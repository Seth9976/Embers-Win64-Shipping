// 函数: sub_1424e8a40
// 地址: 0x1424e8a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_3 = *(arg2 + 0x20)
int32_t var_30
float zmm6[0x4] = var_30
int32_t var_34
float zmm5[0x4] = var_34
int32_t var_44
zmm6[0] = zmm6[0] f* var_44
int64_t rcx_2
rcx_2.b = rax_3 != 0
int32_t var_40
zmm5[0] = zmm5[0] f* var_40
*(arg2 + 0x20) = rcx_2 + rax_3
float zmm2[0x4] = var_38
zmm6[0] = zmm6[0] f* var_48
zmm5[0] = zmm5[0] f* var_48
zmm5[0] = zmm5[0] - zmm6[0]
zmm2[0] = zmm2[0] f* var_44
zmm2[0] = zmm2[0] f* var_40
zmm2[0] = zmm2[0] - zmm5[0]
zmm6[0] = zmm6[0] - zmm2[0]
float result = zmm2[0]
*arg3 = (_mm_unpacklo_ps(zmm5, zmm6[0].q)).q
arg3[1].d = result
return result
