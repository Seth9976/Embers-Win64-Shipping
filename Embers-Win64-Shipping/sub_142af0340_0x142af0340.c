// 函数: sub_142af0340
// 地址: 0x142af0340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = arg2

while (true)
    int16_t rax_1 = *(arg1 + 0x138)
    uint64_t result
    
    if (rax_1 s< 0)
        result = zx.q(*(arg1 + 0x13c))
    else
        result = zx.q(sx.d(rax_1) s>> 5)
    
    if (result.d == 0)
        return result
    
    int16_t rax_3 = *(arg1 + 0x138)
    int32_t rdx_1
    
    if (rax_3 s< 0)
        rdx_1 = *(arg1 + 0x13c)
    else
        rdx_1 = sx.d(rax_3) s>> 5
    
    int32_t rax_4 = sub_142a4a4f0(arg1 + 0x130, rdx_1, 0xffffffff)
    int32_t rdi_1 = rax_4
    int32_t rbp_1 = sub_142a486d0(arg1 + 0x130, rax_4)
    
    if (arg_10 == 0)
        if ((*(arg1 + 0x124) & 2) != 0)
            sub_142a8ef00(arg1 + 0x130, 0)
            int16_t rax_7 = *(arg1 + 0x138)
            int32_t rdx_5
            
            if (rax_7 s< 0)
                rdx_5 = *(arg1 + 0x13c)
            else
                rdx_5 = sx.d(rax_7) s>> 5
            
            int32_t rax_8 = sub_142a4a4f0(arg1 + 0x130, rdx_5, 0xffffffff)
            rdi_1 = rax_8
            rbp_1 = sub_142a486d0(arg1 + 0x130, rax_8)
        
        if (rdi_1 != 0)
            int16_t rax_14 = *(arg1 + 0x138)
            int32_t rax_16
            
            if (rax_14 s< 0)
                rax_16 = *(arg1 + 0x13c)
            else
                rax_16 = sx.d(rax_14) s>> 5
            
            int32_t rax_19
            
            if (rax_16 s<= 0xffffff)
                void* rax_17 = *(arg1 + 0x10)
                int16_t rcx_15 = *(rax_17 + 0x30)
                
                if (rcx_15 s< 0)
                    rax_19 = *(rax_17 + 0x34)
                else
                    rax_19 = sx.d(rcx_15) s>> 5
            
            if (rax_16 s> 0xffffff || rax_19 s> 0xffffff)
                sub_142af0120(arg1, 0x10314)
            
            void* r9_1 = *(arg1 + 0x10)
            int16_t rax_20 = *(r9_1 + 0x30)
            int32_t rax_21
            int32_t rdi_5
            int32_t* r8_2
            
            if ((*(arg1 + 0x124) & 2) == 0)
                int32_t rdi_7
                
                if (rax_20 s< 0)
                    rdi_7 = *(r9_1 + 0x34)
                else
                    rdi_7 = sx.d(rax_20) s>> 5
                
                r8_2 = *(arg1 + 8)
                rax_21 = *r8_2
                
                if (rax_21 s<= 0)
                    if (rdi_7 s> 0xffffff)
                        abort()
                        noreturn
                    
                    if (rdi_7 s< 0)
                        abort()
                        noreturn
                    
                    rdi_5 = rdi_7 | 0x4000000
                else
                    rdi_5 = 0
            else
                int32_t rdi_4
                
                if (rax_20 s< 0)
                    rdi_4 = *(r9_1 + 0x34)
                else
                    rdi_4 = sx.d(rax_20) s>> 5
                
                r8_2 = *(arg1 + 8)
                rax_21 = *r8_2
                
                if (rax_21 s<= 0)
                    if (rdi_4 s> 0xffffff)
                        abort()
                        noreturn
                    
                    if (rdi_4 s< 0)
                        abort()
                        noreturn
                    
                    rdi_5 = rdi_4 | 0x28000000
                else
                    rdi_5 = 0
            
            if (rax_21 s<= 0)
                void* r9_2 = *(r9_1 + 0x20)
                int32_t rdx_11 = *(r9_2 + 8)
                char rax_22
                
                if (rdx_11 + 1 s< 0 || *(r9_2 + 0xc) s< rdx_11 + 1)
                    rax_22 = sub_142aeb240(r9_2, rdx_11 + 1, r8_2)
                
                if ((rdx_11 + 1 s>= 0 && *(r9_2 + 0xc) s>= rdx_11 + 1) || rax_22 != 0)
                    *(*(r9_2 + 0x18) + (sx.q(*(r9_2 + 8)) << 3)) = sx.q(rdi_5)
                    *(r9_2 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int16_t rax_26 = *(arg1 + 0x138)
            int32_t rax_28
            
            if (rax_26 s< 0)
                rax_28 = *(arg1 + 0x13c)
            else
                rax_28 = sx.d(rax_26) s>> 5
            
            int32_t* r8_3 = *(arg1 + 8)
            int32_t rcx_21 = *r8_3
            
            if (rcx_21 s<= 0)
                if (rax_28 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_28 s< 0)
                    abort()
                    noreturn
                
                if (rcx_21 s<= 0)
                    void* rdi_8 = *(*(arg1 + 0x10) + 0x20)
                    int32_t rdx_14 = *(rdi_8 + 8)
                    char rax_30
                    
                    if (rdx_14 + 1 s< 0 || *(rdi_8 + 0xc) s< rdx_14 + 1)
                        rax_30 = sub_142aeb240(rdi_8, rdx_14 + 1, r8_3)
                    
                    if ((rdx_14 + 1 s>= 0 && *(rdi_8 + 0xc) s>= rdx_14 + 1) || rax_30 != 0)
                        *(*(rdi_8 + 0x18) + (sx.q(*(rdi_8 + 8)) << 3)) = sx.q(rax_28 | 0x5000000)
                        *(rdi_8 + 8) += 1
                    
                    if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                        sub_142af0120(arg1, 0x10314)
            
            int16_t rax_34 = *(arg1 + 0x138)
            int32_t r9_4
            
            if (rax_34 s< 0)
                r9_4 = *(arg1 + 0x13c)
            else
                r9_4 = sx.d(rax_34) s>> 5
            
            result = sub_142a48d00(*(arg1 + 0x10) + 0x28, arg1 + 0x130, 0, r9_4)
        else
            char rax_10
            
            if ((*(arg1 + 0x124) & 2) != 0)
                rax_10 = sub_142af4740(zx.q(rbp_1), zx.q(rdi_1 + 0x22))
            
            int32_t rbp_2
            int32_t* r8_1
            
            if ((*(arg1 + 0x124) & 2) == 0 || rax_10 == 0)
                r8_1 = *(arg1 + 8)
                result = zx.q(*r8_1)
                
                if (result.d s<= 0)
                    if (rbp_1 s> 0xffffff)
                        abort()
                        noreturn
                    
                    if (rbp_1 s< 0)
                        abort()
                        noreturn
                    
                    rbp_2 = rbp_1 | 0x3000000
                else
                    rbp_2 = 0
            else
                r8_1 = *(arg1 + 8)
                result = zx.q(*r8_1)
                
                if (result.d s<= 0)
                    if (rbp_1 s> 0xffffff)
                        abort()
                        noreturn
                    
                    if (rbp_1 s< 0)
                        abort()
                        noreturn
                    
                    rbp_2 = rbp_1 | 0x27000000
                else
                    rbp_2 = 0
            
            if (result.d s<= 0)
                void* rdi_2 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_8 = *(rdi_2 + 8)
                char rax_12
                
                if (rdx_8 + 1 s< 0 || *(rdi_2 + 0xc) s< rdx_8 + 1)
                    rax_12 = sub_142aeb240(rdi_2, rdx_8 + 1, r8_1)
                
                if ((rdx_8 + 1 s>= 0 && *(rdi_2 + 0xc) s>= rdx_8 + 1) || rax_12 != 0)
                    *(*(rdi_2 + 0x18) + (sx.q(*(rdi_2 + 8)) << 3)) = sx.q(rbp_2)
                    *(rdi_2 + 8) += 1
                
                result = *(arg1 + 0x10)
                
                if (*(*(result + 0x20) + 8) s> 0xfffff0)
                    result = *(arg1 + 8)
                    
                    if (*result s<= 0)
                        result = sub_142af0120(arg1, 0x10314)
        
        if ((*(arg1 + 0x138) & 1) != 0)
            *(arg1 + 0x138) = 2
            return 2
        
        *(arg1 + 0x138) &= 0x1f
        return result
    
    if ((*(arg1 + 0x138) & 1) == 0 || rdi_1 != 0)
        int16_t rax_6 = *(arg1 + 0x138)
        int32_t rcx_4
        
        if (rax_6 s< 0)
            rcx_4 = *(arg1 + 0x13c)
        else
            rcx_4 = sx.d(rax_6) s>> 5
        
        if (rdi_1 u< rcx_4)
            if (rdi_1 s> 0x3ff)
                rax_6 |= 0xffe0
                *(arg1 + 0x13c) = rdi_1
            else
                rdi_1.w <<= 5
                rax_6 = (rax_6 & 0x1f) | rdi_1.w
            
            *(arg1 + 0x138) = rax_6
    else
        sub_142a4afe0(arg1 + 0x130)
    
    sub_142af0340(arg1, 0)
    sub_142a48580(arg1 + 0x130, rbp_1)
    arg_10 = 0
