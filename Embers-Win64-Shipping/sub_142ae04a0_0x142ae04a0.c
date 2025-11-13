// 函数: sub_142ae04a0
// 地址: 0x142ae04a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1c0 = -2
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* const var_1d0 = arg5
int32_t rax_3 = *(arg1 + 0x11f8)
uint64_t result

if (rax_3 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1b8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_1b0_1 = 2
    struct icu_64::PtnSkeleton::VTable* const var_d8 = &icu_64::PtnSkeleton::`vftable'
    int64_t var_90
    __builtin_memset(&var_90, 0, 0x40)
    int32_t result_3 = 0
    struct icu_64::DateTimeMatcher::VTable* const var_178 = &icu_64::DateTimeMatcher::`vftable'
    struct icu_64::PtnSkeleton::VTable* const var_170_1 = &icu_64::PtnSkeleton::`vftable'
    int64_t var_128
    __builtin_memset(&var_128, 0, 0x40)
    int64_t* r9 = &var_d8
    int64_t* r8 = *(arg1 + 0xe8)
    struct icu_64::DateTimeMatcher::VTable* const* rcx = &var_178
    int16_t var_1b0_2
    int32_t result_1
    int16_t var_1e0
    int64_t var_108
    int64_t var_f8
    
    if (arg3 != 0)
        sub_142ae3d60(rcx, arg3, r8, r9)
        int16_t rax_5 = var_1b0_1 & 0x1f
        
        if ((var_1b0_1.b & 1) != 0)
            rax_5 = 2
        
        var_1b0_2 = rax_5
        int64_t i = 0
        result_1 = 1
        
        do
            int16_t rdi_2 = sx.w(*(&var_108 + i))
            int32_t j_5 = sx.d(*(&var_f8 + i))
            
            if (j_5 s> 0)
                uint64_t j_3 = zx.q(j_5)
                uint64_t j
                
                do
                    var_1e0 = rdi_2
                    sub_142a48d70(&var_1b8, &var_1e0, 0, 1)
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            i += 1
        while (i s< 0x10)
    else
        sub_142ae3d60(rcx, arg2, r8, r9)
        int16_t rax_4 = var_1b0_1 & 0x1f
        
        if ((var_1b0_1.b & 1) != 0)
            rax_4 = 2
        
        var_1b0_2 = rax_4
        int64_t i_1 = 0
        result_1 = 1
        
        do
            int16_t rdi_1 = sx.w(*(&var_108 + i_1))
            int32_t j_4 = sx.d(*(&var_f8 + i_1))
            
            if (j_4 s> 0)
                uint64_t j_2 = zx.q(j_4)
                uint64_t j_1
                
                do
                    var_1e0 = rdi_1
                    sub_142a48d70(&var_1b8, &var_1e0, 0, 1)
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
            
            i_1 += 1
        while (i_1 s< 0x10)
    int32_t var_1ac
    int32_t r11_1 = var_1ac
    int16_t r8_1 = var_1b0_2
    int32_t rax_7
    
    if (r8_1 s< 0)
        rax_7 = r11_1
    else
        rax_7 = sx.d(r8_1) s>> 5
    
    int32_t result_2
    void* const rsi_1
    char rdi_3
    
    if (rax_7 == 0)
    label_142ae07cf:
        rdi_3 = arg4
    label_142ae07d4:
        result_2 = result_3
        rsi_1 = var_1d0
    label_142ae07dd:
        var_1d0 = nullptr
        void* rax_19 = sub_142ae25f0(*(arg1 + 0x100), &var_d8, &var_1d0)
        bool cond:1_1
        
        if (rax_19 == 0)
        label_142ae0822:
            cond:1_1 = arg3 != 0
        label_142ae0825:
            rax_19.b = cond:1_1
            sub_142adfb50(*(arg1 + 0x100), &var_1b8, &var_d8, arg2, rax_19.b, arg6)
            
            if (*arg6 s<= 0)
                result_1 = 0
            else
                result_1 = result_2
        else
            result_2 = 2
            sub_142a48100(rsi_1, rax_19)
            
            if (rdi_3 == 0)
                result_1 = result_2
            else
                cond:1_1 = arg3 != 0
                
                if (arg3 == 0)
                    goto label_142ae0825
                
                if (var_1d0 == 0)
                    goto label_142ae0822
                
                result_1 = result_2
    else
        char r9_1 = var_1b0_2.b
        void var_1ae
        void* rax_8 = &var_1ae
        void* var_1a0
        
        if ((r9_1 & 2) == 0)
            rax_8 = var_1a0
        int16_t rcx_3 = *rax_8
        int32_t rax_11
        
        if (rcx_3 - 0x41 u> 0x19)
            if (rcx_3 - 0x61 u> 0x19)
                goto label_142ae07cf
            
            rax_11 = zx.d(rcx_3) - 0x47
        else
            rax_11 = zx.d(rcx_3) - 0x41
        
        void* rbx_2 = *(*(arg1 + 0x100) + (sx.q(rax_11) << 3) + 8)
        
        while (true)
            if (rbx_2 == 0)
                goto label_142ae07cf
            
            int16_t rdx_3 = *(rbx_2 + 0x10)
            int32_t rcx_5
            
            if (rdx_3 s< 0)
                rcx_5 = *(rbx_2 + 0x14)
            else
                rcx_5 = sx.d(rdx_3) s>> 5
            
            int32_t r10_2
            
            if (r8_1 s< 0)
                r10_2 = r11_1
            else
                r10_2 = sx.d(r8_1) s>> 5
            
            char rax_15
            
            if ((*(rbx_2 + 0x10) & 1) == 0)
                int32_t rax_17
                
                if (rdx_3 s< 0)
                    rax_17 = *(rbx_2 + 0x14)
                else
                    rax_17 = sx.d(rdx_3) s>> 5
                
                int32_t r8_2 = 0
                
                if (rax_17 s< 0)
                    r8_2 = rax_17
                
                if (rcx_5 s>= 0)
                    int32_t rax_18 = rax_17 - r8_2
                    
                    if (rcx_5 s> rax_18)
                        rcx_5 = rax_18
                else
                    rcx_5 = 0
                
                void* r9_2 = rbx_2 + 0x12
                
                if ((rdx_3.b & 2) == 0)
                    r9_2 = *(rbx_2 + 0x20)
                
                char var_1f8
                var_1f8.d = r8_2
                rax_15 = sub_142a48fb0(&var_1b8, 0, r10_2, r9_2, var_1f8, rcx_5)
                r11_1 = var_1ac
                r8_1 = var_1b0_2
                r9_1 = r8_1.b
            else
                rax_15 = not.b(r9_1) & 1
            
            if (rax_15 == 0)
                break
            
            rbx_2 = *(rbx_2 + 0x98)
        
        rdi_3 = arg4
        
        if (rbx_2 == -0x50 || (*(rbx_2 + 0x90) != 0 && (arg3 == 0 || rdi_3 != 0)))
            goto label_142ae07d4
        
        result_2 = 1
        rsi_1 = var_1d0
        sub_142a48100(rsi_1, rbx_2 + 0x50)
        
        if (rdi_3 != 0)
            goto label_142ae07dd
    sub_142a47ff0(&var_1b8)
    result = zx.q(result_1)
else
    *arg6 = rax_3
    result = 0

__security_check_cookie(rax_1 ^ &var_218)
return result
