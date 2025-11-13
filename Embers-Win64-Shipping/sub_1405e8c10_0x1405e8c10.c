// 函数: sub_1405e8c10
// 地址: 0x1405e8c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (*(arg1 + 0x10) == 0)
    *arg2 = 0
    arg2[1] = 0
    return arg2

void*** rax_1 = j_sub_140a82f30(0x50)
void*** arg_8 = rax_1
void*** rdi_1

if (rax_1 == 0)
    rdi_1 = nullptr
else
    rdi_1 = sub_1405ebb70(rax_1, arg3)

void*** rax_3 = j_sub_140a82f30(0x18)
arg_8 = rax_3

if (rax_3 != 0)
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rax_3 = &data_142d5c050
    rax_3[2] = rdi_1

*arg2 = rdi_1
arg2[1] = rax_3
return arg2
