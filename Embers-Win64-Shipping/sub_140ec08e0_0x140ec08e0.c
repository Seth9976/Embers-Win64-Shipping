// 函数: sub_140ec08e0
// 地址: 0x140ec08e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rdi[1] = arg2
    *rdi = &data_142edc350

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rdi

*arg1 = rdi
arg1[1] = rax_1
return arg1
