// 函数: sub_142ae2a40
// 地址: 0x142ae2a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_158 = -2
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
sub_142ae4070(*(arg1 + 0xe8), arg2)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_100 = 2
int64_t r12
r12.b = 0
int32_t i = 0
int32_t i_1 = 0
void* rcx_1 = *(arg1 + 0xe8)

if (*(rcx_1 + 0xc88) s> 0)
    do
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148
        sub_142a479b0(&var_148, rcx_1 + 8 + (sx.q(i) << 6))
        int32_t var_13c
        int32_t rdi_1 = var_13c
        int16_t var_140
        int32_t rax_5
        
        if (var_140 s< 0)
            rax_5 = rdi_1
        else
            rax_5 = sx.d(var_140) s>> 5
        
        void var_13e
        void* var_130
        void* rax_6
        
        if (rax_5 != 0)
            rax_6 = &var_13e
            
            if ((var_140.b & 2) == 0)
                rax_6 = var_130
        
        if (rax_5 == 0 || *rax_6 != 0x27)
            int32_t rsi_1 = 0
            int32_t rax_8 = sub_142a4a1f0(&var_148)
            
            if (rax_8 s> 0)
                int64_t r8_1 = 0
                int16_t* r9_3 = nullptr
                
                while (true)
                    int32_t rcx_8
                    
                    if (var_140 s< 0)
                        rcx_8 = rdi_1
                    else
                        rcx_8 = sx.d(var_140) s>> 5
                    
                    int16_t rcx_9
                    
                    if (rsi_1 u< rcx_8)
                        void* rax_9 = &var_13e
                        
                        if ((var_140.b & 2) == 0)
                            rax_9 = var_130
                        
                        rcx_9 = *(r9_3 + rax_9) - 0x20
                    
                    if (rsi_1 u>= rcx_8 || rcx_9 u> 0x3c
                            || not(test_bit(0x1000000004003085, zx.q(rcx_9))))
                        void* rcx_12 = *(arg1 + 0xe8) + 8 + r8_1
                        int16_t rdx_4 = *(rcx_12 + 8)
                        int32_t rax_12
                        
                        if (rdx_4 s< 0)
                            rax_12 = *(rcx_12 + 0xc)
                        else
                            rax_12 = sx.d(rdx_4) s>> 5
                        
                        if (rax_12 == 0)
                            break
                        
                        void* rcx_13
                        
                        if ((rdx_4.b & 2) == 0)
                            rcx_13 = *(rcx_12 + 0x18)
                        else
                            rcx_13 = rcx_12 + 0xa
                        
                        if (*rcx_13 != 0x2e)
                            break
                    
                    rsi_1 += 1
                    r9_3 = &r9_3[1]
                    r8_1 += 0x40
                    
                    if (rsi_1 s>= rax_8)
                        goto label_142ae2c2f
                
                goto label_142ae2c58
            
        label_142ae2c2f:
            
            if (r12.b == 0)
            label_142ae2c58:
                int32_t rax_14
                
                if (var_140 s< 0)
                    rax_14 = rdi_1
                else
                    rax_14 = sx.d(var_140) s>> 5
                
                int16_t rcx_15
                
                if (rax_14 == 0)
                    rcx_15 = -1
                label_142ae2cae:
                    
                    if (r12.b != 0 || (0xffdb & (rcx_15 - 0x56)) == 0)
                        sub_142a47ff0(&var_148)
                        break
                else
                    void* rax_15 = &var_13e
                    
                    if ((var_140.b & 2) == 0)
                        rax_15 = var_130
                    
                    rcx_15 = *rax_15
                    
                    if (rcx_15 != 0x6d)
                        if (rcx_15 != 0x73)
                            goto label_142ae2cae
                        
                        if (r12.b != 0)
                            if (var_140 s>= 0)
                                rdi_1 = sx.d(var_140) s>> 5
                            
                            sub_142a48d00(&var_108, &var_148, 0, rdi_1)
                            int32_t rax_16 = *(arg1 + 0x11f8)
                            
                            if (rax_16 s<= 0)
                                sub_142ae04a0(arg1, &var_108, nullptr, 0, &var_88, arg3)
                            else
                                *arg3 = rax_16
                        
                        sub_142a47ff0(&var_148)
                        break
                    
                    r12.b = 1
                    
                    if (var_140 s>= 0)
                        rdi_1 = sx.d(var_140) s>> 5
                    
                    sub_142a48d00(&var_108, &var_148, 0, rdi_1)
            else
                if (var_140 s>= 0)
                    rdi_1 = sx.d(var_140) s>> 5
                
                sub_142a48d00(&var_108, &var_148, 0, rdi_1)
        else if (r12.b != 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_c0_1 = 2
            sub_142ae26e0(*(arg1 + 0xe8), &var_c8, &i_1)
            int32_t r9_2
            int32_t var_bc
            
            if (var_c0_1 s< 0)
                r9_2 = var_bc
            else
                r9_2 = sx.d(var_c0_1) s>> 5
            sub_142a48d00(&var_108, &var_c8, 0, r9_2)
            sub_142a47ff0(&var_c8)
            i = i_1
        
        sub_142a47ff0(&var_148)
        i += 1
        i_1 = i
        rcx_1 = *(arg1 + 0xe8)
    while (i s< *(rcx_1 + 0xc88))

sub_142a47ff0(&var_108)
sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_198)
return &icu_64::UObject::`vftable'
