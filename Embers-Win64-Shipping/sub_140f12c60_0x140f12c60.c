// 函数: sub_140f12c60
// 地址: 0x140f12c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x58) = 1
char var_28 = 1
float temp0[0x4] = _mm_shuffle_ps(arg2, arg2, 0xe1)
temp0[0] = arg3
int64_t var_20 = 0
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = arg2[0]
int32_t var_18 = 0
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = arg3
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
*(arg1 + 0x48) = temp0_3
float var_38[0x4] = temp0_3
sub_1407473e0(arg1 + 0x60, &var_20)
sub_140745b20(&var_20)
return arg1
