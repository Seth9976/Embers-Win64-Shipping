// 函数: sub_1427c63c0
// 地址: 0x1427c63c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
*arg5 = 0
*arg6 = 0

if (arg2 u>= 4)
    uint32_t r10_3 = (zx.d(arg1[2]) << 0x10) + (zx.d(arg1[1]) << 8)
    uint32_t rax_3 = zx.d(*arg1)
    uint64_t r10_4 = zx.q(r10_3 + rax_3)
    int32_t rcx
    
    if (r10_3 != neg.d(rax_3))
        rcx = 4
    label_1427c6453:
        
        if (rcx + r10_4.d u<= arg2 && arg1[3] == 1)
            uint64_t rdx = zx.q(rcx)
            uint64_t r9 = zx.q(r10_4.d)
            void* r8 = &arg1[rdx]
            *arg7 = &arg1[r10_4 + rdx]
            
            if (r10_4.d != 0)
                uint64_t rax_19
                uint64_t temp4_1
                
                do
                    if (r9.d u< 4)
                        return 3
                    
                    uint32_t rax_13 = (zx.d(*(r8 + 2)) << 0x10) + (zx.d(*(r8 + 1)) << 8)
                    uint32_t rcx_5 = zx.d(*r8)
                    uint32_t rax_14 = rax_13 + rcx_5
                    int64_t rcx_11
                    
                    if (rax_13 != neg.d(rcx_5))
                        rcx_11 = 4
                    else
                        if (r9.d u< 8)
                            return 3
                        
                        rax_14 = (zx.d(*(r8 + 7)) << 0x18) + (zx.d(*(r8 + 6)) << 0x10)
                            + (zx.d(*(r8 + 5)) << 8) + zx.d(*(r8 + 4))
                        rcx_11 = 8
                    
                    uint32_t rdx_1 = zx.d(*(r8 + 3))
                    int32_t r10_9 = rcx_11.d + rax_14
                    
                    if (r10_9 u> r9.d)
                        return 3
                    
                    void* r8_1 = r8 + rcx_11
                    uint32_t rcx_13
                    
                    if (rdx_1 == 2)
                        *arg4 = r8_1
                        rcx_13 = rax_14
                    label_1427c6526:
                        
                        if (rcx_13 != 0)
                            int32_t rdx_4 = *arg3
                            
                            if (rdx_4 != 0 && rcx_13 != rdx_4)
                                return 3
                            
                            *arg3 = rcx_13
                    else
                        if (rdx_1 == 3)
                            *arg5 = r8_1
                            rcx_13 = rax_14 u>> 2
                            goto label_1427c6526
                        
                        if (rdx_1 == 4)
                            *arg6 = r8_1
                            rcx_13 = rax_14 u>> 2
                            goto label_1427c6526
                    r8 = r8_1 + zx.q(rax_14)
                    rax_19 = zx.q(r10_9)
                    temp4_1 = r9
                    r9 -= rax_19
                while (temp4_1 != rax_19)
            
            if (*arg4 != 0 && *arg5 != 0)
                return 0
    else if (arg2 u>= 8)
        r10_4 = zx.q((zx.d(arg1[7]) << 0x18) + (zx.d(arg1[6]) << 0x10) + (zx.d(arg1[5]) << 8)
            + zx.d(arg1[4]))
        rcx = 8
        goto label_1427c6453

return 3
