// 函数: sub_142bc6ea0
// 地址: 0x142bc6ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *arg1
void* r10 = &rax[1]

if (r10 u<= arg2)
    uint32_t rsi_1 = zx.d(*rax)
    uint32_t rbx_1 = 0
    uint32_t rdi_1 = 0
    uint32_t r9 = 0
    uint32_t r8 = 0
    uint32_t rdx = 0
    int32_t rcx_1 = rsi_1 & 3
    
    if (rcx_1 == 0)
        if (r10 + 1 u<= arg2)
            int32_t rax_12 = sx.d(*r10)
            r10 += 1
            int32_t rbx_7 = rax_12
            rax_12.b <<= 4
            rbx_1 = rbx_7 s>> 4
            rdi_1 = sx.d(rax_12.b) s>> 4
        label_142bc6fbf:
            rsi_1.b u>>= 2
            int32_t rcx_6 = zx.d(rsi_1.b) & 3
            
            if (rcx_6 == 0)
                goto label_142bc7051
            
            if (rcx_6 == 1)
                if (r10 + 1 u<= arg2)
                    uint32_t rax_17 = zx.d(*r10)
                    r10 += 1
                    r9 = rax_17 u>> 4
                    r8 = rax_17 & 0xf
                label_142bc7051:
                    rsi_1.b u>>= 2
                    uint32_t rsi_2 = zx.d(rsi_1.b)
                    int32_t rcx_11 = rsi_2 & 3
                    
                    if (rcx_11 == 0)
                        rdx = arg3
                    label_142bc70d1:
                        *arg4 = rbx_1
                        *arg5 = rdi_1
                        *arg6 = r9
                        *arg7 = r8
                        *arg8 = rdx
                        *arg9 = rsi_2 u>> 2
                        *arg1 = r10
                        return 0
                    
                    if (rcx_11 == 1)
                        if (r10 + 1 u<= arg2)
                            int32_t rdx_6 = sx.d(*r10)
                            r10 += 1
                            rdx = rdx_6 << 8
                            goto label_142bc70d1
                    else if (rcx_11 == 2)
                        r10 += 2
                        
                        if (r10 u<= arg2)
                            rdx = sx.d(zx.w(*(r10 - 2)) << 8) | zx.d(*(r10 - 1))
                            goto label_142bc70d1
                    else
                        if (rcx_11 != 3)
                            goto label_142bc70d1
                        
                        r10 += 3
                        
                        if (r10 u<= arg2)
                            rdx = (zx.d(*(r10 - 3)) << 8 | zx.d(*(r10 - 2))) << 8 | zx.d(*(r10 - 1))
                            goto label_142bc70d1
            else if (rcx_6 != 2)
                if (rcx_6 != 3)
                    goto label_142bc7051
                
                if (r10 + 4 u<= arg2)
                    uint32_t rax_14 = zx.d(*(r10 + 1))
                    uint32_t r9_1 = zx.d(*r10)
                    r10 += 4
                    r9 = r9_1 << 8 | rax_14
                    r8 = zx.d(*(r10 - 2)) << 8 | zx.d(*(r10 - 1))
                    goto label_142bc7051
            else if (r10 + 2 u<= arg2)
                r9 = zx.d(*r10)
                r8 = zx.d(*(r10 + 1))
                r10 += 2
                goto label_142bc7051
    else if (rcx_1 == 1)
        if (r10 + 2 u<= arg2)
            rbx_1 = sx.d(*r10)
            rdi_1 = sx.d(*(r10 + 1))
            r10 += 2
            goto label_142bc6fbf
    else if (rcx_1 != 2)
        if (rcx_1 != 3)
            goto label_142bc6fbf
        
        if (r10 + 6 u<= arg2)
            uint32_t rbx_4 = zx.d(*r10) << 8 | zx.d(*(r10 + 1))
            uint32_t rdi_3 = zx.d(*(r10 + 3)) << 8
            uint32_t rax_3 = zx.d(*(r10 + 2))
            r10 += 6
            rbx_1 = rbx_4 << 8 | rax_3
            rdi_1 = (rdi_3 | zx.d(*(r10 - 2))) << 8 | zx.d(*(r10 - 1))
            goto label_142bc6fbf
    else if (r10 + 4 u<= arg2)
        int32_t rbx_6 = sx.d(zx.w(*r10) << 8)
        uint32_t rax_8 = zx.d(*(r10 + 1))
        r10 += 4
        rbx_1 = rbx_6 | rax_8
        rdi_1 = sx.d(zx.w(*(r10 - 2)) << 8) | zx.d(*(r10 - 1))
        goto label_142bc6fbf

return 8
