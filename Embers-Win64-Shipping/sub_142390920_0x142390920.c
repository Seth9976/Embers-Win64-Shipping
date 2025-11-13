// 函数: sub_142390920
// 地址: 0x142390920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x39)

if (rax s< 0 && (rax & 0xa) == 0xa)
    void* rcx = *(arg1 + 0x170)
    
    if (rcx != 0 && sub_141fe9880(rcx + 0x50) != 0)
        return 1

return 0
