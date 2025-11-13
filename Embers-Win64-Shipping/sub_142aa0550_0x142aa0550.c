// 函数: sub_142aa0550
// 地址: 0x142aa0550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0)
    **(arg1 + 0x10) = 0x110000
    *(arg1 + 0x1c) = 1
    int64_t rcx = *(arg1 + 0x40)
    
    if (rcx != 0)
        sub_142a7dcd0(rcx)
        *(arg1 + 0x40) = 0
        *(arg1 + 0x48) = 0
    
    void* rcx_1 = *(arg1 + 0x50)
    
    if (rcx_1 != 0)
        sub_142ae76a0(rcx_1)
    
    *(arg1 + 0x20) = 0

sub_142a9efc0(arg1, arg2, arg3)
return arg1
