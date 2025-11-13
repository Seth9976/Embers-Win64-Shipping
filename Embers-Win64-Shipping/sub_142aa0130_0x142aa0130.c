// 函数: sub_142aa0130
// 地址: 0x142aa0130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0)
    void* rcx = *(arg1 + 0x50)
    
    if (rcx != 0 && *(rcx + 8) != 0)
        sub_142ae76a0(rcx)
        int64_t rcx_1 = *(arg1 + 0x40)
        
        if (rcx_1 != 0)
            sub_142a7dcd0(rcx_1)
            *(arg1 + 0x40) = 0
            *(arg1 + 0x48) = 0

return arg1
