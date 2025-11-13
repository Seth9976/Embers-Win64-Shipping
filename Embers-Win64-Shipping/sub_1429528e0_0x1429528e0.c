// 函数: sub_1429528e0
// 地址: 0x1429528e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (sub_142890040(*(arg1 + 0x40), *(arg2 + 0x40)) != 0
        && sub_142890040(*(arg1 + 0x60), *(arg2 + 0x60)) != 0
        && sub_142890040(*(arg1 + 0x68), *(arg2 + 0x68)) != 0)
    int32_t rcx_3 = *(arg2 + 0x48)
    *(arg1 + 0x48) = rcx_3
    *(arg1 + 0x4c) = *(arg2 + 0x4c)
    *(arg1 + 0x50) = *(arg2 + 0x50)
    *(arg1 + 0x54) = *(arg2 + 0x54)
    *(arg1 + 0x58) = *(arg2 + 0x58)
    *(arg1 + 0x5c) = *(arg2 + 0x5c)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rcx_3 + 0x3f)
    
    if (sub_142890e60(*(arg1 + 0x60), ((temp0_1 & 0x3f) + temp1_1) s>> 6) != 0)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(*(arg1 + 0x48) + 0x3f)
        
        if (sub_142890e60(*(arg1 + 0x68), ((temp2_1 & 0x3f) + temp3_1) s>> 6) != 0)
            sub_1429233c0(*(arg1 + 0x60))
            sub_1429233c0(*(arg1 + 0x68))
            return 1

return 0
