// 函数: sub_141476640
// 地址: 0x141476640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3].b = arg2[3].b
*(arg1 + 0xd) = *(arg2 + 0xd)

if (&arg1[4] != &arg2[4])
    if (*(arg2 + 0x78) == 0)
        memmove(&arg1[4], &arg2[4], 0x64)
    
    int64_t rcx_1 = *(arg1 + 0x78)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x78) = *(arg2 + 0x78)
    *(arg2 + 0x78) = 0
    arg1[0x20] = arg2[0x20]
    arg1[0x21] = arg2[0x21]
    arg2[0x20] = 0
    arg2[0x21] = 5

return arg1
