// 函数: sub_142af2e70
// 地址: 0x142af2e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_b8
int64_t result = __security_cookie ^ &var_b8
int64_t result_1 = result
int32_t* r8 = *(arg1 + 8)

if (*r8 s<= 0)
    int64_t rbx_1 = sx.q(*(*(*(arg1 + 0x10) + 0x20) + 8))
    struct icu_64::UObject::icu_64::UVector32::VTable* var_98
    sub_142ae7c20(&var_98, rbx_1.d, r8)
    int32_t rdi_1 = 0
    int32_t rbp_1 = 0
    int64_t rbx_2 = 0
    int32_t var_90
    int64_t var_80
    
    if (rbx_1 s> 0)
        do
            int32_t var_8c
            
            if (var_90 + 1 s< 0 || var_8c s< var_90 + 1)
                if (sub_142ae7df0(&var_98, var_90 + 1, *(arg1 + 8)) != 0)
                    *(var_80 + (sx.q(var_90) << 2)) = rdi_1
                    var_90 += 1
            else
                *(var_80 + (sx.q(var_90) << 2)) = rdi_1
                var_90 += 1
            
            void* rax_5 = *(*(arg1 + 0x10) + 0x20)
            int32_t rcx_3
            
            if (rbx_2 s< 0 || rbp_1 s>= *(rax_5 + 8))
                rcx_3 = 0
            else
                rcx_3 = *(*(rax_5 + 0x18) + (rbx_2 << 3))
            
            rbp_1 += 1
            rbx_2 += 1
            int32_t rax_7 = rdi_1 + 1
            
            if ((rcx_3 & 0xff000000) != 0x7000000)
                rax_7 = rdi_1
            
            rdi_1 = rax_7
        while (rbx_2 s< rbx_1)
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_60_1 = 2
    int32_t rdi_2 = 0
    int32_t rbp_2 = 0
    int64_t rbx_3 = 0
    
    if (rbx_1 s> 0)
        do
            void* r8_2 = *(arg1 + 0x10)
            void* r10_1 = *(r8_2 + 0x20)
            int32_t rdx_5
            
            if (rbx_3 s< 0 || rbp_2 s>= *(r10_1 + 8))
                rdx_5 = 0
            else
                rdx_5 = *(*(r10_1 + 0x18) + (rbx_3 << 3))
            
            uint64_t r9_2 = zx.q(rdx_5 u>> 0x18)
            void* rcx_9
            int64_t rdx_9
            
            if (r9_2.d == 0xff)
            label_142af3082:
                rdx_9 = sx.q(rdx_5)
                rcx_9 = r10_1
            label_142af308b:
                sub_142aeb3c0(rcx_9, rdx_9, rdi_2)
            else
                if (r9_2.d u> 0x3a)
                    abort()
                    noreturn
                
                switch (r9_2)
                    case 0, 1, 2, 3, 4, 5, 8, 9, 0xa, 0xb, 0xc, 0xe, 0x10, 0x11, 0x13, 0x14, 0x15, 
                            0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1e, 0x20, 0x21, 0x23, 0x25, 0x26, 
                            0x27, 0x28, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 
                            0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a
                        goto label_142af3082
                    case 6, 0xd, 0xf, 0x12, 0x1c, 0x1d, 0x1f, 0x24
                        uint64_t rdx_6 = zx.q(rdx_5) & 0xffffff
                        int32_t r8_3
                        
                        if (var_90 s<= 0 || var_90 - rdx_6.d s<= 0)
                            r8_3 = 0
                        else
                            r8_3 = *(var_80 + (rdx_6 << 2))
                        
                        rdx_9 = sx.q(sub_142aeb970(arg1, r9_2.d, rdx_6.d - r8_3))
                        rcx_9 = *(*(arg1 + 0x10) + 0x20)
                        goto label_142af308b
                    case 7
                        goto label_142af3092
                    case 0x22, 0x29
                        int32_t rdx_10 = rdx_5 & 0xffffff
                        void* r10_2 = *(r8_2 + 0x88)
                        
                        if (rdx_10 s> *(r10_2 + 8))
                            sub_142af0120(arg1, 0x1030a)
                            goto label_142af3092
                        
                        int32_t rax_14
                        
                        if (rdx_10 - 1 s>= 0)
                            rax_14 = *(r10_2 + 8)
                        
                        int32_t r8_5
                        
                        if (rdx_10 - 1 s< 0 || rax_14 s<= 0 || rax_14 - (rdx_10 - 1) s<= 0)
                            r8_5 = 0
                        else
                            r8_5 = *(*(r10_2 + 0x18) + (sx.q(rdx_10 - 1) << 2))
                        
                        int64_t rdx_13 = sx.q(sub_142aeb970(arg1, r9_2.d, r8_5))
                        sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), rdx_13, rdi_2)
                        *(*(arg1 + 0x10) + 0xc8) = 1
            rdi_2 += 1
        label_142af3092:
            rbp_2 += 1
            rbx_3 += 1
        while (rbx_3 s< rbx_1)
    
    sub_142aeb430(*(*(arg1 + 0x10) + 0x20), rdi_2)
    sub_142a47ff0(&var_68)
    result = sub_142ae7c50(&var_98)

__security_check_cookie(result_1 ^ &var_b8)
return result
