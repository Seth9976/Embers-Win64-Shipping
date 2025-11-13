// 函数: sub_140d42990
// 地址: 0x140d42990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 4
*(arg1 + 0x10) = *arg2
void* rax_1 = arg2[1]
*(arg1 + 0x18) = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[8] = arg2[2].d
arg1[0xa].b = 1
return arg1
