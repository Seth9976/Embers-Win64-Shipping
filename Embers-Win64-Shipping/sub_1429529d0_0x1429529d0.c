// 函数: sub_1429529d0
// 地址: 0x1429529d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result = sub_142890040(*(arg1 + 0x40), arg2)

if (result == 0)
    return result

if (((sub_142974080(*(arg1 + 0x40), arg1 + 0x48, 6) - 4) & 0xfffffffd) == 0)
    if (sub_142972740(*(arg1 + 0x60), arg3, arg1 + 0x48) != 0)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(*(arg1 + 0x48) + 0x3f)
        
        if (sub_142890e60(*(arg1 + 0x60), ((temp0_1 & 0x3f) + temp1_1) s>> 6) != 0)
            sub_1429233c0(*(arg1 + 0x60))
            
            if (sub_142972740(*(arg1 + 0x68), arg4, arg1 + 0x48) != 0)
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(*(arg1 + 0x48) + 0x3f)
                
                if (sub_142890e60(*(arg1 + 0x68), ((temp2_1 & 0x3f) + temp3_1) s>> 6) != 0)
                    sub_1429233c0(*(arg1 + 0x68))
                    return 1
else
    sub_1428a5670(0x10, 0xc3, 0x83, "crypto\ec\ec2_smpl.c", 0x6a)

return 0
