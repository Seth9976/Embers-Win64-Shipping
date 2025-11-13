// 函数: sub_1428f2a00
// 地址: 0x1428f2a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 != 0)
    arg1[1] = arg2[1]
    uint64_t rbx_1 = zx.q(*arg2)
    int64_t rsi_1 = *(arg2 + 8)
    
    if (rbx_1.d s>= 0)
    label_1428f2a61:
        int64_t rax_2
        
        if (*arg1 s> rbx_1.d)
            rax_2 = *(arg1 + 8)
        
        if (*arg1 s> rbx_1.d && rax_2 != 0)
        label_1428f2ad5:
            *arg1 = rbx_1.d
            
            if (rsi_1 != 0)
                int64_t rbx_2 = sx.q(rbx_1.d)
                memcpy(rax_2, rsi_1, rbx_2.d)
                *(rbx_2 + *(arg1 + 8)) = 0
            
            arg1[4] &= 0x80
            arg1[4] |= arg2[4] & 0xffffff7f
            return 1
        
        int64_t r12_1 = *(arg1 + 8)
        rax_2 = sub_1428a67c0(r12_1, sx.q((rbx_1 + 1).d), "crypto\asn1\asn1_lib.c", 0x11c)
        *(arg1 + 8) = rax_2
        
        if (rax_2 != 0)
            goto label_1428f2ad5
        
        sub_1428a5670((rax_2 + 0xd).d, 0xba, (rax_2 + 0x41).d, "crypto\asn1\asn1_lib.c", 0x11e)
        *(arg1 + 8) = r12_1
    else if (rsi_1 != 0)
        rbx_1 = -1
        
        do
            rbx_1 += 1
        while (*(rsi_1 + rbx_1) != 0)
        
        goto label_1428f2a61

return 0
