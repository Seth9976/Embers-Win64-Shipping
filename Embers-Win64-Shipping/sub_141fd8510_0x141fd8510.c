// 函数: sub_141fd8510
// 地址: 0x141fd8510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3].b = arg2[3].b
*(arg1 + 0xd) = *(arg2 + 0xd)

if (&arg1[4] != &arg2[4])
    if (*(arg2 + 0x88) == 0)
        memmove(&arg1[4], &arg2[4], 0x78)
    
    int64_t rcx_1 = *(arg1 + 0x88)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x88) = *(arg2 + 0x88)
    *(arg2 + 0x88) = 0
    arg1[0x24] = arg2[0x24]
    arg1[0x25] = arg2[0x25]
    arg2[0x24] = 0
    arg2[0x25] = 5

return arg1
