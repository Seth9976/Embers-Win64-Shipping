// 函数: sub_140e12aa0
// 地址: 0x140e12aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x778) & 2) != 0 || *(arg1 + 0x734) == 4)
    (*(*(arg1 + 0x2a8) + 8))(arg1 + 0x2a8, arg3, 0)
else
    void* rcx = *(arg1 + 0x870)
    *arg2 = *(rcx + 0x10)
    void* rax_1 = *(rcx + 0x18)
    arg2[1] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1

return arg2
