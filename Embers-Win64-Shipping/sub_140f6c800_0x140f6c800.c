// 函数: sub_140f6c800
// 地址: 0x140f6c800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x2e8)

if (rax_1 == 0)
    rax_1 = *(arg1 + 0x2a8) + 0x118

*arg2 = *(rax_1 + 8)
return arg2
