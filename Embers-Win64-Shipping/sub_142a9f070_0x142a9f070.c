// 函数: sub_142a9f070
// 地址: 0x142a9f070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0 && (*(arg1 + 0x20) & 1) == 0)
    int32_t* rcx = *(arg1 + 0x10)
    
    if (*rcx != 0)
        if (sub_142a9f6f0(arg1, *(arg1 + 0x1c) + 1) != 0)
            int64_t rdx_4 = *(arg1 + 0x10)
            memmove(rdx_4 + 4, rdx_4, *(arg1 + 0x1c) << 2)
            **(arg1 + 0x10) = 0
            *(arg1 + 0x1c) += 1
            goto label_142a9f0e9
    else
        memmove(rcx, &rcx[1], (*(arg1 + 0x1c) - 1) << 2)
        *(arg1 + 0x1c) -= 1
    label_142a9f0e9:
        int64_t rcx_3 = *(arg1 + 0x40)
        
        if (rcx_3 != 0)
            sub_142a7dcd0(rcx_3)
            *(arg1 + 0x40) = 0
            *(arg1 + 0x48) = 0

return arg1
