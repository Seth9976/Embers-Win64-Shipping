// 函数: sub_142b4de50
// 地址: 0x142b4de50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d0 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* result = *(arg1 + 0x20)

if (result != 0)
    int32_t i = 0
    
    if (*(result + 8) s> 0)
        do
            int64_t rax_2 = sub_142ae72d0(*(arg1 + 0x20), i)
            int64_t rax_3 = sub_142ae72d0(*(arg1 + 0x20), i + 1)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
            sub_142a47a60(&var_88, 1, rax_2, 0xffffffff)
            
            if (*(arg1 + 0x10) != 0)
                goto label_142b4df26
            
            *(arg1 + 0x18) = 0x200
            int64_t* rax_4 = sub_142a7dd00(0x2000)
            *(arg1 + 0x10) = rax_4
            
            if (rax_4 != 0)
                *rax_4 = 0
                rax_4[1] = 0
                *(arg1 + 0x1c) = 1
            label_142b4df26:
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_c0_1 = 2
                int32_t rax_9
                void* rsi_1
                
                if (*(arg1 + 8) == 0)
                    int16_t var_80
                    
                    if ((var_80.b & 0x11) == 0)
                        void var_7e
                        rsi_1 = &var_7e
                        void* var_70
                        
                        if ((var_80.b & 2) == 0)
                            rsi_1 = var_70
                    else
                        rsi_1 = nullptr
                    
                    int32_t var_7c
                    
                    if (var_80 s< 0)
                        rax_9 = var_7c
                    else
                        rax_9 = sx.d(var_80) s>> 5
                else
                    sub_142a8ef00(sub_142a49d00(&var_c8, &var_88), 0)
                    char rax_6 = var_c0_1.b
                    
                    if ((rax_6 & 0x11) == 0)
                        void var_be
                        rsi_1 = &var_be
                        void* var_b0
                        
                        if ((rax_6 & 2) == 0)
                            rsi_1 = var_b0
                    else
                        rsi_1 = nullptr
                    
                    int32_t var_bc
                    
                    if (var_c0_1 s< 0)
                        rax_9 = var_bc
                    else
                        rax_9 = sx.d(var_c0_1) s>> 5
                
                int64_t* rcx_5 = *(arg1 + 0x10)
                int64_t j = 0
                
                if (rax_9 s> 0)
                    do
                        rcx_5 = sub_142b4dbc0(arg1, rcx_5, *(rsi_1 + (j << 1)), arg2)
                        j += 1
                    while (j s< sx.q(rax_9))
                
                sub_142b4dd90(rcx_5, rax_3, *(arg1 + 0x30), arg2)
                sub_142a47ff0(&var_c8)
            else
                *arg2 = 7
            
            sub_142a47ff0(&var_88)
            i += 2
            result = *(arg1 + 0x20)
        while (i s< *(result + 8))
    
    int64_t* rcx_9 = *(arg1 + 0x20)
    
    if (rcx_9 != 0)
        result = (**rcx_9)(rcx_9, 1)
    
    *(arg1 + 0x20) = 0

__security_check_cookie(rax_1 ^ &var_f8)
return result
