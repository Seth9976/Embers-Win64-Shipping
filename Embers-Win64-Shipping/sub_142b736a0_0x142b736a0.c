// 函数: sub_142b736a0
// 地址: 0x142b736a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0x40
int32_t rsi = 0
int32_t rax_1 = arg1[6].d s>> 4
int32_t arg_20 = 0x40
int32_t rbx = 0x94
int32_t arg_8 = 0x94
int32_t var_58 = 0
int32_t r12 = 4
int32_t r10 = arg2

if (rax_1 s> 0)
    int64_t r15_1 = 0
    int64_t var_50_1 = 4
    
    while (true)
        if (rsi == r10)
            r14 = 0x10
            r12 = 1
            arg_20 = 0x10
            var_50_1 = 1
        
        int64_t r8 = *arg1
        uint64_t rbp_1 = zx.q(*(r8 + (r15_1 << 2)))
        
        if (*(r15_1 + arg1 + 0x40) != 1)
            if (r12 s<= 1)
                goto label_142b73776
            
            int32_t rdx_1 = rsi + r12
            int64_t rcx_4 = r15_1 + 1
            
            if (rsi + 1 s>= rdx_1)
                goto label_142b73776
            
            int32_t* rax_9 = r8 + (rcx_4 << 2)
            
            while (true)
                if (*rax_9 != rbp_1.d)
                    if (sub_142b73be0(arg1, rsi) s< 0)
                        return 0xffffffff
                    
                    break
                
                rcx_4 += 1
                rax_9 = &rax_9[1]
                
                if (rcx_4 s>= sx.q(rdx_1))
                    goto label_142b73776
            
            rbx += r14
            arg_8 = rbx
        else
            int64_t rax_2 = arg1[2]
            uint64_t rcx_1 = zx.q(rbp_1.d)
            rbp_1 = zx.q(*(rax_2 + (rbp_1 << 2)))
            int32_t* rax_4 = rax_2 + (rcx_1 << 2) + 4
            void* rcx_3 = &rax_4[sx.q(r14 - 1)]
            bool cond:1_1 = rax_4 != rcx_3
            
            if (rax_4 u< rcx_3)
                while (*rax_4 == rbp_1.d)
                    rax_4 = &rax_4[1]
                    
                    if (rax_4 u>= rcx_3)
                        break
                
                cond:1_1 = rax_4 != rcx_3
            
            if (cond:1_1)
                rbx += r14
                arg_8 = rbx
            else
                *(r15_1 + arg1 + 0x40) = 0
                *(*arg1 + (r15_1 << 2)) = rbp_1.d
            label_142b73776:
                int64_t rax_6 = sx.q(arg3[1])
                int32_t r9_1
                
                if (rax_6.d s< 0 || arg3[rax_6 + 0x22] != rbp_1.d)
                    int64_t r8_1 = sx.q(*arg3)
                    int32_t i = 0
                    int64_t rdx_4 = 0
                    
                    if (r8_1.d s> 0)
                        int32_t* rax_12 = &arg3[0x22]
                        
                        do
                            if (*rax_12 == rbp_1.d)
                                arg3[1] = i
                                arg3[rdx_4 + 0x42] += r12
                                r9_1 = arg3[rdx_4 + 2]
                                goto label_142b7384d
                            
                            i += 1
                            rdx_4 += 1
                            rax_12 = &rax_12[1]
                        while (i s< r8_1.d)
                    
                    if (r8_1.d == 0x20)
                        goto label_142b73857
                    
                    arg3[1] = r8_1.d
                    arg3[r8_1 + 2] = rsi
                    arg3[sx.q(*arg3) + 0x22] = rbp_1.d
                    arg3[sx.q(*arg3) + 0x42] = r12
                    *arg3 += 1
                    rbx += r14
                    arg_8 = rbx
                else
                    arg3[rax_6 + 0x42] += r12
                    r9_1 = arg3[sx.q(arg3[1]) + 2]
                label_142b7384d:
                    
                    if (r9_1 != 0xfffffffe)
                    label_142b73994:
                        r14 = arg_20
                        
                        if (r9_1 s< 0)
                            rbx += r14
                            arg_8 = rbx
                        else
                            *(r15_1 + arg1 + 0x40) = 2
                            *(*arg1 + (r15_1 << 2)) = r9_1
                    else
                    label_142b73857:
                        r9_1 = 0
                        int64_t rcx_6 = 0
                        int64_t rdx_5 = 4
                        int32_t r14_1 = 4
                        
                        if (r15_1 != 0)
                            while (true)
                                if (rcx_6 == sx.q(r10))
                                    rdx_5 = 1
                                    r14_1 = 1
                                
                                if (*(rcx_6 + arg1 + 0x40) == 0
                                        && *(*arg1 + (rcx_6 << 2)) == rbp_1.d)
                                    int32_t rbx_2 = *arg3
                                    int32_t rsi_1 = -1
                                    int64_t r11_2 = -1
                                    int32_t rax_17 = 0
                                    int64_t r8_4 = 0
                                    int32_t r10_2 = 0x11000
                                    
                                    if (rbx_2 s> 0)
                                        void* rdx_7 = &arg3[0x42]
                                        
                                        do
                                            int32_t rcx_8 = *rdx_7
                                            
                                            if (rcx_8 s< r10_2)
                                                rsi_1 = rax_17
                                                r11_2 = r8_4
                                                r10_2 = rcx_8
                                            
                                            rax_17 += 1
                                            r8_4 += 1
                                            rdx_7 += 4
                                        while (rax_17 s< rbx_2)
                                    
                                    rbx = arg_8
                                    arg3[1] = rsi_1
                                    rsi = var_58
                                    arg3[r11_2 + 0x42] = r14_1 + r12
                                    arg3[r11_2 + 2] = r9_1
                                    arg3[r11_2 + 0x22] = rbp_1.d
                                    break
                                
                                r9_1 += r14_1
                                rcx_6 += rdx_5
                                
                                if (rcx_6 == r15_1)
                                    goto label_142b7389d
                            
                            goto label_142b73994
                        
                    label_142b7389d:
                        int32_t r11_1 = *arg3
                        int32_t rbx_1 = -1
                        int64_t r10_1 = -1
                        int32_t rax_16 = 0
                        int64_t r8_3 = 0
                        int32_t r9_2 = 0x11000
                        
                        if (r11_1 s> 0)
                            void* rcx_7 = &arg3[0x42]
                            
                            do
                                int32_t rdx_6 = *rcx_7
                                
                                if (rdx_6 s< r9_2)
                                    rbx_1 = rax_16
                                    r10_1 = r8_3
                                    r9_2 = rdx_6
                                
                                rax_16 += 1
                                r8_3 += 1
                                rcx_7 += 4
                            while (rax_16 s< r11_1)
                        
                        r14 = arg_20
                        arg3[1] = rbx_1
                        arg3[r10_1 + 2] = rsi
                        arg3[r10_1 + 0x22] = rbp_1.d
                        arg3[r10_1 + 0x42] = r12
                        rbx = arg_8 + r14
                        arg_8 = rbx
        
        r15_1 += var_50_1
        rsi += r12
        var_58 = rsi
        
        if (r15_1 s>= sx.q(rax_1))
            break
        
        r10 = arg2

return zx.q(rbx)
