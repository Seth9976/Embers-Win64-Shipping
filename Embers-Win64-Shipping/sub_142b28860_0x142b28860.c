// 函数: sub_142b28860
// 地址: 0x142b28860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_b8
uint64_t var_48 = __security_cookie ^ &var_b8
uint64_t result

if (*arg2 s<= 0)
    int64_t rax_1 = *(arg1 + 0x188)
    *(arg1 + 0x198) = (*(rax_1 + 0x20))(rax_1, 1)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_80_1 = 2
    uint64_t rbp
    rbp.b = 0
    int32_t rax_3 = sub_142a55dd0(*(arg1 + 0x188))
    int32_t rsi_1 = rax_3
    void* rbx_1
    int32_t var_7c
    
    if (rax_3 s< 0)
    label_142b28af1:
        int32_t rdx_9 = var_7c
        int32_t r8_7
        
        if (var_80_1 s< 0)
            r8_7 = rdx_9
        else
            r8_7 = sx.d(var_80_1) s>> 5
        
        *(arg1 + 0x194) = *(arg1 + 0x198) - r8_7
        
        if (var_80_1 s>= 0)
            rdx_9 = sx.d(var_80_1) s>> 5
        
        int64_t rax_23 = *(arg1 + 0x188)
        (*(rax_23 + 0x28))(rax_23, rdx_9, 1)
        *(arg1 + 0x190) = 2
    label_142b28b3f:
        rbx_1.b = 1
    else
        while (true)
            void* r8_1 = *(arg1 + 0x1a0)
            int16_t rbx_2
            
            if (rsi_1 s>= zx.d(*(r8_1 + 8)))
                uint8_t rdx
                
                if (rsi_1 s<= 0xffff)
                    rdx = *((sx.q(rsi_1) s>> 8) + *(r8_1 + 0x38))
                
                if (rsi_1 s<= 0xffff && (rdx == 0 || (rdx u>> ((rsi_1 s>> 5).b & 7) & 1) == 0))
                    rbx_2 = 0
                    goto label_142b28958
                
                int16_t rax_7 = sub_142b1def0(r8_1, rsi_1)
                rbx_2 = rax_7
                
                if (rax_7.b == 0)
                    goto label_142b28958
            else
                rbx_2 = 0
            label_142b28958:
                
                if ((var_80_1 & 0xffe0) != 0)
                    sub_142a55d60(*(arg1 + 0x188))
                    goto label_142b28af1
            
            sub_142a48580(&var_88, rsi_1)
            
            if (rbx_2.b != 0
                    && ((rbp.b != 0 && rbx_2.b u> rbp.b) || (0xfffd & (0x7e7e + rbx_2)) == 0))
                bool cond:0_1 = rbx_2 u<= 0xff
                
                while (not(cond:0_1))
                    int32_t rax_10 = sub_142a55dd0(*(arg1 + 0x188))
                    int64_t rbx_3 = sx.q(rax_10)
                    
                    if (rax_10 s< 0)
                        break
                    
                    void* r9_1 = *(arg1 + 0x1a0)
                    
                    if (rbx_3.d s>= zx.d(*(r9_1 + 8)))
                        if (rbx_3.d s> 0xffff)
                        label_142b28a27:
                            int16_t rax_13 = sub_142b1def0(r9_1, rbx_3.d)
                            
                            if (rax_13 != 0)
                                sub_142a48580(&var_88, rbx_3.d)
                                cond:0_1 = rax_13 u<= 0xff
                                continue
                        else
                            uint8_t r8_2 = *((rbx_3 s>> 8) + *(r9_1 + 0x38))
                            
                            if (r8_2 != 0 && (r8_2 u>> ((rbx_3.d s>> 5).b & 7) & 1) != 0)
                                goto label_142b28a27
                    
                    sub_142a55d60(*(arg1 + 0x188))
                    break
                
                int32_t r8_4
                
                if (var_80_1 s< 0)
                    r8_4 = var_7c
                else
                    r8_4 = sx.d(var_80_1) s>> 5
                
                sub_142a49810(&var_88, 0, r8_4)
                sub_142b1c5c0(*(arg1 + 0x1a0), &var_88, arg1 + 0x1a8, arg2)
                
                if (*arg2 s> 0)
                    rbx_1.b = 0
                    break
                
                int32_t rcx_19 = *(arg1 + 0x198)
                *(arg1 + 0x19c) = rcx_19
                int32_t rax_17
                
                if (var_80_1 s< 0)
                    rax_17 = var_7c
                else
                    rax_17 = sx.d(var_80_1) s>> 5
                
                *(arg1 + 0x194) = rcx_19 - rax_17
                *(arg1 + 0x190) = 4
                int16_t rax_18 = *(arg1 + 0x1b0)
                int32_t rax_20
                
                if (rax_18 s< 0)
                    rax_20 = *(arg1 + 0x1b4)
                else
                    rax_20 = sx.d(rax_18) s>> 5
                
                *(arg1 + 0x198) = rax_20
                goto label_142b28b3f
            
            rbp.w = rbx_2 u>> 8
            
            if (rbp.b == 0)
                goto label_142b28af1
            
            int32_t rax_9 = sub_142a55dd0(*(arg1 + 0x188))
            rsi_1 = rax_9
            
            if (rax_9 s< 0)
                goto label_142b28af1
    sub_142a47ff0(&var_88)
    result = zx.q(rbx_1.b)
else
    result.b = 0

__security_check_cookie(var_48 ^ &var_b8)
return result
