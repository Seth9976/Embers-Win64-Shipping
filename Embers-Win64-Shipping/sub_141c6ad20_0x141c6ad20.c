// 函数: sub_141c6ad20
// 地址: 0x141c6ad20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140d3a3a0(&arg_8, arg3)
int64_t rax = arg_8
int64_t var_68 = arg1
int64_t var_60 = arg2
int64_t var_54 = rax

if (sub_140a80ea0() != 0)
    return sub_141c539c0(&var_68)

void*** rax_3 = sub_140a82f30(0x28, 8)
*rax_3 = &data_142ec17c8
*(rax_3 + 8) = var_68.o
*rax_3 = &data_142fe5e78
*(rax_3 + 0x18) = (arg3 == 0).o
void*** var_38_1 = rax_3
int64_t (* var_48)(int64_t* arg1)
int64_t (* rax_4)(int64_t* arg1) = var_48

if (rax_3 != -8)
    rax_4 = j_sub_141c539c0

var_48 = rax_4
return sub_140a20e40(1, &var_48)
