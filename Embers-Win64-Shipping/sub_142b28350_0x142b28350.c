// 函数: sub_142b28350
// 地址: 0x142b28350
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
    uint64_t r14
    r14.b = 0
    int32_t rax_3 = sub_142a55d60(*(arg1 + 0x188))
    int32_t rsi_1 = rax_3
    int32_t rbx_1
    int32_t var_7c
    
    if (rax_3 s< 0)
    label_142b285ae:
        int32_t rdx_8 = var_7c
        int32_t rcx_23
        
        if (var_80_1 s< 0)
            rcx_23 = rdx_8
        else
            rcx_23 = sx.d(var_80_1) s>> 5
        
        *(arg1 + 0x19c) = rcx_23 + *(arg1 + 0x198)
        
        if (var_80_1 s>= 0)
            rdx_8 = sx.d(var_80_1) s>> 5
        
        int64_t rax_18 = *(arg1 + 0x188)
        (*(rax_18 + 0x28))(rax_18, zx.q(neg.d(rdx_8)), 1)
        *(arg1 + 0x190) = 2
    label_142b285fd:
        rbx_1.b = 1
    else
        while (true)
            void* r8_1 = *(arg1 + 0x1a0)
            uint16_t rbx_2
            
            if (rsi_1 s>= zx.d(*(r8_1 + 8)))
                uint8_t rdx
                
                if (rsi_1 s<= 0xffff)
                    rdx = *((sx.q(rsi_1) s>> 8) + *(r8_1 + 0x38))
                
                if (rsi_1 s<= 0xffff && (rdx == 0 || (rdx u>> ((rsi_1 s>> 5).b & 7) & 1) == 0))
                    rbx_2 = 0
                else
                    rbx_2 = sub_142b1def0(r8_1, rsi_1)
            else
                rbx_2 = 0
            
            uint16_t rbp_1 = rbx_2 u>> 8
            
            if (rbp_1.b == 0 && (var_80_1 & 0xffe0) != 0)
                sub_142a55dd0(*(arg1 + 0x188))
                goto label_142b285ae
            
            sub_142a48580(&var_88, rsi_1)
            
            if (rbp_1.b != 0 && (r14.b u> rbp_1.b || (0xfffd & (rbx_2 + 0x7e7e)) == 0))
                int32_t rax_8 = sub_142a55d60(*(arg1 + 0x188))
                rbx_1 = rax_8
                
                if (rax_8 s>= 0)
                    while (true)
                        void* r8_2 = *(arg1 + 0x1a0)
                        
                        if (rbx_1 s>= zx.d(*(r8_2 + 8)))
                            if (rbx_1 s> 0xffff)
                            label_142b28511:
                                
                                if (sub_142b1def0(r8_2, rbx_1) u> 0xff)
                                    sub_142a48580(&var_88, rbx_1)
                                    int32_t rax_13 = sub_142a55d60(*(arg1 + 0x188))
                                    rbx_1 = rax_13
                                    
                                    if (rax_13 s< 0)
                                        break
                                    
                                    continue
                            else
                                uint8_t rdx_3 = *((sx.q(rbx_1) s>> 8) + *(r8_2 + 0x38))
                                
                                if (rdx_3 != 0 && (rdx_3 u>> ((rbx_1 s>> 5).b & 7) & 1) != 0)
                                    goto label_142b28511
                        
                        sub_142a55dd0(*(arg1 + 0x188))
                        break
                
                sub_142b1c5c0(*(arg1 + 0x1a0), &var_88, arg1 + 0x1a8, arg2)
                
                if (*arg2 s> 0)
                    rbx_1.b = 0
                    break
                
                int32_t rcx_21 = *(arg1 + 0x198)
                *(arg1 + 0x194) = rcx_21
                int32_t rax_16
                
                if (var_80_1 s< 0)
                    rax_16 = var_7c
                else
                    rax_16 = sx.d(var_80_1) s>> 5
                
                *(arg1 + 0x19c) = rax_16 + rcx_21
                *(arg1 + 0x190) = 3
                *(arg1 + 0x198) = 0
                goto label_142b285fd
            
            r14 = zx.q(rbx_2.b)
            
            if (rbx_2.b == 0)
                goto label_142b285ae
            
            int32_t rax_7 = sub_142a55d60(*(arg1 + 0x188))
            rsi_1 = rax_7
            
            if (rax_7 s< 0)
                goto label_142b285ae
    sub_142a47ff0(&var_88)
    result = zx.q(rbx_1.b)
else
    result.b = 0

__security_check_cookie(var_48 ^ &var_b8)
return result
