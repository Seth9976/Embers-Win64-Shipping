// 函数: sub_1423b3be0
// 地址: 0x1423b3be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_78 = *arg1
uint128_t var_68 = arg1[1]
uint128_t var_58 = arg1[2]
uint64_t arg_8 = arg1[3].q
void*** rax = sub_140a82f30(0x40, 8)
*rax = &data_142ff8618
*(rax + 8) = var_78
*(rax + 0x18) = var_68
*(rax + 0x28) = var_58
rax[7] = arg_8
void*** var_38 = rax
int64_t (* var_48)(int64_t* arg1)
int64_t (* rax_1)(int64_t* arg1) = var_48

if (rax != -8)
    rax_1 = j_sub_1423a7020

var_48 = rax_1
return sub_141e85f30(&var_48)
