// 函数: sub_1428ab2a0
// 地址: 0x1428ab2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 != 0)
    int32_t rdx_1 = *(arg2 + 0x10) | *(arg1 + 0x10)
    
    if ((rdx_1.b & 0x10) != 0)
        *(arg1 + 0x10) = 0
    
    if ((rdx_1.b & 8) == 0)
        int32_t rax_1 = *(arg2 + 0x18)
        int32_t r12_2 = rdx_1 & 1
        int32_t r15_1
        
        if ((rdx_1.b & 2) == 0)
            r15_1 = 0
            
            if (rax_1 != 0 && (r12_2 != 0 || *(arg1 + 0x18) == 0))
                goto label_1428ab318
            
            if (*(arg2 + 0x1c) == 0 || (r12_2 == 0 && *(arg1 + 0x1c) != 0))
                goto label_1428ab33c
            
            goto label_1428ab334
        
        r15_1 = 1
    label_1428ab318:
        *(arg1 + 0x18) = rax_1
        
        if (r15_1 == 0 && (*(arg2 + 0x1c) == 0 || (r12_2 == 0 && *(arg1 + 0x1c) != 0)))
        label_1428ab33c:
            
            if (*(arg2 + 0x20) == 0xffffffff || (r12_2 == 0 && *(arg1 + 0x20) != 0xffffffff))
                goto label_1428ab358
            
            goto label_1428ab350
        
    label_1428ab334:
        *(arg1 + 0x1c) = *(arg2 + 0x1c)
        
        if (r15_1 == 0
            && (*(arg2 + 0x20) == 0xffffffff || (r12_2 == 0 && *(arg1 + 0x20) != 0xffffffff)))
        label_1428ab358:
            
            if (*(arg2 + 0x24) == 0xffffffff || (r12_2 == 0 && *(arg1 + 0x24) != 0xffffffff))
                goto label_1428ab379
            
            goto label_1428ab36c
        
    label_1428ab350:
        *(arg1 + 0x20) = *(arg2 + 0x20)
        int32_t rcx
        
        if (r15_1 != 0
            || (*(arg2 + 0x24) != 0xffffffff && (r12_2 != 0 || *(arg1 + 0x24) == 0xffffffff)))
        label_1428ab36c:
            *(arg1 + 0x24) = *(arg2 + 0x24)
            
            if (r15_1 == 0)
                goto label_1428ab379
            
            rcx = *(arg1 + 0x14)
        label_1428ab385:
            rcx &= 0xfffffffd
            *(arg1 + 8) = *(arg2 + 8)
            *(arg1 + 0x14) = rcx
        else
        label_1428ab379:
            rcx = *(arg1 + 0x14)
            
            if ((rcx.b & 2) == 0)
                goto label_1428ab385
        
        if ((rdx_1.b & 4) != 0)
            *(arg1 + 0x14) = 0
            rcx = 0
        
        *(arg1 + 0x14) = *(arg2 + 0x14) | rcx
        
        if (r15_1 != 0 || (*(arg2 + 0x28) != 0 && (r12_2 != 0 || *(arg1 + 0x28) == 0)))
            int32_t* r14_1 = *(arg2 + 0x28)
            sub_142898cb0(*(arg1 + 0x28), sub_1428cd400)
            
            if (r14_1 != 0)
                void* rax_8 = sub_142898ba0()
                *(arg1 + 0x28) = rax_8
                
                if (rax_8 == 0)
                    return 0
                
                int32_t rsi_1 = 0
                
                if (sub_142898c70(r14_1) s> 0)
                    int32_t rax_13
                    
                    do
                        int64_t* rax_11 = sub_1428f64c0(sub_142898ea0(r14_1, rsi_1))
                        
                        if (rax_11 == 0)
                            return 0
                        
                        if (sub_142898d50(*(arg1 + 0x28), rax_11) == 0)
                            sub_1428cd400(rax_11)
                            return 0
                        
                        rsi_1 += 1
                        rax_13 = sub_142898c70(r14_1)
                    while (rsi_1 s< rax_13)
                
                *(arg1 + 0x14) |= 0x80
            else
                *(arg1 + 0x28) = 0
            
            if (r15_1 != 0 || (*(arg2 + 0x30) != 0 && (r12_2 != 0 || *(arg1 + 0x30) == 0)))
                goto label_1428ab469
            
            goto label_1428ab4a2
        
        if (*(arg2 + 0x30) == 0 || (r12_2 == 0 && *(arg1 + 0x30) != 0))
        label_1428ab4a2:
            
            if (*(arg2 + 0x48) != 0 && (r12_2 != 0 || *(arg1 + 0x48) == 0))
            label_1428ab4c3:
                
                if (sub_1428ab720(arg1 + 0x48, arg1 + 0x50, *(arg2 + 0x48), *(arg2 + 0x50)) == 0)
                    return 0
                
                if (r15_1 != 0)
                    goto label_1428ab4ed
        else
        label_1428ab469:
            sub_142898cb0(*(arg1 + 0x30), sub_1428ab800)
            *(arg1 + 0x30) = 0
            int128_t* rcx_8 = *(arg2 + 0x30)
            
            if (rcx_8 != 0)
                int128_t* rax_14 = sub_1428986d0(rcx_8, sub_1428ab7d0, sub_1428ab800)
                *(arg1 + 0x30) = rax_14
                
                if (rax_14 == 0)
                    return 0
                
                *(arg1 + 0x38) = *(arg2 + 0x38)
            
            if (r15_1 != 0 || (*(arg2 + 0x48) != 0 && (r12_2 != 0 || *(arg1 + 0x48) == 0)))
                goto label_1428ab4c3
        
        if (*(arg2 + 0x58) != 0 && (r12_2 != 0 || *(arg1 + 0x58) == 0))
        label_1428ab4ed:
            
            if (sub_1428ab6c0(arg1, *(arg2 + 0x58), *(arg2 + 0x60)) == 0)
                return 0

return 1
