// 函数: sub_14243de40
// 地址: 0x14243de40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    *(arg1 + 0x24) = arg2
else
    if (arg3 == 1)
        *(arg1 + 0x24) += arg2
        int32_t rax_3 = *(arg1 + 0x20)
        
        if (*(arg1 + 0x24) u< rax_3)
            rax_3 = *(arg1 + 0x24)
        
        *(arg1 + 0x24) = rax_3
        return rax_3
    
    if (arg3 == 2)
        *(arg1 + 0x24) = *(arg1 + 0x20) - arg2
        int32_t rax_2 = *(arg1 + 0x20)
        
        if (*(arg1 + 0x24) u< rax_2)
            rax_2 = *(arg1 + 0x24)
        
        *(arg1 + 0x24) = rax_2
        return rax_2

int32_t rax_4 = *(arg1 + 0x20)

if (*(arg1 + 0x24) u< rax_4)
    rax_4 = *(arg1 + 0x24)

*(arg1 + 0x24) = rax_4
return rax_4
