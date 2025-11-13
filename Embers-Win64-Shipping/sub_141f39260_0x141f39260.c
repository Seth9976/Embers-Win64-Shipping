// 函数: sub_141f39260
// 地址: 0x141f39260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141edf430(arg1)
void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

jump(*(**(rax + 0x1b0) + 0xb8))
