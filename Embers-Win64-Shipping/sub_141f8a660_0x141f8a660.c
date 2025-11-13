// 函数: sub_141f8a660
// 地址: 0x141f8a660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1a] == 0)
    return 0

char rax_1 = (*(*arg1 + 0x318))()
void* rcx = arg1[0x1a]

if (rax_1 == 0)
    return zx.q(*(rcx + 0x20))

return sub_1423c1c80(rcx) __tailcall
