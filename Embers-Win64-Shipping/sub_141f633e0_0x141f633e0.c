// 函数: sub_141f633e0
// 地址: 0x141f633e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x440)

if (rcx == 0)
    return 

int32_t var_48
sub_1423633d0(rcx, &var_48)
float zmm8[0x4] = var_48
int32_t var_44
int128_t zmm7 = var_44
int32_t var_40
float zmm5[0x4] = var_40
int64_t zmm1_1 = zmm7.q
int32_t var_3c
zmm8[0] = zmm8[0] f+ var_3c
int32_t var_38
zmm7.d = zmm7.d f+ var_38
zmm8[0] = zmm8[0] f- var_3c
zmm1_1.d = zmm1_1.d f- var_38
float var_34
zmm5[0] = zmm5[0] - var_34
float zmm3 = var_34 + zmm5[0]
float var_50_1 = zmm5[0]
*arg2 = (_mm_unpacklo_ps(zmm8, zmm1_1)).q
arg2[1].d = var_50_1
*arg3 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
arg3[1].d = zmm3
