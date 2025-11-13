// 函数: sub_140a6bd10
// 地址: 0x140a6bd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    char rax_1 = *(arg1 + 8)
    *rbx = &data_142e62608
    rbx[1].b = rax_1

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

*arg2 = rbx
arg2[1] = rax_2
return arg2
