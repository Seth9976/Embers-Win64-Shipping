// 函数: sub_142a395c0
// 地址: 0x142a395c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return -1

int64_t* r15 = *arg2

if (r15 == 0)
    return -1

int64_t* r15_1 = *r15
int64_t rbx = *arg1
int64_t rdi_1 = arg1[1] + rbx
int32_t arg_18
int64_t rax_2 = sub_142a3e270(r15_1, rbx, &arg_18, arg3)
arg1[2] = rax_2

if (rax_2 s> 0)
    int64_t rbx_1 = rbx + sx.q(arg_18)
    int64_t arg_20
    
    if (rbx_1 s<= rdi_1 && rdi_1 - rbx_1 s>= 2 && sub_142a3e880(r15_1, rbx_1, 2, &arg_20) == 0)
        int64_t rax_7 = arg_20
        
        if (rax_7 s>= -0x8000 && rax_7 s<= 0x7fff)
            arg1[3].w = rax_7.w
            
            if (rdi_1 - (rbx_1 + 2) s> 0)
                if ((**r15_1)(r15_1, rbx_1 + 2, 1, arg1 + 0x1a) != 0)
                    return 0xfffffffe
                
                int32_t rbp_3 = zx.d(*(arg1 + 0x1a)) u>> 1 & 3
                char arg_10
                
                if (rbp_3 != 0)
                    if (rbx_1 + 3 s< rdi_1 && (**r15_1)(r15_1, rbx_1 + 3, 1, &arg_10) == 0)
                        int64_t rbx_4 = rbx_1 + 4
                        
                        if (rbx_4 s<= rdi_1)
                            int64_t rcx_6 = sx.q(zx.d(arg_10) + 1)
                            arg1[5].d = zx.d(arg_10) + 1
                            int64_t rax_20 = 0x10 * rcx_6
                            
                            if (mulu.dp.q(0x10, rcx_6) u>> 0x40 != zx.o(0))
                                rax_20 = -1
                            
                            int64_t* i_2 = j_sub_140a82f30(rax_20)
                            arg1[4] = i_2
                            int64_t* i_1 = i_2
                            
                            if (i_2 == 0)
                                return 0xffffffff
                            
                            if (rbp_3 == 1)
                                int64_t r12_1 = sx.q(arg1[5].d)
                                int64_t rdx_6 = 0
                                void* rbp_6 = &i_1[r12_1 * 2]
                                arg_20 = 0
                                
                                while (r12_1.d s> 1)
                                    int32_t rsi_1 = 0
                                    uint32_t rcx_9
                                    
                                    do
                                        if (rbx_4 s>= rdi_1)
                                            return 0xfffffffe
                                        
                                        if ((**r15_1)(r15_1, rbx_4, 1, &arg_18) != 0)
                                            return 0xfffffffe
                                        
                                        rcx_9 = zx.d(arg_18.b)
                                        rbx_4 += 1
                                        rsi_1 += rcx_9
                                    while (rcx_9.b u>= 0xff)
                                    int64_t* i_3 = i_1
                                    i_1 = &i_1[2]
                                    
                                    if (i_1 u>= rbp_6)
                                        return 0xfffffffe
                                    
                                    *i_3 = 0
                                    
                                    if (rsi_1 s<= 0)
                                        return 0xfffffffe
                                    
                                    r12_1 = zx.q(r12_1.d - 1)
                                    i_3[1].d = rsi_1
                                    rdx_6 = arg_20 + sx.q(rsi_1)
                                    arg_20 = rdx_6
                                
                                if (i_1 u< rbp_6 && rbx_4 s<= rdi_1 && &i_1[2] == rbp_6)
                                    *i_1 = 0
                                    int64_t rcx_11 = rdi_1 - rbx_4
                                    
                                    if (rcx_11 s>= rdx_6)
                                        int64_t rcx_12 = rcx_11 - rdx_6
                                        
                                        if (rcx_12 - 1 u<= 0x7ffffffe)
                                            i_1[1].d = rcx_12.d
                                            int64_t* rcx_14 = arg1[4]
                                            
                                            while (rcx_14 != rbp_6)
                                                int64_t* rdx_9 = rcx_14
                                                rcx_14 = &rcx_14[2]
                                                int64_t r8_2 = sx.q(rdx_9[1].d) + rbx_4
                                                
                                                if (r8_2 s> rdi_1)
                                                    return 0xfffffffe
                                                
                                                *rdx_9 = rbx_4
                                                rbx_4 = r8_2
                                            
                                        label_142a39b1e:
                                            
                                            if (rbx_4 == rdi_1)
                                                return 0
                            else if (rbp_3 != 2)
                                if (rbx_4 s< rdi_1)
                                    int32_t r12_2 = arg1[5].d
                                    int64_t rax_31 = sub_142a3e270(r15_1, rbx_4, &arg_18, arg3)
                                    int64_t r14_1 = rax_31
                                    
                                    if (rax_31 s> 0 && rax_31 s<= 0x7fffffff)
                                        rbx_4 += sx.q(arg_18)
                                        
                                        if (rbx_4 s<= rdi_1 && r14_1 + rbx_4 s<= rdi_1)
                                            int32_t i = r12_2 - 1
                                            int64_t* rsi_2 = arg1[4]
                                            void* rbp_9 = &rsi_2[sx.q(arg1[5].d) * 2]
                                            int64_t r13_1 = sx.q(r14_1.d)
                                            *rsi_2 = 0
                                            rsi_2[1].d = r14_1.d
                                            
                                            for (; i s> 1; i -= 1)
                                                if (rbx_4 s>= rdi_1)
                                                    return 0xfffffffe
                                                
                                                if (rsi_2 u>= rbp_9)
                                                    return 0xfffffffe
                                                
                                                int64_t rax_34 = sx.q(rsi_2[1].d)
                                                rsi_2 = &rsi_2[2]
                                                
                                                if (rax_34 != r14_1)
                                                    return 0xfffffffe
                                                
                                                if (rsi_2 u>= rbp_9)
                                                    return 0xfffffffe
                                                
                                                *rsi_2 = 0
                                                int64_t rax_35 =
                                                    sub_142a3e270(r15_1, rbx_4, &arg_18, arg3)
                                                
                                                if (rax_35 s< 0)
                                                    return 0xfffffffe
                                                
                                                int64_t rax_36 = sx.q(arg_18)
                                                rbx_4 += rax_36
                                                
                                                if (rbx_4 s> rdi_1)
                                                    return 0xfffffffe
                                                
                                                r14_1 =
                                                    r14_1 + 1 + rax_35 - (1 << (rax_36.b * 7 - 1))
                                                
                                                if (r14_1 s<= 0)
                                                    return 0xfffffffe
                                                
                                                if (r14_1 s> 0x7fffffff)
                                                    return 0xfffffffe
                                                
                                                int64_t rcx_20 = sx.q(r14_1.d)
                                                rsi_2[1].d = r14_1.d
                                                
                                                if (r13_1 s> 0x7fffffffffffffff - rcx_20)
                                                    return 0xfffffffe
                                                
                                                r13_1 += rcx_20
                                            
                                            if (i s<= 0)
                                                goto label_142a39af2
                                            
                                            if (rbx_4 s<= rdi_1 && rsi_2 u< rbp_9
                                                    && sx.q(rsi_2[1].d) == r14_1
                                                    && &rsi_2[2] u< rbp_9 && &rsi_2[4] == rbp_9)
                                                rsi_2[2] = 0
                                                int64_t rcx_22 = rdi_1 - rbx_4
                                                
                                                if (rcx_22 s>= r13_1)
                                                    int64_t rcx_23 = rcx_22 - r13_1
                                                    
                                                    if (rcx_23 - 1 u<= 0x7ffffffe)
                                                        rsi_2[3].d = rcx_23.d
                                                    label_142a39af2:
                                                        int64_t* rcx_25 = arg1[4]
                                                        
                                                        while (rcx_25 != rbp_9)
                                                            int64_t* rdx_16 = rcx_25
                                                            rcx_25 = &rcx_25[2]
                                                            int64_t r8_7 = sx.q(rdx_16[1].d) + rbx_4
                                                            
                                                            if (r8_7 s> rdi_1)
                                                                return 0xfffffffe
                                                            
                                                            *rdx_16 = rbx_4
                                                            rbx_4 = r8_7
                                                        
                                                        goto label_142a39b1e
                            else if (rbx_4 s< rdi_1)
                                int64_t r9_5 = sx.q(arg1[5].d)
                                int64_t rax_28
                                int64_t rdx_10
                                rdx_10:rax_28 = sx.o(rdi_1 - rbx_4)
                                int64_t temp0_1 = divs.dp.q(rdx_10:rax_28, r9_5)
                                
                                if (mods.dp.q(rdx_10:rax_28, r9_5) == 0
                                        && temp0_1 - 1 u<= 0x7ffffffe)
                                    while (i_1 != &i_1[r9_5 * 2])
                                        int64_t rcx_15 = temp0_1 + rbx_4
                                        
                                        if (rcx_15 s> rdi_1)
                                            return 0xfffffffe
                                        
                                        int64_t* i_4 = i_1
                                        i_1 = &i_1[2]
                                        *i_4 = rbx_4
                                        rbx_4 = rcx_15
                                        i_4[1].d = temp0_1.d
                                    
                                    goto label_142a39b1e
                else if (rbx_1 + 3 s<= rdi_1)
                    arg1[5].d = 1
                    int64_t rax_13 = 0x10
                    
                    if (mulu.dp.q(0x10, 1) u>> 0x40 != zx.o(0))
                        rax_13 = -1
                    
                    int64_t* rax_14 = j_sub_140a82f30(rax_13)
                    arg1[4] = rax_14
                    
                    if (rax_14 == 0)
                        return 0xffffffff
                    
                    int64_t rdi_2 = rdi_1 - (rbx_1 + 3)
                    *rax_14 = rbx_1 + 3
                    
                    if (rdi_2 - 1 u<= 0x7ffffffe)
                        rax_14[1].d = rdi_2.d
                        return 0

return 0xfffffffe
