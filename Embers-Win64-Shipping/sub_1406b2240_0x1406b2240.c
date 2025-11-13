// 函数: sub_1406b2240
// 地址: 0x1406b2240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) == 0)
    *arg2 = 0
    arg2[1] = 0
    return arg2

void*** rax_1 = j_sub_140a82f30(0x80)
void*** arg_8 = rax_1
void*** rdi_1

if (rax_1 == 0)
    rdi_1 = nullptr
else
    rdi_1 = sub_1406b56c0(rax_1, arg3)

void*** rax_3 = j_sub_140a82f30(0x18)
arg_8 = rax_3

if (rax_3 != 0)
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rax_3 = &data_142d8d790
    rax_3[2] = rdi_1

*arg2 = rdi_1
arg2[1] = rax_3
return arg2
