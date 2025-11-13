// 函数: sub_141dd91a0
// 地址: 0x141dd91a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xf8) = arg2

if (arg2 == 0 || (*(arg2 + 0x4c) & 0x20) == 0)
    int64_t* rcx = *(arg1 + 0x18)
    char rax
    
    if (rcx != 0)
        rax = (*(*rcx + 0x2b0))(rcx)
    
    if (rcx == 0 || rax == 0)
        *(arg1 + 0x182) &= 0xdf
        *(arg1 + 0x182) = *(arg1 + 0x182)
        return 0

*(arg1 + 0x182) &= 0xdf
*(arg1 + 0x182) |= 0x20
return 0x20
