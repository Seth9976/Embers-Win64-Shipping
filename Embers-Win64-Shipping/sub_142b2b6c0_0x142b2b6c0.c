// 函数: sub_142b2b6c0
// 地址: 0x142b2b6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_b8
uint64_t var_48 = __security_cookie ^ &var_b8
uint64_t result

if (*arg2 s<= 0)
    int32_t r14_1 = *(arg1 + 0x190)
    int32_t r12_1 = r14_1
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_80_1 = 2
    uint64_t r15
    r15.b = 0
    uint32_t rbx_1
    
    while (true)
        int64_t r9_1 = *(arg1 + 0x188)
        rbx_1 = zx.d(*(sx.q(r14_1) + r9_1))
        int32_t r8_1 = r14_1 + 1
        *(arg1 + 0x190) = r8_1
        
        if (rbx_1.b s< 0)
            int32_t r10_1 = *(arg1 + 0x194)
            
            if (r8_1 == r10_1)
                rbx_1 = 0xfffd
            else
                int32_t rbx_6
                
                if (rbx_1 u< 0xe0)
                    if (rbx_1 u< 0xc2)
                        rbx_1 = 0xfffd
                    else
                        rbx_6 = rbx_1 & 0x1f
                    label_142b2b835:
                        char rcx_4 = *(sx.q(r8_1) + r9_1) - 0x80
                        
                        if (rcx_4 u> 0x3f)
                            rbx_1 = 0xfffd
                        else
                            rbx_1 = rbx_6 << 6 | zx.d(rcx_4)
                            *(arg1 + 0x190) = r8_1 + 1
                else
                    uint64_t rbx_2
                    uint32_t r8_2
                    
                    if (rbx_1 u< 0xf0)
                        rbx_2 = zx.q(rbx_1) & 0xf
                        r8_2 = zx.d(*(sx.q(r8_1) + r9_1))
                        
                        if (not(test_bit(sx.d((*" 000000000000")[rbx_2]), zx.d((r8_2 u>> 5).b))))
                            rbx_1 = 0xfffd
                        else
                            r8_2.b &= 0x3f
                        label_142b2b80c:
                            rbx_6 = rbx_2.d << 6 | zx.d(r8_2.b)
                            *(arg1 + 0x190) += 1
                            r8_1 = *(arg1 + 0x190)
                            
                            if (r8_1 != r10_1)
                                goto label_142b2b835
                            
                            rbx_1 = 0xfffd
                    else if (rbx_1 - 0xf0 s> 4)
                        rbx_1 = 0xfffd
                    else
                        uint32_t rcx_1 = zx.d(*(sx.q(r8_1) + r9_1))
                        
                        if (not(test_bit(sx.d(*((zx.q(rcx_1) u>> 4) + 0x14363c6e8)), rbx_1 - 0xf0)))
                            rbx_1 = 0xfffd
                        else
                            rbx_2 = (zx.q(rcx_1.b) & 0x3f) | zx.q((rbx_1 - 0xf0) << 6)
                            *(arg1 + 0x190) = r8_1 + 1
                            
                            if (r8_1 + 1 == r10_1)
                                rbx_1 = 0xfffd
                            else
                                r8_2.b = *(sx.q(r8_1 + 1) + r9_1) - 0x80
                                
                                if (r8_2.b u<= 0x3f)
                                    goto label_142b2b80c
                                
                                rbx_1 = 0xfffd
        
        void* r8_4 = *(arg1 + 0x1a8)
        uint16_t rsi_1
        
        if (rbx_1 s>= zx.d(*(r8_4 + 8)))
            uint8_t rdx_1
            
            if (rbx_1 s<= 0xffff)
                rdx_1 = (sx.q(rbx_1) s>> 8)[*(r8_4 + 0x38)]
            
            if (rbx_1 s<= 0xffff && (rdx_1 == 0 || (rdx_1 u>> ((rbx_1 s>> 5).b & 7) & 1) == 0))
                rsi_1 = 0
            else
                rsi_1 = sub_142b1def0(r8_4, rbx_1)
        else
            rsi_1 = 0
        
        uint16_t rbp_1 = rsi_1 u>> 8
        int32_t rax_43
        
        if (rbp_1.b != 0 || r14_1 == r12_1)
            sub_142a48580(&var_88, rbx_1)
            
            if (rbp_1.b == 0 || (r15.b u<= rbp_1.b && (0xfffd & (0x7e7e + rsi_1)) != 0))
                r15 = zx.q(rsi_1.b)
                r14_1 = *(arg1 + 0x190)
                
                if (r14_1 != *(arg1 + 0x194) && rsi_1.b != 0)
                    continue
                
                goto label_142b2bb21
            
            if (*(arg1 + 0x190) != *(arg1 + 0x194))
                while (true)
                    int64_t rsi_2 = sx.q(*(arg1 + 0x190))
                    int64_t r9_2 = *(arg1 + 0x188)
                    rbx_1 = zx.d(*(rsi_2 + r9_2))
                    int32_t r8_5 = (rsi_2 + 1).d
                    *(arg1 + 0x190) = r8_5
                    
                    if (rbx_1.b s< 0)
                        int32_t r10_2 = *(arg1 + 0x194)
                        
                        if (r8_5 == r10_2)
                            rbx_1 = 0xfffd
                        else
                            int32_t rbx_12
                            
                            if (rbx_1 u< 0xe0)
                                if (rbx_1 u< 0xc2)
                                    rbx_1 = 0xfffd
                                else
                                    rbx_12 = rbx_1 & 0x1f
                                label_142b2ba43:
                                    char rcx_15 = *(sx.q(r8_5) + r9_2) - 0x80
                                    
                                    if (rcx_15 u> 0x3f)
                                        rbx_1 = 0xfffd
                                    else
                                        rbx_1 = rbx_12 << 6 | zx.d(rcx_15)
                                        *(arg1 + 0x190) = r8_5 + 1
                            else
                                uint64_t rbx_8
                                uint32_t r8_6
                                
                                if (rbx_1 u< 0xf0)
                                    rbx_8 = zx.q(rbx_1) & 0xf
                                    r8_6 = zx.d(*(sx.q(r8_5) + r9_2))
                                    
                                    if (not(test_bit(sx.d((*" 000000000000")[rbx_8]), 
                                            zx.d((r8_6 u>> 5).b))))
                                        rbx_1 = 0xfffd
                                    else
                                        r8_6.b &= 0x3f
                                    label_142b2ba1a:
                                        rbx_12 = rbx_8.d << 6 | zx.d(r8_6.b)
                                        *(arg1 + 0x190) += 1
                                        r8_5 = *(arg1 + 0x190)
                                        
                                        if (r8_5 != r10_2)
                                            goto label_142b2ba43
                                        
                                        rbx_1 = 0xfffd
                                else if (rbx_1 - 0xf0 s> 4)
                                    rbx_1 = 0xfffd
                                else
                                    uint32_t rcx_12 = zx.d(*(sx.q(r8_5) + r9_2))
                                    
                                    if (not(test_bit(sx.d(*((zx.q(rcx_12) u>> 4) + 0x14363c6e8)), 
                                            rbx_1 - 0xf0)))
                                        rbx_1 = 0xfffd
                                    else
                                        rbx_8 = (zx.q(rcx_12.b) & 0x3f) | zx.q((rbx_1 - 0xf0) << 6)
                                        *(arg1 + 0x190) = r8_5 + 1
                                        
                                        if (r8_5 + 1 == r10_2)
                                            rbx_1 = 0xfffd
                                        else
                                            r8_6.b = *(sx.q(r8_5 + 1) + r9_2) - 0x80
                                            
                                            if (r8_6.b u<= 0x3f)
                                                goto label_142b2ba1a
                                            
                                            rbx_1 = 0xfffd
                    
                    void* r8_8 = *(arg1 + 0x1a8)
                    
                    if (rbx_1 s>= zx.d(*(r8_8 + 8)))
                        if (rbx_1 s> 0xffff)
                        label_142b2baa3:
                            
                            if (sub_142b1def0(r8_8, rbx_1) u> 0xff)
                                sub_142a48580(&var_88, rbx_1)
                                
                                if (*(arg1 + 0x190) == *(arg1 + 0x194))
                                    break
                                
                                continue
                        else
                            uint8_t rdx_5 = *((sx.q(rbx_1) s>> 8) + *(r8_8 + 0x38))
                            
                            if (rdx_5 != 0 && (rdx_5 u>> ((rbx_1 s>> 5).b & 7) & 1) != 0)
                                goto label_142b2baa3
                    
                    *(arg1 + 0x190) = rsi_2.d
                    break
            
            sub_142b1c5c0(*(arg1 + 0x1a8), &var_88, arg1 + 0x1b0, arg2)
            
            if (*arg2 s> 0)
                rbx_1.b = 0
                break
            
            *(arg1 + 0x19c) = r12_1
            rax_43 = *(arg1 + 0x190)
            *(arg1 + 0x198) = 3
            *(arg1 + 0x190) = 0
        else
            *(arg1 + 0x190) = r14_1
        label_142b2bb21:
            rax_43 = *(arg1 + 0x190)
            *(arg1 + 0x190) = r12_1
            *(arg1 + 0x198) = 2
        
        rbx_1.b = 1
        *(arg1 + 0x1a0) = rax_43
        break
    
    sub_142a47ff0(&var_88)
    result = zx.q(rbx_1.b)
else
    result.b = 0

__security_check_cookie(var_48 ^ &var_b8)
return result
