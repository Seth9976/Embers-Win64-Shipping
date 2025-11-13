// 函数: sub_140b357d0
// 地址: 0x140b357d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = *(arg1 + 8)
uint128_t var_38 = *rax
uint128_t var_28 = rax[1]
uint128_t var_18 = rax[2]
uint64_t arg_8 = rax[3].q
sub_140b3e300()
*arg2 = data_143de7b18.o
arg2[1].q = &data_142e78508
uint128_t* rax_1 = j_sub_140a82f30(0x38)

if (rax_1 == 0)
    *(arg2 + 0x18) = 0
    return arg2

*rax_1 = var_38
rax_1[1] = var_28
rax_1[2] = var_18
rax_1[3].q = arg_8
*(arg2 + 0x18) = rax_1
return arg2
