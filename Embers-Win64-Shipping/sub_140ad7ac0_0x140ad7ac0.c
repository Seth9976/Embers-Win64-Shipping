// 函数: sub_140ad7ac0
// 地址: 0x140ad7ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18[0x4]
float (* rax)[0x4] = sub_140ade170(arg1, &var_18)
int128_t zmm1 = (*rax)[2]
int32_t var_28 = (*rax ^ 0x80000000).d
int32_t var_20 = (zmm1 ^ 0x80000000).d
int32_t var_24 = ((*rax)[1] ^ 0x80000000).d
int32_t var_1c = (*rax)[3].d
sub_140adf5d0(&var_28, arg2)
return arg2
