// 函数: sub_140949000
// 地址: 0x140949000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e25968
arg1[1] = *(arg2 + 8)
void* rax_1 = *(arg2 + 0x10)
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

*arg1 = &data_142e259e0
arg1[3] = 0
arg1[4] = 0
sub_140596d10(&arg1[5], arg2 + 0x28)
sub_140596d10(&arg1[7], arg2 + 0x38)
arg1[9].b = *(arg2 + 0x48)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
return arg1
