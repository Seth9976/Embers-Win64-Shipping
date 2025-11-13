// 函数: sub_1408da7d0
// 地址: 0x1408da7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[5] = 0
arg1[6] = 0
*arg1 = &data_142e115b8
void*** rax = j_sub_140a82f30(0x7010)

if (rax == 0)
    arg1[7] = 0
    return arg1

*rax = &data_142e0f3a8
arg1[7] = rax
return arg1
