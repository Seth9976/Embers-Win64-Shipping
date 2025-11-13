// 函数: sub_142864400
// 地址: 0x142864400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (arg3 != 0)
    int64_t rax_1
    
    if (*(arg3 + 0xc) != 0)
        rax_1 = sub_14285b4c0((*(arg3 + 0x10)).b)
    
    if (*(arg3 + 0xc) == 0 || rax_1 != 0)
        int32_t* rdx = *(arg1 + 8)
        int32_t rcx_2 = *(*(rdx + 0xc0) + 0x60) & 8
        int32_t rax_3
        
        if (rcx_2 == 0)
            rax_3 = *rdx
        
        if (rcx_2 != 0 || rax_3 s< 0x304 || rax_3 == 0x10000 || *(arg3 + 0x14) != 0x74)
            if (*(arg1 + 0x38) != 0 || rcx_2 != 0 || *(*(arg1 + 0xa8) + 0x33c) s< 0x304)
            label_14286449e:
                
                if (sub_1428590d0(sx.q(*(arg3 + 0x18))) == 0)
                    int32_t rcx_4 = *(arg3 + 0x14)
                    
                    if (rcx_4 - 0x3d3 u> 1 && rcx_4 != 0x32b)
                    label_142864679:
                        
                        if (*(arg3 + 0xc) == 0)
                            return 1
                        
                        int32_t rax_22 = sub_1428916c0(sub_14285b4c0((*(arg3 + 0x10)).b))
                        uint16_t rcx_17 = *(arg3 + 8)
                        int32_t r9 = *(arg3 + 0xc)
                        char arg_18 = (rcx_17 u>> 8).b
                        char arg_19 = rcx_17.b
                        return sub_1428546e0(arg1, arg2, rax_22 << 2, r9, &arg_18)
                    
                    int32_t* rcx_5 = *(arg1 + 8)
                    
                    if (*(arg1 + 0x38) == 0)
                        if (*rcx_5 != 0x10000)
                            goto label_142864679
                        
                        void* rax_11 = *(arg1 + 0xa8)
                        
                        if (*(rax_11 + 0x340) s< 0x304)
                            goto label_142864679
                        
                        if (*(rax_11 + 0x33c) s< 0x304)
                            int32_t* rax_12 = sub_14284fa00(arg1)
                            int32_t r14_1
                            
                            if (rax_12 == 0)
                                r14_1 = 0
                            else
                                r14_1 = sub_142898c70(rax_12)
                            
                            int32_t rdi_1 = 0
                            
                            if (r14_1 s> 0)
                                do
                                    void* rax_14 = sub_142898ea0(rax_12, rdi_1)
                                    void* r8 = *(arg1 + 0xa8)
                                    
                                    if ((*(rax_14 + 0x1c) & *(r8 + 0x334)) == 0
                                            && (*(rax_14 + 0x20) & *(r8 + 0x338)) == 0)
                                        int32_t rdx_2 = *(r8 + 0x340)
                                        
                                        if (rdx_2 != 0)
                                            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                                                int32_t rax_17 = *(rax_14 + 0x34)
                                                
                                                if (rax_17 == 0x100)
                                                    rax_17 = 0xff00
                                                
                                                if (rdx_2 == 0x100)
                                                    rdx_2 = 0xff00
                                                
                                                if (rax_17 s>= rdx_2)
                                                    int32_t rcx_12 = *(rax_14 + 0x38)
                                                    int32_t rax_18 = *(r8 + 0x33c)
                                                    
                                                    if (rcx_12 == 0x100)
                                                        rcx_12 = 0xff00
                                                    
                                                    if (rax_18 == 0x100)
                                                        rax_18 = 0xff00
                                                    
                                                    if (rcx_12 s<= rax_18)
                                                        goto label_14286463f
                                            else if (*(rax_14 + 0x2c) s<= rdx_2
                                                && *(rax_14 + 0x30) s>= *(r8 + 0x33c))
                                            label_14286463f:
                                                int32_t rcx_14
                                                rcx_14.b = sub_1428546e0(arg1, 0x10001, 
                                                    *(rax_14 + 0x44), 0, rax_14) == 0
                                                
                                                if (rcx_14 == 0 && (*(rax_14 + 0x1c) & 0x10) != 0)
                                                    break
                                    
                                    rdi_1 += 1
                                while (rdi_1 s< r14_1)
                            
                            if (rdi_1 != r14_1)
                                goto label_142864679
                    else
                        if ((*(*(rcx_5 + 0xc0) + 0x60) & 8) != 0)
                            goto label_142864679
                        
                        int32_t rax_9 = *rcx_5
                        
                        if (rax_9 s< 0x304 || rax_9 == 0x10000)
                            goto label_142864679
            else if (*(arg3 + 0x14) != 0x74)
                int32_t rax_5 = *(arg3 + 0x10)
                
                if (rax_5 u> 1 && rax_5 != 0xa)
                    goto label_14286449e

return 0
