// 函数: sub_142b2bee0
// 地址: 0x142b2bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_c8
uint64_t var_48 = __security_cookie ^ &var_c8
uint64_t result

if (*arg2 s<= 0)
    int32_t r15_1 = *(arg1 + 0x190)
    int32_t r12_1 = r15_1
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_80_1 = 2
    uint64_t rbp
    rbp.b = 0
    void* rbx_1
    
    while (true)
        *(arg1 + 0x190) = r15_1 - 1
        int64_t rcx = *(arg1 + 0x188)
        uint32_t rdi_1 = zx.d(*(sx.q(r15_1 - 1) + rcx))
        
        if (rdi_1.b s< 0)
            rdi_1 = sub_142a9be90(rcx, 0, arg1 + 0x190, rdi_1, 0xfd)
        
        void* r8_2 = *(arg1 + 0x1a8)
        
        if (rdi_1 s>= zx.d(*(r8_2 + 8)))
            uint8_t rdx
            
            if (rdi_1 s<= 0xffff)
                rdx = (sx.q(rdi_1) s>> 8)[*(r8_2 + 0x38)]
            
            if (rdi_1 s> 0xffff || (rdx != 0 && (rdx u>> ((rdi_1 s>> 5).b & 7) & 1) != 0))
                int16_t rax_8 = sub_142b1def0(r8_2, rdi_1)
                rbx_1 = zx.q(rax_8)
                
                if (rax_8.b != 0 || r15_1 == r12_1)
                    goto label_142b2bfe4
                
                goto label_142b2c029
            
            rbx_1 = nullptr
        else
            rbx_1 = nullptr
        
        if (r15_1 != r12_1)
        label_142b2c029:
            *(arg1 + 0x190) = r15_1
        label_142b2c15b:
            *(arg1 + 0x19c) = *(arg1 + 0x190)
            *(arg1 + 0x190) = r12_1
            *(arg1 + 0x198) = 2
        else
        label_142b2bfe4:
            sub_142a48580(&var_88, rdi_1)
            
            if (rbx_1.b == 0
                    || ((rbp.b == 0 || rbx_1.b u<= rbp.b) && (0xfffd & (0x7e7e + rbx_1.w)) != 0))
                rbp.w = rbx_1.w u>> 8
                r15_1 = *(arg1 + 0x190)
                
                if (r15_1 != 0 && rbp.b != 0)
                    continue
                
                goto label_142b2c15b
            
            bool cond:0_1 = rbx_1.w u<= 0xff
            
            while (not(cond:0_1))
                int32_t rdi_2 = *(arg1 + 0x190)
                
                if (rdi_2 == 0)
                    break
                
                *(arg1 + 0x190) = rdi_2 - 1
                int64_t rcx_6 = *(arg1 + 0x188)
                uint32_t rbx_2 = zx.d(*(sx.q(rdi_2 - 1) + rcx_6))
                
                if (rbx_2.b s< 0)
                    rbx_2 = sub_142a9be90(rcx_6, 0, arg1 + 0x190, rbx_2, 0xfd)
                
                void* r8_4 = *(arg1 + 0x1a8)
                
                if (rbx_2 s>= zx.d(*(r8_4 + 8)))
                    if (rbx_2 s> 0xffff)
                    label_142b2c0b6:
                        int16_t rax_17 = sub_142b1def0(r8_4, rbx_2)
                        
                        if (rax_17 != 0)
                            sub_142a48580(&var_88, rbx_2)
                            cond:0_1 = rax_17 u<= 0xff
                            continue
                    else
                        uint8_t rdx_3 = (sx.q(rbx_2) s>> 8)[*(r8_4 + 0x38)]
                        
                        if (rdx_3 != 0 && (rdx_3 u>> ((rbx_2 s>> 5).b & 7) & 1) != 0)
                            goto label_142b2c0b6
                
                *(arg1 + 0x190) = rdi_2
                break
            
            int32_t r8_6
            int32_t var_7c
            
            if (var_80_1 s< 0)
                r8_6 = var_7c
            else
                r8_6 = sx.d(var_80_1) s>> 5
            sub_142a49810(&var_88, 0, r8_6)
            sub_142b1c5c0(*(arg1 + 0x1a8), &var_88, arg1 + 0x1b0, arg2)
            
            if (*arg2 s> 0)
                rbx_1.b = 0
                break
            
            *(arg1 + 0x1a0) = r12_1
            *(arg1 + 0x19c) = *(arg1 + 0x190)
            *(arg1 + 0x198) = 3
            int16_t rax_20 = *(arg1 + 0x1b8)
            int32_t rax_22
            
            if (rax_20 s< 0)
                rax_22 = *(arg1 + 0x1bc)
            else
                rax_22 = sx.d(rax_20) s>> 5
            
            *(arg1 + 0x190) = rax_22
        
        rbx_1.b = 1
        break
    
    sub_142a47ff0(&var_88)
    result = zx.q(rbx_1.b)
else
    result.b = 0

__security_check_cookie(var_48 ^ &var_c8)
return result
