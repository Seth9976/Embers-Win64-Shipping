// 函数: sub_141e86560
// 地址: 0x141e86560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_60 = *(arg2 + 0xc)
int32_t rax_1 = arg4[2].d
uint128_t var_e8 = *arg3
uint128_t var_d8 = arg3[1]
uint128_t var_c8 = *arg4
uint128_t zmm0 = arg4[1]
void*** rax_2 = sub_140a82f30(0x60, 8)
*rax_2 = &data_14306d088
*(rax_2 + 8) = arg1.o
*(rax_2 + 0x18) = var_e8
*(rax_2 + 0x28) = var_d8
*(rax_2 + 0x38) = var_c8
*(rax_2 + 0x48) = zmm0
rax_2[0xb] = rax_1.q
void*** var_98 = rax_2
int64_t (* var_a8)(int64_t* arg1)
int64_t (* rax_3)(int64_t* arg1) = var_a8

if (rax_2 != -8)
    rax_3 = sub_141e76450

var_a8 = rax_3
return sub_141e85cb0(&var_a8, arg5)
