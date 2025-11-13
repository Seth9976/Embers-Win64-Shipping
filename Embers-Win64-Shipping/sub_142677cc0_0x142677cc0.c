// 函数: sub_142677cc0
// 地址: 0x142677cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x3c8)
void*** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_142671410(rax, arg1, arg3)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx_1

*arg2 = rbx_1
arg2[1] = rax_2
sub_142696320(*arg2, arg1, arg4)
return arg2
