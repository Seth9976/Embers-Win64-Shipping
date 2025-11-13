// 函数: sub_14187cab0
// 地址: 0x14187cab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x60)
void*** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_141863db0(rax, arg2)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42e98
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx_1

*arg1 = rbx_1
arg1[1] = rax_2
return arg1
