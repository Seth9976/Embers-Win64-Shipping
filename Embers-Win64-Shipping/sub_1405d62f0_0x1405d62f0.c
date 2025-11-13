// 函数: sub_1405d62f0
// 地址: 0x1405d62f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d
int32_t r14 = 0

if (rbp s> 0)
    int64_t r12_1 = 0
    int64_t rsi
    int64_t var_20_1 = rsi
    
    do
        int64_t r13_1 = *arg1
        char* rcx_2 = (r12_1 << 4) + r13_1
        char rdx = *rcx_2
        int128_t zmm0
        float zmm1
        
        if (rdx == 2)
        label_1405d6375:
            char rax_2 = *arg2
            
            if (rax_2 != 2)
                char r8_1 = arg2[8]
                
                if (r8_1 == 2)
                    goto label_1405d63a4
                
                zmm0 = *(arg2 + 4)
                zmm1 = *(arg2 + 0xc)
                
                if (zmm0.d f> zmm1 || (not(zmm0.d f!= zmm1) && (rax_2 == 0 || r8_1 == 0)))
                    goto label_1405d6403
                
                goto label_1405d63a4
            
        label_1405d63a4:
            char r8_2 = rcx_2[8]
            bool cond:0_1
            
            if (r8_2 == 2 || rax_2 == 2 || (*(arg2 + 4)).d f!= *(rcx_2 + 0xc))
                char rax_3 = arg2[8]
                
                if (rax_3 == 2)
                    goto label_1405d6403
                
                if (rdx == 2)
                    goto label_1405d6438
                
                if ((*(rcx_2 + 4)).d f!= *(arg2 + 0xc))
                    goto label_1405d6403
                
                if (rax_3 == 1)
                    cond:0_1 = rdx == 0
                    goto label_1405d63fd
                
                if (rax_3 != 0)
                    goto label_1405d6403
                
                cond:0_1 = rdx == 1
                goto label_1405d63fd
            
            if (r8_2 == 1)
                cond:0_1 = rax_2 == 0
            label_1405d63fd:
                
                if (cond:0_1)
                    goto label_1405d6524
                
                goto label_1405d6403
            
            if (r8_2 != 0 || rax_2 != 1)
                goto label_1405d6403
            
        label_1405d6524:
            int64_t rax_7 = *(rcx_2 + 8)
            int64_t rdx_1 = *(arg2 + 8)
            int64_t arg_10 = rdx_1
            int64_t arg_8 = rax_7
            int64_t* r8_5
            
            if (rax_7.b == 2)
                r8_5 = &arg_8
            else if (rdx_1.b != 2)
                zmm0 = arg_8:4.d
                zmm1 = arg_10:4.d
                
                if (not(zmm0.d f<= zmm1))
                    r8_5 = &arg_8
                else if (zmm1 f<= zmm0.d)
                    r8_5 = &arg_8
                    
                    if (rax_7.b != 1)
                        r8_5 = &arg_10
                else
                    r8_5 = &arg_10
            else
                r8_5 = &arg_10
            
            int64_t rax_8 = *rcx_2
            int64_t rdx_2 = *arg2
            
            if (rax_8.b != 2)
                if (rdx_2.b == 2)
                    rax_8 = rdx_2
                else
                    zmm0 = rax_8:4.d
                    zmm1 = rdx_2:4.d
                    
                    if (not(zmm0.d f< zmm1))
                        if (not(zmm1 f< zmm0.d) && rax_8.b == 1)
                            rdx_2 = rax_8
                        
                        rax_8 = rdx_2
            
            int64_t var_50_1 = *r8_5
            int32_t rax_12 = rbp - r14 - 1
            *arg2 = rax_8.o
            
            if (rax_12 s>= 1)
                rax_12 = 1
            
            if (rax_12 != 0)
                memcpy((sx.q(r14) << 4) + r13_1, (sx.q(rbp - rax_12) << 4) + r13_1, rax_12 << 4)
                rbp = arg1[1].d
            
            arg1[1].d = rbp - 1
            sub_1405a5010(arg1)
            r14 -= 1
            r12_1 -= 1
        else
            char rax_1 = rcx_2[8]
            
            if (rax_1 == 2)
                goto label_1405d6375
            
            zmm0 = *(rcx_2 + 4)
            zmm1 = *(rcx_2 + 0xc)
            
            if (not(zmm0.d f> zmm1) && (zmm0.d f!= zmm1 || (rdx != 0 && rax_1 != 0)))
                goto label_1405d6375
            
        label_1405d6403:
            
            if (rdx == 2)
            label_1405d6438:
                bool rax_5 = *arg2
                
                if (rax_5 == 2)
                label_1405d6473:
                    char rdi_1 = rcx_2[8]
                    bool r10
                    
                    if (rdi_1 == 2 || rax_5 == 2)
                        r10 = true
                    else
                        r10 = false
                    
                    char r11
                    
                    if (rdx == 2 || arg2[8] == 2)
                        r11 = 1
                    else
                        r11 = 0
                    
                    bool r9_1 = true
                    bool r8_4 = true
                    
                    if (r10 == 0)
                        zmm1 = *(rcx_2 + 0xc)
                        float temp0_1 = *(arg2 + 4)
                        zmm1 - temp0_1
                        rsi.b = zmm1 >= temp0_1
                        
                        if (rdi_1 != 1 || rax_5 != 1)
                            r10 = false
                        else
                            r10 = true
                        
                        r9_1 = zmm1 > temp0_1
                        
                        if (r10 != 0)
                            r9_1 = rsi.b
                    
                    if (r11 == 0)
                        zmm0 = *(arg2 + 0xc)
                        float temp1_1 = *(rcx_2 + 4)
                        zmm0.d f- temp1_1
                        
                        if (rdx != 1 || arg2[8] != rdx)
                            rdx = 0
                        
                        r8_4 = zmm0.d f> temp1_1
                        
                        if (rdx != 0)
                            r8_4 = zmm0.d f>= temp1_1
                    
                    if (r9_1 != 0 && r8_4 != 0)
                        goto label_1405d6524
                else
                    char r8_3 = arg2[8]
                    
                    if (r8_3 == 2)
                        goto label_1405d6473
                    
                    zmm0 = *(arg2 + 4)
                    zmm1 = *(arg2 + 0xc)
                    
                    if (not(zmm0.d f> zmm1))
                        if (zmm0.d f!= zmm1)
                            goto label_1405d6473
                        
                        if (rax_5 != 0 && r8_3 != 0)
                            goto label_1405d6473
            else
                char rax_4 = rcx_2[8]
                
                if (rax_4 == 2)
                    goto label_1405d6438
                
                zmm0 = *(rcx_2 + 4)
                zmm1 = *(rcx_2 + 0xc)
                
                if (not(zmm0.d f> zmm1))
                    if (zmm0.d f!= zmm1)
                        goto label_1405d6438
                    
                    if (rdx != 0 && rax_4 != 0)
                        goto label_1405d6438
        rbp = arg1[1].d
        r14 += 1
        r12_1 += 1
    while (r14 s< rbp)

arg1[1].d = rbp + 1

if (rbp + 1 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t result = *arg1
*(result + sx.q(rbp) * 0x10) = *arg2
return result
