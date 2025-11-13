// 函数: sub_140db2f00
// 地址: 0x140db2f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_4 = *(arg1 + 0xe8)
int32_t rcx

if (arg2 s>= rax_4)
    rcx = *(*(arg1 + 0xf0) + (sx.q(arg2 - rax_4) << 2))
else
    rcx = *(*(arg1 + 0xe0) + (sx.q(arg2) << 2))

jump(*(**(*(arg1 + 0x110) + sx.q(rcx) * 0x10) + 0x18))
