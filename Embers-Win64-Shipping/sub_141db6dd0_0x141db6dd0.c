// 函数: sub_141db6dd0
// 地址: 0x141db6dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 &= 0xfffffffe
arg1[4] = 0
arg1[3] = 0xffffffff
arg1[6] = 0
arg1[5] = 0xffffffff
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x4a) &= 0xfe
*(arg1 + 0x49) = 0
*(arg1 + 4) = 0
uint128_t zmm0 = zx.o(data_143dbb1f8.q)
int32_t rax = data_143dbb200
uint64_t var_1c = zmm0.q
int32_t var_20 = rax
int32_t var_14 = rax
zmm0.q = zmm0.q
*(arg1 + 0x1c) = zmm0
*(arg1 + 0x2c) = var_1c
arg1[0xd] = 0.d
sub_141dd7400(arg1, arg4)
float zmm6[0x4]
sub_141dd7840(arg1, arg2, arg3, zmm6)
return arg1
