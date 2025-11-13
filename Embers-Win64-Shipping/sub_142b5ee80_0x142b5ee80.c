// 函数: sub_142b5ee80
// 地址: 0x142b5ee80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_160 = -2
void var_198
uint64_t result = __security_cookie ^ &var_198
uint64_t result_1 = result

if (*arg2 s<= 0)
    int64_t* rcx = *(arg1 + 0x2e0)
    
    if (rcx != 0)
        sub_142a86f90(rcx)
    
    int64_t* rcx_1 = *(arg1 + 0x2e8)
    
    if (rcx_1 != 0)
        sub_142a86f90(rcx_1)
    
    result = zx.q(*(arg1 + 0x288) - 2)
    *(arg1 + 0x2c0) = 0
    int64_t r12_1 = sx.q(result.d)
    int64_t rcx_2 = 2
    
    if (result.d s> 2)
        int64_t rdx = 0x20
        
        while (*arg2 s<= 0)
            result = *(arg1 + 0x280)
            
            if (*(rdx + result) == 7)
                result = zx.q(sx.d(*(rdx + result + 0xa)))
                
                if (result.d s>= *(arg1 + 0x2c0))
                    result = zx.q(result.d + 1)
                    *(arg1 + 0x2c0) = result.d
            
            rcx_2 += 1
            rdx += 0x10
            
            if (rcx_2 s>= r12_1)
                break
    
    int32_t rdi_1 = *(arg1 + 0x2c0)
    
    if (*arg2 s<= 0)
        result = zx.q(*(arg1 + 0x2c4))
        
        if (result.d s>= rdi_1)
            goto label_142b5ef9f
        
        if (rdi_1 s>= 0xa)
            int32_t rax_2 = result.d * 2
            
            if (rdi_1 s< rax_2)
                rdi_1 = rax_2
        else
            rdi_1 = 0xa
        
        result = sub_142a7dd30(*(arg1 + 0x2b8), sx.q(rdi_1) << 2)
        
        if (result != 0)
            *(arg1 + 0x2b8) = result
            *(arg1 + 0x2c4) = rdi_1
        label_142b5ef9f:
            int32_t i = 0
            
            if (*(arg1 + 0x2c0) s> 0)
                int64_t rdx_3 = 0
                
                do
                    result = *(arg1 + 0x2b8)
                    *(rdx_3 + result) = 6
                    i += 1
                    rdx_3 += 4
                while (i s< *(arg1 + 0x2c0))
            
            *(arg1 + 0x2c8) = 0
            int64_t rbp_1 = 1
            int32_t r15_1 = 1
            
            if (1 s< r12_1)
                void* r14_1 = 0x10
                
                while (*arg2 s<= 0)
                    int64_t rdx_4 = *(arg1 + 0x280)
                    result = zx.q(*(r14_1 + rdx_4))
                    
                    if (result.d == 5)
                        if (result.d - 5 u<= 1)
                            result = zx.q(sx.d(*(r14_1 + rdx_4 + 0xa)))
                        else
                            result = 0
                        
                        int32_t rdi_2 = -1
                        
                        if (*(r14_1 + rdx_4 + 0x10) == 7)
                            rdi_2 = sx.d(*(r14_1 + rdx_4 + 0x1a))
                        
                        int32_t rdx_10
                        int32_t var_168
                        
                        if (result.d u> 5)
                            *arg2 = 5
                            rdx_10 = 3
                            var_168 = rdx_10
                        else
                            result = sx.q(result.d)
                            
                            switch (result)
                                case 0, 4
                                    rdx_10 = 3
                                    var_168 = rdx_10
                                case 1
                                    int32_t var_164_1 = r15_1
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* 
                                        var_118
                                    sub_142b61450(arg1 + 0x228, &var_118, 
                                        (sx.q(r15_1 + 2) << 4) + rdx_4)
                                    r15_1 += 3
                                    rbp_1 += 3
                                    r14_1 += 0x30
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* 
                                        var_158 =
                                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                                    int16_t var_150_1 = 2
                                    int32_t* r8_5 = *(arg1 + 0x280) + r14_1
                                    
                                    if (*r8_5 == 0xa)
                                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* 
                                            var_d8
                                        sub_142a48050(&var_158, 
                                            sub_142b61450(arg1 + 0x228, &var_d8, r8_5))
                                        sub_142a47ff0(&var_d8)
                                        r15_1 += 1
                                        rbp_1 += 1
                                        r14_1 += 0x10
                                    
                                    void var_98
                                    sub_142b61e30(arg1, var_164_1, 
                                        sub_142b5f530(arg1, &var_118, &var_158, &var_168, &var_98, 
                                            arg2), 
                                        arg2)
                                    sub_142a47ff0(&var_158)
                                    result = sub_142a47ff0(&var_118)
                                    rdx_10 = var_168
                                case 2, 3, 5
                                    rdx_10 = 1
                                    var_168 = rdx_10
                        
                        if (rdi_2 != 0xffffffff)
                            int32_t* r8_8 = *(arg1 + 0x2b8) + (sx.q(rdi_2) << 2)
                            result = zx.q(*r8_8)
                            
                            if (result.d != 6 && result.d != rdx_10)
                                *(arg1 + 0x2c8) = 1
                            
                            *r8_8 = rdx_10
                    
                    r15_1 += 1
                    rbp_1 += 1
                    r14_1 += 0x10
                    
                    if (rbp_1 s>= r12_1)
                        break
        else
            *arg2 = 7

__security_check_cookie(result_1 ^ &var_198)
return result
