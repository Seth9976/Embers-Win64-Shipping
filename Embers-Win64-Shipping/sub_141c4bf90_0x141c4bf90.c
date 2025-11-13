// 函数: sub_141c4bf90
// 地址: 0x141c4bf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** r8 = rax

if (rax == 0)
    r8 = nullptr
else
    rax[1] = 0
    *r8 = &data_143208378

r8[1].d = *(arg1 + 8)
*arg2 = r8
return arg2
