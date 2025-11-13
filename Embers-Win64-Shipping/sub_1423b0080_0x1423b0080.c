// 函数: sub_1423b0080
// 地址: 0x1423b0080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2 = *(arg2 + 0x78)

if (rax_2 == 0)
    return 0xffffffff

return zx.q(*(rax_2 + 0x60))
