// 函数: sub_142b623c0
// 地址: 0x142b623c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_142a45d30(arg1 + 0x148, arg2)

if (result == 0)
    int64_t* rcx_1 = *(arg1 + 0x2d0)
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)
    
    int64_t* rcx_2 = *(arg1 + 0x2d8)
    *(arg1 + 0x2d0) = 0
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    *(arg1 + 0x2d8) = 0
    sub_142a45c20(arg1 + 0x148, arg2)
    char* rdx_1 = *(arg1 + 0x170)
    result = sub_142aa8420(arg1, rdx_1, rdx_1)
    int64_t* rcx_5 = *(arg1 + 0x300)
    
    if (rcx_5 != 0)
        result = (**rcx_5)(rcx_5, 1)
    
    *(arg1 + 0x300) = 0
    int64_t* rcx_6 = *(arg1 + 0x320)
    
    if (rcx_6 != 0)
        result = (**rcx_6)(rcx_6, 1)
    
    *(arg1 + 0x320) = 0

return result
