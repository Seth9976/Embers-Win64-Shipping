// 函数: sub_142b99570
// 地址: 0x142b99570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi = 0
*arg3 = 0
*arg4 = 0
*arg6 = 0
uint32_t rcx = 0
uint64_t rdx = zx.q(*(arg1 + 0xc))

if ((rdx + 3).d u< arg1[1].d)
    int64_t rax_1 = arg1[4]
    int32_t* rdx_1
    
    if (rax_1 == 0)
        rdx_1 = rdx + *arg1
        
        if (rdx == neg.q(*arg1))
            goto label_142b995f9
        
        goto label_142b995f7
    
    int32_t arg_8
    
    if (rax_1(arg1, arg5, &arg_8, 4) == 4)
        rdx_1 = &arg_8
    label_142b995f7:
        rcx = ((zx.d(*rdx_1) << 8 | zx.d(*(rdx_1 + 1))) << 8 | zx.d(*(rdx_1 + 2))) << 8
            | zx.d(*(rdx_1 + 3))
    label_142b995f9:
        *(arg1 + 0xc) += 4
        uint64_t rdx_2 = zx.q(*(arg1 + 0xc))
        
        if (rcx != 0x74797031)
            return 2
        
        if ((rdx_2 + 1).d u< arg1[1].d)
            int64_t rax_8 = arg1[4]
            uint32_t arg_20
            int32_t* rax_10
            
            if (rax_8 == 0)
                arg_20 = 0
                rax_10 = rdx_2 + *arg1
                
                if (rdx_2 == neg.q(*arg1))
                    goto label_142b99672
                
                goto label_142b99669
            
            if (rax_8(arg1, rdx_2, &arg_8, 2) == 2)
                rax_10 = &arg_8
            label_142b99669:
                rsi = zx.d(*rax_10) << 8 | zx.d(*(rax_10 + 1))
                arg_20 = rsi
            label_142b99672:
                *(arg1 + 0xc) += 2
                int64_t rax_13 = arg1[4]
                int32_t rdi_1 = *(arg1 + 0xc) + 6
                
                if (rax_13 != 0)
                    if (rax_13(arg1, zx.q(rdi_1), 0, 0) != 0)
                        return 0x55
                else if (rdi_1 u> arg1[1].d)
                    return 0x55
                
                int32_t r14_1 = -1
                *(arg1 + 0xc) = rdi_1
                *arg6 = 0
                int32_t arg_18 = 0
                
                if (rsi != 0)
                    int32_t rdx_9
                    
                    do
                        uint64_t rcx_10 = zx.q(*(arg1 + 0xc))
                        uint32_t rsi_3 = 0
                        
                        if ((rcx_10 + 3).d u>= arg1[1].d)
                            return 0x55
                        
                        int64_t rax_16 = arg1[4]
                        void* rcx_12
                        
                        if (rax_16 == 0)
                            rcx_12 = rcx_10 + *arg1
                            
                            if (rcx_10 != neg.q(*arg1))
                                rsi_3 = ((zx.d(*rcx_12) << 8 | zx.d(*(rcx_12 + 1))) << 8
                                    | zx.d(*(rcx_12 + 2))) << 8 | zx.d(*(rcx_12 + 3))
                        else
                            void var_48
                            
                            if (rax_16(arg1, zx.q(rcx_10.d), &var_48, 4) != 4)
                                return 0x55
                            
                            rcx_12 = &var_48
                            rsi_3 = ((zx.d(*rcx_12) << 8 | zx.d(*(rcx_12 + 1))) << 8
                                | zx.d(*(rcx_12 + 2))) << 8 | zx.d(*(rcx_12 + 3))
                        *(arg1 + 0xc) += 4
                        int32_t rdi_2 = 0
                        int64_t rax_21 = arg1[4]
                        int32_t rbp_2 = *(arg1 + 0xc) + 4
                        
                        if (rax_21 != 0)
                            if (rax_21(arg1, zx.q(rbp_2), 0, 0) == 0)
                                *(arg1 + 0xc) = rbp_2
                            else
                                rdi_2 = 0x55
                        else if (rbp_2 u<= arg1[1].d)
                            *(arg1 + 0xc) = rbp_2
                        else
                            rdi_2 = 0x55
                        
                        arg_8 = rdi_2
                        
                        if (rdi_2 != 0)
                            return zx.q(rdi_2)
                        
                        int32_t rax_23 = sub_142b96d30(arg1, &arg_8)
                        rdi_2 = arg_8
                        *arg3 = rax_23
                        
                        if (rdi_2 != 0)
                            return zx.q(rdi_2)
                        
                        int32_t rax_24 = sub_142b96d30(arg1, &arg_8)
                        rdi_2 = arg_8
                        *arg4 = rax_24
                        
                        if (rdi_2 != 0)
                            return zx.q(rdi_2)
                        
                        if (rsi_3 == 0x43494420)
                            *arg3 += 0x16
                            r14_1 += 1
                            *arg4 -= 0x16
                            *arg6 = 1
                            
                            if (arg2 s< 0 || r14_1 == arg2)
                                return 0
                        else if (rsi_3 == 0x54595031)
                            *arg3 += 0x18
                            r14_1 += 1
                            *arg4 -= 0x18
                            *arg6 = 0
                            
                            if (arg2 s< 0 || r14_1 == arg2)
                                return 0
                        else if (arg2 s>= 0 && r14_1 == arg2)
                            return 0
                        
                        rdx_9 = arg_18 + 1
                        arg_18 = rdx_9
                    while (rdx_9 s< arg_20)
                
                return 0x8e

return 0x55
