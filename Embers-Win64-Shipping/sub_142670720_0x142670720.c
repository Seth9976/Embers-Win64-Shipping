// 函数: sub_142670720
// 地址: 0x142670720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *(arg2 + 4)
int32_t var_58 = (*arg2 ^ 0x80000000).d
int32_t var_54 = (*(arg2 + 8)).d
int32_t var_50 = (zmm1 ^ 0x80000000).d
int32_t var_4c = (*(arg2 + 0xc) ^ 0x80000000).d
int32_t var_48 = (*(arg2 + 0x14)).d
int32_t var_44 = (arg2[1].d ^ 0x80000000).d
float var_40
sub_140acc6d0(&var_40, &var_58, 2)
float zmm3 = 1f f/ arg4.d
float zmm1_1 = (var_40 - *arg3) * zmm3
*arg1 = int.d(zmm1_1 + zmm1_1 - 0.5f) s>> 1
float var_34
zmm1_1 = (var_34 - *arg3) * zmm3
arg1[1] = int.d(zmm1_1 + zmm1_1 - 0.5f) s>> 1
float var_38
zmm1_1 = (var_38 - arg3[2]) * zmm3
arg1[2] = int.d(zmm1_1 + zmm1_1 - 0.5f) s>> 1
float var_2c
zmm1_1 = (var_2c - arg3[2]) * zmm3
arg1[3] = int.d(zmm1_1 + zmm1_1 - 0.5f) s>> 1
return arg1
