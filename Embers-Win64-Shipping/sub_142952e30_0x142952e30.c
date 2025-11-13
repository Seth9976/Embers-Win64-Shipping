// 函数: sub_142952e30
// 地址: 0x142952e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = 0

if (arg3 == 0 || arg4 == 0)
    sub_1428a5670(0x10, 0xa3, 0x43, "crypto\ec\ec2_smpl.c", 0x120)
    return 0

if (sub_142890040(*(arg2 + 0x10), arg3) != 0)
    sub_1428908e0(*(arg2 + 0x10), 0)
    
    if (sub_142890040(*(arg2 + 0x18), arg4) != 0)
        sub_1428908e0(*(arg2 + 0x18), 0)
        
        if (sub_142890040(*(arg2 + 0x20), &data_1434e8ea8) != 0)
            sub_1428908e0(*(arg2 + 0x20), 0)
            rdi = 1
            *(arg2 + 0x28) = 1

return zx.q(rdi)
