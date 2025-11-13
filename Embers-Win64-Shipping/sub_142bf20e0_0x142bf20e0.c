// 函数: sub_142bf20e0
// 地址: 0x142bf20e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r12 = arg1[0x13]
int32_t rsi = 0
uint32_t r15 = arg1[0x12]
uint32_t r13 = arg1[0x14]

if (arg3 != 0)
    int32_t rcx = *arg1
    
    if (rcx == 0)
        int32_t rax_1 = sub_142b97060(*(arg1 + 0xc8), 2, arg5)
        
        if (rax_1 != 0)
        labelid_5:
            *arg1 = 3
        else
            char arg_18
            int32_t rax_2
            int512_t zmm0
            rax_2, zmm0 = sub_142b97130(*(arg1 + 0xc8), &arg_18, rax_1 + 1, arg4)
            
            if (rax_2 != 1)
            label_142bf2376:
                *arg1 = 3
            else
                uint32_t rdx_1 = zx.d(arg_18)
                int32_t rdx_2 = rdx_1 & 0x80
                int32_t rcx_5 = rdx_1 & 0x1f
                arg1[0xd] = rdx_2
                arg1[0xc] = rcx_5
                arg1[0xe] = (rax_2 << rcx_5.b) - 0x100
                
                if (rcx_5 u> 0x10)
                label_142bf2376_1:
                    *arg1 = 3
                else
                    arg1[0xf] = 9
                    int32_t rax_3
                    rax_3.b = rdx_2 != 0
                    r13 = 0
                    arg1[0x10] = rax_3
                    int32_t rax_4 = 0x100
                    
                    if (rcx_5 u<= 9)
                        rax_4 = (rax_2 << rcx_5.b) - 0xff
                    
                    arg1[0x11] = rax_4
                    uint32_t rax_5
                    rax_5, arg4 = sub_142bf1f80(arg1, zmm0)
                    
                    if (rax_5 u> 0xff)
                    label_142bf2376_2:
                        *arg1 = 3
                    else
                        r12 = rax_5
                        r15 = rax_5
                        
                        if (arg2 != 0)
                            *arg2 = rax_5.b
                        
                        rsi = 1
                        
                        if (arg3 u> 1)
                            *arg1 = 1
                            goto label_142bf21f8
    else
        if (rcx == 1)
            goto label_142bf21f8
        
        if (rcx == 2)
            while (true)
                while (arg1[0x1e] u> 0)
                    arg1[0x1e] -= 1
                    
                    if (arg2 != 0)
                        arg2[zx.q(rsi)] = *(zx.q(arg1[0x1e]) + *(arg1 + 0x70))
                    
                    rsi += 1
                    
                    if (rsi == arg3)
                        goto label_142bf2388
                
                int32_t rax_21 = arg1[0x10]
                
                if (rax_21 u< arg1[0xe])
                    if (rax_21 u>= arg1[0x1a])
                        int32_t rax_22
                        rax_22, arg4 = sub_142bf23b0(arg1)
                        
                        if (rax_22 s< 0)
                            goto label_142bf2376_2
                    
                    *(*(arg1 + 0x58) + (zx.q(arg1[0x10]) << 1)) = r15.w
                    *(zx.q(arg1[0x10]) + *(arg1 + 0x60)) = r12.b
                    arg1[0x10] += 1
                
                r15 = r13
                *arg1 = 1
            label_142bf21f8:
                uint32_t rax_6
                rax_6, arg4 = sub_142bf1f80(arg1, arg4)
                uint32_t rdi_1 = rax_6
                
                if (rax_6 s< 0)
                    goto label_142bf2376_2
                
                if (rax_6 == 0x100 && arg1[0xd] != 0)
                    r15 = 0
                    arg1[0x10] = 0
                    r12 = 0
                    arg1[8].b = 1
                    goto label_142bf21f8
                
                r13 = rax_6
                
                if (rax_6 u>= 0x100)
                    int32_t rcx_8 = arg1[0x10]
                    
                    if (rax_6 - 0x100 u>= rcx_8)
                        if (rax_6 - 0x100 u> rcx_8)
                            goto label_142bf2376_2
                        
                        if (zx.q(arg1[0x1e]) u>= *(arg1 + 0x80))
                            int32_t rax_9
                            rax_9, arg4 = sub_142bf2450(arg1)
                            
                            if (rax_9 s< 0)
                                goto label_142bf2376_2
                        
                        rdi_1 = r15
                        *(zx.q(arg1[0x1e]) + *(arg1 + 0x70)) = r12.b
                        arg1[0x1e] += 1
                    
                    if (rdi_1 u>= 0x100)
                    label_142bf2280:
                        
                        if (*(arg1 + 0x58) == 0)
                            goto label_142bf2376_2
                        
                        if (zx.q(arg1[0x1e]) u>= *(arg1 + 0x80))
                            int32_t rax_12
                            rax_12, arg4 = sub_142bf2450(arg1)
                            
                            if (rax_12 s< 0)
                                break
                        
                        uint64_t r8_4 = zx.q(rdi_1 - 0x100)
                        *(zx.q(arg1[0x1e]) + *(arg1 + 0x70)) = *(r8_4 + *(arg1 + 0x60))
                        arg1[0x1e] += 1
                        rdi_1 = zx.d(*(*(arg1 + 0x58) + (r8_4 << 1)))
                        
                        if (rdi_1 u>= 0x100)
                            goto label_142bf2280
                
                r12 = rdi_1
                
                if (zx.q(arg1[0x1e]) u>= *(arg1 + 0x80))
                    int32_t rax_17
                    rax_17, arg4 = sub_142bf2450(arg1)
                    
                    if (rax_17 s< 0)
                        goto label_142bf2376_2
                
                *(zx.q(arg1[0x1e]) + *(arg1 + 0x70)) = rdi_1.b
                arg1[0x1e] += 1
                *arg1 = 2
            
            goto label_142bf2376_2

label_142bf2388:
arg1[0x12] = r15
arg1[0x13] = r12
arg1[0x14] = r13
return zx.q(rsi)
