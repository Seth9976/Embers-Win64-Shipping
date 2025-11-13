// 函数: sub_1426e62e0
// 地址: 0x1426e62e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg3 + 0x1c) = 0xffffffff
*(arg3 + 0x20) = 0

if ((*(arg1 + 0xac) & 1) != 0)
    void* rcx = *(arg2 + 0xb8)
    
    if (rcx != 0 && *(arg3 + 8) != 0)
        sub_1426c1a20(rcx, *(arg1 + 0x90), *(arg3 + 8))
    
    *(arg3 + 8) = 0

return sub_140594850() __tailcall
