// 函数: sub_140b41390
// 地址: 0x140b41390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 + 8 != arg1 + 8)
    int64_t rcx = *(arg2 + 8)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg2 + 8) = *(arg1 + 8)
    *(arg1 + 8) = 0
    *(arg2 + 0x10) = *(arg1 + 0x10)
    *(arg2 + 0x14) = *(arg1 + 0x14)
    *(arg1 + 0x10) = 0

if (arg2 + 0x18 != arg1 + 0x18)
    int64_t rcx_1 = *(arg2 + 0x18)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg2 + 0x18) = *(arg1 + 0x18)
    *(arg1 + 0x18) = 0
    *(arg2 + 0x20) = *(arg1 + 0x20)
    *(arg2 + 0x24) = *(arg1 + 0x24)
    *(arg1 + 0x20) = 0

*(arg2 + 0x28) = *(arg1 + 0x28)
char result = *(arg1 + 0x29)
*(arg2 + 0x29) = result
return result
