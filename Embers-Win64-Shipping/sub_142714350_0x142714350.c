// 函数: sub_142714350
// 地址: 0x142714350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x22) & 2) != 0)
    return 

if (arg2 == 1)
label_1427143a3:
    uint32_t rdx = zx.d(*(arg1 + 0x21))
    
    if (rdx == 0)
        *(arg1 + 0x18) = arg4 f+ *(arg1 + 0x18)
    else if (rdx == 1)
        if (*(arg1 + 0x1c) == 0)
            *(arg1 + 0x18) = arg4
        else if (not(arg4 f>= *(arg1 + 0x18)))
            *(arg1 + 0x1c) += 1
            *(arg1 + 0x1e) += 1
            *(arg1 + 0x18) = arg4
            return 
    else if (rdx == 2)
        if (*(arg1 + 0x1c) == 0)
            *(arg1 + 0x18) = arg4
        else if (not(arg4 f<= *(arg1 + 0x18)))
            *(arg1 + 0x1c) += 1
            *(arg1 + 0x1e) += 1
            *(arg1 + 0x18) = arg4
            return 
    else if (rdx == 3)
        arg4 = arg4 f* *(arg1 + 0x18)
        *(arg1 + 0x1c) += 1
        *(arg1 + 0x1e) += 1
        *(arg1 + 0x18) = arg4
        return 
    
    *(arg1 + 0x1c) += 1
else
    bool cond:0_1
    
    if (arg3 == 0)
        cond:0_1 = arg4 >= arg5
    label_14271439f:
        
        if (cond:0_1 != 0)
            goto label_1427143a3
    else
        if (arg3 == 1)
            cond:0_1 = arg6 >= arg4
            goto label_14271439f
        
        if (arg3 == 2 && not(arg4 < arg5) && not(arg4 > arg6))
            goto label_1427143a3

*(arg1 + 0x1e) += 1
