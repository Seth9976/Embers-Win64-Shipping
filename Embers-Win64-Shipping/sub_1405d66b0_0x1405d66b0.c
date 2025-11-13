// 函数: sub_1405d66b0
// 地址: 0x1405d66b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d
int64_t* r15 = arg1
int32_t r14 = 0
int128_t zmm1

if (rbp s> 0)
    int64_t r12_1 = 0
    int64_t rdi
    int64_t arg_10 = rdi
    
    do
        int64_t r13_1 = *r15
        char* rax_3 = (r12_1 << 5) + r13_1
        char r8_1 = *rax_3
        
        if (r8_1 == 2)
        label_1405d6734:
            char rdx_1 = *arg2
            
            if (rdx_1 != 2)
                arg1 = zx.q(arg2[0x10])
                
                if (arg1.b == 2)
                    goto label_1405d675c
                
                int64_t r9_2 = *(arg2 + 8)
                int64_t r10_1 = *(arg2 + 0x18)
                
                if (r9_2 s> r10_1 || (r9_2 == r10_1 && (rdx_1 == 0 || arg1.b == 0)))
                    goto label_1405d67c0
                
                goto label_1405d675c
            
        label_1405d675c:
            char r9_3 = rax_3[0x10]
            bool cond:3_1
            
            if (r9_3 == 2 || rdx_1 == 2 || *(rax_3 + 0x18) != *(arg2 + 8))
                char rdx_2 = arg2[0x10]
                
                if (rdx_2 == 2)
                    goto label_1405d67c0
                
                if (r8_1 == 2)
                    goto label_1405d67f3
                
                if (*(arg2 + 0x18) != *(rax_3 + 8))
                    goto label_1405d67c0
                
                if (rdx_2 == 1)
                    cond:3_1 = r8_1 == 0
                    goto label_1405d67ba
                
                if (rdx_2 != 0)
                    goto label_1405d67c0
                
                cond:3_1 = r8_1 == 1
                goto label_1405d67ba
            
            if (r9_3 == 1)
                cond:3_1 = rdx_1 == 0
            label_1405d67ba:
                
                if (cond:3_1)
                    goto label_1405d68e0
                
                goto label_1405d67c0
            
            if (r9_3 != 0 || rdx_1 != 1)
                goto label_1405d67c0
            
        label_1405d68e0:
            zmm1 = *(rax_3 + 0x10)
            char r8_2 = zmm1.b
            int128_t var_68 = *(arg2 + 0x10)
            int128_t var_48 = zmm1
            int128_t* rcx_2
            
            if (r8_2 == 2)
                rcx_2 = &var_48
            else if (var_68.b != 2)
                int64_t rdx_7 = var_68:8.q
                int64_t temp0_1 = var_48:8.q
                
                if (temp0_1 s> rdx_7)
                    rcx_2 = &var_48
                else if (temp0_1 s>= rdx_7)
                    rcx_2 = &var_48
                    
                    if (r8_2 != 1)
                        rcx_2 = &var_68
                else
                    rcx_2 = &var_68
            else
                rcx_2 = &var_68
            
            zmm1 = *rax_3
            char r8_3 = zmm1.b
            int128_t var_58 = *arg2
            int128_t var_38 = zmm1
            int128_t* rax_4
            
            if (r8_3 == 2)
                rax_4 = &var_38
            else if (var_58.b != 2)
                int64_t rdx_8 = var_58:8.q
                int64_t temp1_1 = var_38:8.q
                
                if (temp1_1 s< rdx_8)
                    rax_4 = &var_38
                else if (temp1_1 s<= rdx_8)
                    rax_4 = &var_38
                    
                    if (r8_3 != 1)
                        rax_4 = &var_58
                else
                    rax_4 = &var_58
            else
                rax_4 = &var_58
            
            int128_t zmm0 = *rcx_2
            int32_t rax_7 = rbp - r14 - 1
            *arg2 = *rax_4
            
            if (rax_7 s>= 1)
                rax_7 = 1
            
            *(arg2 + 0x10) = zmm0
            
            if (rax_7 != 0)
                memcpy((sx.q(r14) << 5) + r13_1, (sx.q(rbp - rax_7) << 5) + r13_1, rax_7 << 5)
                rbp = r15[1].d
            
            r15[1].d = rbp - 1
            sub_1405dad20(r15)
            r14 -= 1
            r12_1 -= 1
        else
            arg1 = zx.q(rax_3[0x10])
            
            if (arg1.b == 2)
                goto label_1405d6734
            
            int64_t rdx = *(rax_3 + 8)
            int64_t r9_1 = *(rax_3 + 0x18)
            
            if (rdx s<= r9_1 && (rdx != r9_1 || (r8_1 != 0 && arg1.b != 0)))
                goto label_1405d6734
            
        label_1405d67c0:
            
            if (r8_1 == 2)
            label_1405d67f3:
                bool r9_5 = *arg2
                
                if (r9_5 == 2)
                label_1405d682a:
                    char rsi_1 = rax_3[0x10]
                    
                    if (rsi_1 == 2 || r9_5 == 2)
                        arg1.b = 1
                    else
                        arg1.b = 0
                    
                    if (r8_1 == 2 || arg2[0x10] == 2)
                        rdi.b = 1
                    else
                        rdi.b = 0
                    
                    bool r11_1 = true
                    bool r10_3 = true
                    
                    if (arg1.b == 0)
                        int64_t rcx = *(arg2 + 8)
                        int64_t rdx_5 = *(rax_3 + 0x18)
                        r11_1 = rdx_5 s> rcx
                        rcx.b = rdx_5 s>= rcx
                        
                        if (rsi_1 != 1 || r9_5 != 1)
                            rdx_5.b = 0
                        else
                            rdx_5 = 1
                        
                        if (rdx_5.b != 0)
                            r11_1 = rcx.b
                    
                    if (rdi.b == 0)
                        int64_t rcx_1 = *(arg2 + 0x18)
                        uint64_t rdx_6 = *(rax_3 + 8)
                        r9_5 = rdx_6 s< rcx_1
                        rcx_1.b = rdx_6 s<= rcx_1
                        
                        if (r8_1 != 1 || arg2[0x10] != r8_1)
                            rdx_6.b = 0
                        else
                            rdx_6 = zx.q(r8_1)
                        
                        r10_3 = r9_5
                        
                        if (rdx_6.b != 0)
                            r10_3 = rcx_1.b
                    
                    if (r11_1 != 0 && r10_3 != 0)
                        goto label_1405d68e0
                else
                    arg1 = zx.q(arg2[0x10])
                    
                    if (arg1.b == 2)
                        goto label_1405d682a
                    
                    int64_t rdx_4 = *(arg2 + 8)
                    int64_t r10_2 = *(arg2 + 0x18)
                    
                    if (rdx_4 s<= r10_2)
                        if (rdx_4 != r10_2)
                            goto label_1405d682a
                        
                        if (r9_5 != 0 && arg1.b != 0)
                            goto label_1405d682a
            else
                arg1 = zx.q(rax_3[0x10])
                
                if (arg1.b == 2)
                    goto label_1405d67f3
                
                int64_t rdx_3 = *(rax_3 + 8)
                int64_t r9_4 = *(rax_3 + 0x18)
                
                if (rdx_3 s<= r9_4)
                    if (rdx_3 != r9_4)
                        goto label_1405d67f3
                    
                    if (r8_1 != 0 && arg1.b != 0)
                        goto label_1405d67f3
        
        rbp = r15[1].d
        r14 += 1
        r12_1 += 1
    while (r14 s< rbp)

r15[1].d = rbp + 1

if (rbp + 1 s> *(r15 + 0xc))
    sub_1405c4e40(r15)

int64_t result = *r15
zmm1 = *(arg2 + 0x10)
int64_t rcx_9 = sx.q(rbp) << 5
*(rcx_9 + result) = *arg2
*(rcx_9 + result + 0x10) = zmm1
return result
