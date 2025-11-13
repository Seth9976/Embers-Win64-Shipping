// 函数: sub_141a6c0c0
// 地址: 0x141a6c0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
int32_t result = sub_141a51970(arg1)
int64_t r14 = 0
int32_t result_1 = result
int64_t var_90 = 0
int64_t rdi = 0
int32_t var_84 = 0
int32_t r12 = 0
int32_t result_2 = 0

if (result s>= 0)
    do
        int32_t r13_1 = 0
        
        if (r12 s< 0)
            int32_t var_88_1 = 0
            
            if (r12 != 0)
                sub_1405c5570(&var_90, 0)
                r13_1 = var_88_1
                rdi = var_90
                r12 = var_84
        
        int64_t* rax_1 = (*(*rbx + 0x2e0))(rbx)
        int64_t* rsi_1 = *rax_1
        uint64_t r15_2 = sx.q(rax_1[1].d) << 3 u>> 3
        
        if (rsi_1 u> &rsi_1[rax_1[1]])
            r15_2 = 0
        
        if (r15_2 != 0)
            do
                void* rbx_1 = *rsi_1
                
                if (rbx_1 != 0 && *(rbx_1 + 0xa8) == result_2)
                    int64_t rdi_1 = sx.q(r13_1)
                    r13_1 = (rdi_1 + 1).d
                    
                    if (r13_1 s> r12)
                        sub_1405a4d70(&var_90)
                        r12 = var_84
                    
                    rdi = var_90
                    *(rdi + (rdi_1 << 3)) = rbx_1
                
                rsi_1 = &rsi_1[1]
                r14 += 1
            while (r14 != r15_2)
        
        r14 = 0
        int32_t var_80_1 = 0
        int64_t rax_6 = 0
        int64_t var_a8_1 = 0
        
        if (r13_1 s> 0)
            int32_t rcx_18
            
            do
                void* rbx_2 = *(rdi + (rax_6 << 3))
                void* var_68 = rbx_2
                int32_t rax_8 = (*(*arg1 + 0x2b0))(arg1, &var_68)
                
                if (((rax_8 u>> 2).b & 1) == 0)
                    *(rbx_2 + 0x70) = 0
                
                if (((rax_8 u>> 3).b & 1) == 0)
                    *(rbx_2 + 0x88) = 0
                
                if ((rax_8.b & 3) == 3)
                    void* rax_11 = sub_140d226f0(rbx_2, sub_141a7bc30())
                    int32_t r10_1 = 0
                    int64_t rax_12 = var_a8_1
                    int32_t r11_1 = 0
                    int128_t var_78 = *(rbx_2 + 0x90)
                    int32_t rsi_2 = var_78:0xc.d
                    int32_t r12_1 = 0
                    int64_t rbx_3 = var_78:8.q
                    int64_t r15_3 = 0
                    int64_t rdi_2 = var_78.q
                    char r9_1 = 0
                    int32_t arg_10 = 0
                    int32_t arg_18 = 0
                    int32_t r14_1 = (var_78:4.q).d
                    
                    do
                        if (r15_3 != rax_12)
                            int128_t var_a0 = *(*(var_90 + (r15_3 << 3)) + 0x90)
                            int64_t rcx_9 = var_a0.q
                            int64_t rax_15
                            uint32_t rdx_5
                            int128_t* r8_1
                            
                            if (rcx_9.b != 2)
                            label_141a6c2d7:
                                
                                if (rdi_2.b != 2)
                                    uint32_t rax_19 = (rcx_9 u>> 0x20).d
                                    
                                    if (rax_19 s< r14_1)
                                        r8_1 = &var_a0
                                        rdx_5 = zx.d(rcx_9.b)
                                    label_141a6c30f:
                                        rax_15 = var_a0:8.q
                                        goto label_141a6c313
                                    
                                    if (rax_19 s> r14_1 || rcx_9.b != 1)
                                        goto label_141a6c302
                                    
                                    r8_1 = &var_a0
                                    rdx_5 = zx.d(rcx_9.b)
                                    goto label_141a6c30f
                                
                            label_141a6c302:
                                r8_1 = &var_78
                                rdx_5 = zx.d(rdi_2.b)
                                
                                if (rdi_2.b == rcx_9.b)
                                    goto label_141a6c30f
                                
                                rax_15 = var_a0:8.q
                                r9_1 = 0
                            else
                                rax_15 = var_a0:8.q
                                
                                if (rax_15.b != rcx_9.b)
                                    goto label_141a6c2ce
                                
                                r10_1 = arg_10
                                r11_1 = arg_18
                                var_a0 = *(sub_140d226f0(rax_11, sub_141a6e000()) + 0xf8)
                                rcx_9 = var_a0.q
                                
                                if (rcx_9.b != 2)
                                    goto label_141a6c2d7
                                
                                rax_15 = var_a0:8.q
                            label_141a6c2ce:
                                r8_1 = &var_a0
                                rdx_5 = zx.d(rcx_9.b)
                            label_141a6c313:
                                
                                if (rdx_5.b != 2 && *(r8_1 + 4) != (rcx_9 u>> 0x20).d)
                                    r9_1 = 0
                                else if (rax_15.b != 2)
                                    if (rbx_3.b != 2)
                                        uint32_t rdx_8 = (rax_15 u>> 0x20).d
                                        
                                        if (rdx_8 s> rsi_2)
                                            r8_1 = &var_a0:8
                                            rdx_5 = zx.d(rax_15.b)
                                            goto label_141a6c365
                                        
                                        if (rdx_8 s< rsi_2 || rax_15.b != 1)
                                            goto label_141a6c35a
                                        
                                        r8_1 = &var_a0:8
                                        rdx_5 = zx.d(rax_15.b)
                                        goto label_141a6c365
                                    
                                label_141a6c35a:
                                    rdx_5 = zx.d(rbx_3.b)
                                    
                                    if (rbx_3.b != rax_15.b || (rdx_5.b != 2
                                            && *(&var_78:8 + 4) != (rax_15 u>> 0x20).d))
                                        r9_1 = 0
                                    else
                                        r9_1 = 1
                                else
                                    r8_1 = &var_a0:8
                                    rdx_5 = zx.d(rax_15.b)
                                label_141a6c365:
                                    
                                    if (rdx_5.b == 2 || *(r8_1 + 4) == (rax_15 u>> 0x20).d)
                                        r9_1 = 1
                                    else
                                        r9_1 = 0
                            
                            if (rax_15.b != 2 && rdi_2.b != 2)
                                rdx_5 = (rax_15 u>> 0x20).d
                            
                            if (rax_15.b != 2 && rdi_2.b != 2 && (r14_1 s< rdx_5
                                    || (r14_1 s<= rdx_5 && rdi_2.b == 1)
                                    || (rdi_2.b == 1 && rdx_5 == r14_1)) && (rbx_3.b == 2 || rsi_2 s> rdx_5
                                    || (rsi_2 s>= rdx_5 && rbx_3.b == 1)
                                    || (rbx_3.b == 1 && rdx_5 == rsi_2)))
                                r8_1.b = 1
                            else
                                r8_1.b = 0
                            
                            if (rcx_9.b != 2 && rbx_3.b != 2)
                                rdx_5 = (rcx_9 u>> 0x20).d
                            
                            if (rcx_9.b != 2 && rbx_3.b != 2 && (rdi_2.b == 2 || r14_1 s< rdx_5
                                    || (r14_1 s<= rdx_5 && rdi_2.b == 1)
                                    || (rdi_2.b == 1 && rdx_5 == r14_1)) && (rsi_2 s> rdx_5
                                    || (rsi_2 s>= rdx_5 && rbx_3.b == 1)
                                    || (rbx_3.b == 1 && rdx_5 == rsi_2)))
                                rdx_5.b = 1
                            else
                                rdx_5.b = 0
                            
                            if (r8_1.b == 0)
                                if (rdx_5.b != 0)
                                    int64_t rax_21 = 0
                                    int64_t rdx_13 = 0
                                    
                                    if (rbx_3.b == 1)
                                        rdx_13 = 4
                                    
                                    if (rcx_9.b == 0)
                                        rax_21 = 4
                                    
                                    int32_t r8_9 = *(rdx_13 + &data_14302eb90)
                                        - *(rax_21 + &data_14302eb88) - (rcx_9 u>> 0x20).d
                                        + (rbx_3 u>> 0x20).d
                                    
                                    if (r11_1 s>= r8_9)
                                        r8_9 = r11_1
                                    
                                    r11_1 = r8_9
                                    arg_18 = r8_9
                            else if (rdx_5.b == 0)
                                int64_t rcx_11 = 0
                                int64_t rdx_12 = 0
                                
                                if (rdi_2.b == 0)
                                    rdx_12 = 4
                                
                                if (rax_15.b == 1)
                                    rcx_11 = 4
                                
                                int32_t r8_5 = *(rcx_11 + &data_14302eb90)
                                    - *(rdx_12 + &data_14302eb88) - (rdi_2 u>> 0x20).d
                                    + (rax_15 u>> 0x20).d
                                
                                if (r10_1 s>= r8_5)
                                    r8_5 = r10_1
                                
                                r10_1 = r8_5
                                arg_10 = r8_5
                            
                            rax_12 = var_a8_1
                        
                        r12_1 += 1
                        r15_3 += 1
                    while (r12_1 s< r13_1)
                    
                    int32_t r8_13
                    
                    if (rdi_2.b == 2 || rbx_3.b == 2)
                        r8_13 = 0x7fffffff
                        r14 = 0
                    else
                        r14 = 0
                        int64_t rcx_15 = 0
                        int64_t rax_24 = 0
                        
                        if (rbx_3.b == 1)
                            rcx_15 = 4
                        
                        if (rdi_2.b == 0)
                            rax_24 = 4
                        
                        r8_13 = *(rcx_15 + &data_14302eb90) - *(rax_24 + &data_14302eb88)
                            - (rdi_2 u>> 0x20).d + (rbx_3 u>> 0x20).d
                    
                    if (r11_1 != 0)
                        goto label_141a6c55a
                    
                    bool cond:5_1 = r10_1 s>= 0
                    
                    if (r10_1 != 0)
                        goto label_141a6c55d
                    
                    int32_t rax_29
                    
                    if (r9_1 == 0)
                    label_141a6c567:
                        rax_29 = r8_13
                        
                        if (r10_1 s< r8_13)
                            rax_29 = r10_1
                    else
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(r8_13)
                        int32_t rax_28 = (temp3_1 + (temp2_1 & 3)) s>> 2
                        r10_1 = rax_28
                        r11_1 = rax_28
                    label_141a6c55a:
                        cond:5_1 = r10_1 s>= 0
                    label_141a6c55d:
                        
                        if (cond:5_1)
                            goto label_141a6c567
                        
                        rax_29 = 0
                    
                    if (r11_1 s< 0)
                        r8_13 = 0
                    else if (r11_1 s< r8_13)
                        r8_13 = r11_1
                    
                    if (*(rbx_2 + 0x58) != rax_29 || *(rbx_2 + 0x5c) != r8_13)
                        *(rbx_2 + 0x58) = rax_29
                        *(rbx_2 + 0x5c) = r8_13
                    
                    rdi = var_90
                
                rcx_18 = var_80_1 + 1
                rax_6 = var_a8_1 + 1
                var_80_1 = rcx_18
                var_a8_1 = rax_6
            while (rcx_18 s< r13_1)
        
        r12 = var_84
        result = result_2 + 1
        rbx = arg1
        result_2 = result
    while (result s<= result_1)
    
    if (rdi != 0)
        return sub_140a74f90(rdi)

return result
