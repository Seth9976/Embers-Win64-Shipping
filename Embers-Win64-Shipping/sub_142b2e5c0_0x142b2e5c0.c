// 函数: sub_142b2e5c0
// 地址: 0x142b2e5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_160 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void* var_198 = arg2
void* var_178 = arg1
int64_t result = sx.q(*(arg1 + 0x288))

if (result.d != 0)
    int32_t r13_1 = *(arg5 + 0xc)
    int64_t rdi_1 = 0
    
    if (r13_1 s< 0)
        r13_1 = 0
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t rdx = 2
    int16_t var_d0_1 = 2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_158 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_150_1 = 2
    void* r10_1 = arg1 + 0x238
    void* var_190_1 = r10_1
    int32_t r12_1 = -1
    int32_t var_14c
    
    if (result s> 0)
        void* rbx_1 = nullptr
        void* r15_1 = var_198
        
        do
            int64_t rcx = *(arg1 + 0x280)
            int32_t* rax_2 = rbx_1 + rcx
            rdi_1 += 1
            rbx_1 += 0x10
            
            if (*rax_2 == 0xb)
                int32_t* rsi_1 = rbx_1 + rcx
                rdi_1 += 1
                rbx_1 += 0x10
                
                if (*rsi_1 == 0)
                    void* r14_1 = rbx_1 + rcx
                    rdi_1 += 1
                    rbx_1 += 0x10
                    
                    if (*r14_1 == 1)
                        int32_t r8_1 = zx.d(rsi_1[2].w) + rsi_1[1]
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118
                        sub_142a4ad20(r10_1, &var_118, r8_1, *(r14_1 + 4) - r8_1)
                        int32_t rax_4
                        
                        if (arg3 == 0)
                            rax_4 = sub_142b2e4e0(r15_1, &var_118, r13_1)
                        else
                            var_198.d = 0xffffffff
                            rax_4 = sub_142b34180(arg3, r15_1, &var_118, r13_1, &var_198)
                        
                        if (rax_4 s>= 0 && rax_4 s>= r12_1)
                            int16_t var_110
                            int32_t rcx_5
                            int32_t var_10c
                            
                            if (var_110 s< 0)
                                rcx_5 = var_10c
                            else
                                rcx_5 = sx.d(var_110) s>> 5
                            int32_t rax_8
                            
                            if (var_150_1 s< 0)
                                rax_8 = var_14c
                            else
                                rax_8 = sx.d(var_150_1) s>> 5
                            
                            if (rcx_5 s> rax_8)
                                r12_1 = rax_4
                                sub_142a48100(&var_158, &var_118)
                                int32_t r8_5 = zx.d(rsi_1[2].w) + rsi_1[1]
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
                                sub_142a48050(&var_d8, 
                                    sub_142a4ad20(var_190_1, &var_98, r8_5, *(r14_1 + 4) - r8_5))
                                sub_142a47ff0(&var_98)
                        
                        sub_142a47ff0(&var_118)
                        rdx = var_150_1
                        r10_1 = var_190_1
            
            arg1 = var_178
        while (rdi_1 s< result)
    
    if (result s<= 0 || r12_1 s< 0)
        *(arg5 + 0xc) = -1
    else
        *(arg5 + 0xc) = r12_1
        int32_t rax_11
        
        if (rdx s< 0)
            rax_11 = var_14c
        else
            rax_11 = sx.d(rdx) s>> 5
        
        *(arg5 + 0x10) = rax_11 + r12_1
        sub_142aa81a0(arg4, &var_d8)
    
    sub_142a47ff0(&var_158)
    result = sub_142a47ff0(&var_d8)
else
    *(arg5 + 0xc) = -1

__security_check_cookie(rax_1 ^ &var_1c8)
return result
