// 函数: sub_142631b70
// 地址: 0x142631b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rdi = arg1
int32_t* rbx = arg4
int32_t* var_90 = rbx

if (*(arg1 + 9) != 0)
    (*(*arg1 + 0x20))(arg5, 8)

int32_t result = rbx[1]
int32_t r8 = 0
int64_t r12 = sx.q(*rbx)
int32_t result_1 = result
int32_t var_a4 = 0

if (result s> 0)
    int64_t* rcx = nullptr
    int64_t* var_78_1 = nullptr
    
    do
        int32_t i = 0
        int32_t i_1 = 0
        
        if (r12.d s> 0)
            int64_t* var_80_1 = rcx
            
            do
                int32_t* j = *(rcx + *(rbx + 0x28))
                int32_t* j_1 = j
                
                if (j != 0)
                    do
                        int32_t rax_4 = *j
                        
                        if (rax_4 u>= 0x4000000)
                            int32_t* rax_5 = *(j + 8)
                            int32_t rbx_3 = rax_4 u>> 0xd & 0x1fff
                            int32_t rsi_2
                            
                            if (rax_5 == 0)
                                rsi_2 = 0xffff
                            else
                                rsi_2 = *rax_5 & 0x1fff
                            
                            int64_t k_1 = 2
                            int32_t rdi_1 = 0xffff
                            int32_t r11_1 = rbx_3
                            int128_t var_60
                            __builtin_memcpy(&var_60, 
                                "\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x"
                            "00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff", 
                                0x20)
                            int64_t k_2 = 2
                            int32_t r10_1 = rbx_3
                            int64_t r15_1 = 0
                            int64_t k
                            
                            do
                                uint64_t rcx_1 = (zx.q(r15_1.d) & 3) << 2
                                int32_t rdx_2 = i + *(&var_60 + rcx_1)
                                int128_t var_50
                                int32_t rcx_3 = r8 + *(&var_50 + rcx_1)
                                
                                if (i + *(&var_60 + rcx_1) s< 0 || rcx_3 s< 0 || rdx_2 s>= r12.d
                                        || rcx_3 s>= result_1)
                                    int32_t rax_22 = neg.d(rbx_3 + arg3)
                                    
                                    if (rdi_1 s< rax_22)
                                        rax_22 = rdi_1
                                    
                                    rdi_1 = rax_22
                                else
                                    int32_t rdx_4 = neg.d(arg3)
                                    int32_t* r9 =
                                        *(*(var_90 + 0x28) + (sx.q(rcx_3 * r12.d + rdx_2) << 3))
                                    int32_t rcx_8
                                    
                                    if (r9 == 0)
                                        rcx_8 = 0xffff
                                    else
                                        rcx_8 = *r9 & 0x1fff
                                    
                                    int32_t rax_10 = rdx_4
                                    
                                    if (rsi_2 u< rcx_8)
                                        rcx_8 = rsi_2
                                    
                                    if (rbx_3 s> rdx_4)
                                        rax_10 = rbx_3
                                    
                                    if (rcx_8 - rax_10 s> arg2)
                                        int32_t rdx_5 = rdx_4 - rbx_3
                                        
                                        if (rdi_1 s< rdx_5)
                                            rdx_5 = rdi_1
                                        
                                        rdi_1 = rdx_5
                                    
                                    if (r9 != 0)
                                        do
                                            int32_t r8_1 = *r9
                                            r9 = *(r9 + 8)
                                            int32_t r8_3 = r8_1 u>> 0xd & 0x1fff
                                            int32_t rcx_11
                                            
                                            if (r9 == 0)
                                                rcx_11 = 0xffff
                                            else
                                                rcx_11 = *r9 & 0x1fff
                                            
                                            int32_t rax_11 = r8_3
                                            
                                            if (rbx_3 u> r8_3)
                                                rax_11 = rbx_3
                                            
                                            if (rsi_2 u< rcx_11)
                                                rcx_11 = rsi_2
                                            
                                            if (rcx_11 - rax_11 s> arg2)
                                                int32_t rax_13 = r8_3 - rbx_3
                                                int32_t rcx_13 = rax_13
                                                int32_t temp5_1
                                                int32_t temp6_1
                                                temp5_1:temp6_1 = sx.q(rax_13)
                                                
                                                if (rdi_1 s< rax_13)
                                                    rcx_13 = rdi_1
                                                
                                                rdi_1 = rcx_13
                                                
                                                if ((temp6_1 ^ temp5_1) - temp5_1 s<= arg3)
                                                    if (r8_3 s< r11_1)
                                                        r11_1 = r8_3
                                                    
                                                    if (r8_3 s> r10_1)
                                                        r10_1 = r8_3
                                        while (r9 != 0)
                                        
                                        r8 = var_a4
                                    
                                    k_1 = k_2
                                
                                uint64_t rcx_14 = (zx.q(r15_1.d + 1) & 3) << 2
                                int32_t rdx_8 = i_1 + *(&var_60 + rcx_14)
                                int32_t rcx_16 = r8 + *(&var_50 + rcx_14)
                                
                                if (i_1 + *(&var_60 + rcx_14) s< 0 || rcx_16 s< 0 || rdx_8 s>= r12.d
                                        || rcx_16 s>= result_1)
                                    int32_t rax_36 = neg.d(rbx_3 + arg3)
                                    
                                    if (rdi_1 s< rax_36)
                                        rax_36 = rdi_1
                                    
                                    rdi_1 = rax_36
                                else
                                    int32_t rdx_10 = neg.d(arg3)
                                    int32_t* r8_4 =
                                        *(*(var_90 + 0x28) + (sx.q(rcx_16 * r12.d + rdx_8) << 3))
                                    int32_t rcx_21
                                    
                                    if (r8_4 == 0)
                                        rcx_21 = 0xffff
                                    else
                                        rcx_21 = *r8_4 & 0x1fff
                                    
                                    int32_t rax_23 = rdx_10
                                    
                                    if (rsi_2 u< rcx_21)
                                        rcx_21 = rsi_2
                                    
                                    if (rbx_3 s> rdx_10)
                                        rax_23 = rbx_3
                                    
                                    if (rcx_21 - rax_23 s> arg2)
                                        int32_t rdx_11 = rdx_10 - rbx_3
                                        
                                        if (rdi_1 s< rdx_11)
                                            rdx_11 = rdi_1
                                        
                                        rdi_1 = rdx_11
                                    
                                    while (r8_4 != 0)
                                        int32_t rcx_23 = *r8_4
                                        r8_4 = *(r8_4 + 8)
                                        int32_t rcx_25 = rcx_23 u>> 0xd & 0x1fff
                                        int32_t rdx_13
                                        
                                        if (r8_4 == 0)
                                            rdx_13 = 0xffff
                                        else
                                            rdx_13 = *r8_4 & 0x1fff
                                        
                                        int32_t rax_24 = rcx_25
                                        
                                        if (rbx_3 u> rcx_25)
                                            rax_24 = rbx_3
                                        
                                        if (rsi_2 u< rdx_13)
                                            rdx_13 = rsi_2
                                        
                                        if (rdx_13 - rax_24 s> arg2)
                                            int32_t rax_26 = rcx_25 - rbx_3
                                            int32_t rdx_15 = rax_26
                                            
                                            if (rdi_1 s< rax_26)
                                                rdx_15 = rdi_1
                                            
                                            rdi_1 = rdx_15
                                            int32_t temp7_1
                                            int32_t temp8_1
                                            temp7_1:temp8_1 = sx.q(rax_26)
                                            
                                            if ((temp8_1 ^ temp7_1) - temp7_1 s<= arg3)
                                                if (rcx_25 s< r11_1)
                                                    r11_1 = rcx_25
                                                
                                                if (rcx_25 s> r10_1)
                                                    r10_1 = rcx_25
                                    
                                    r8 = var_a4
                                
                                i = i_1
                                r15_1 += 2
                                k = k_1
                                k_1 -= 1
                                k_2 = k_1
                            while (k != 1)
                            j = j_1
                            
                            if (rdi_1 s< neg.d(arg3))
                                *j = rax_4 & 0x3ffffff
                            
                            if (r10_1 - r11_1 s> arg3)
                                *j &= 0x3ffffff
                        
                        j = *(j + 8)
                        j_1 = j
                    while (j != 0)
                    
                    rbx = var_90
                    rcx = var_80_1
                
                i += 1
                rcx = &rcx[1]
                i_1 = i
                var_80_1 = rcx
            while (i s< r12.d)
            
            result = result_1
            rcx = var_78_1
        
        rcx = &rcx[r12]
        r8 += 1
        var_a4 = r8
        var_78_1 = rcx
    while (r8 s< result)
    
    rdi = arg1

if (*(rdi + 9) != 0)
    result = (*(*rdi + 0x28))(rdi, 8, r8)

__security_check_cookie(rax_1 ^ &var_c8)
return result
