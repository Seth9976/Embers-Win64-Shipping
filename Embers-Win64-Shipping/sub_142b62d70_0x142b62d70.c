// 函数: sub_142b62d70
// 地址: 0x142b62d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* result

if (*arg7 s> 0)
    result = arg4
else if (arg3 s< 0)
    *arg7 = 1
    result = arg4
else if (arg2 != 0)
    if (arg6 s>= 0 && (arg5 != 0 || arg6 == 0))
        goto label_142b62e02
    
    *arg7 = 1
    result = arg4
else if (arg3 != 0 || arg6 s< 0 || (arg5 == 0 && arg6 != 0))
    *arg7 = 1
    result = arg4
else
label_142b62e02:
    int16_t rax_3 = *(arg1 + 8)
    uint32_t rdx = 0
    void* rbp_1
    
    if ((rax_3.b & 0x11) == 0)
        rbp_1 = arg1 + 0xa
        
        if ((rax_3.b & 2) == 0)
            rbp_1 = *(arg1 + 0x18)
    else
        rbp_1 = nullptr
    
    int32_t rsi_2
    
    if (rax_3 s< 0)
        rsi_2 = *(arg1 + 0xc)
    else
        rsi_2 = sx.d(rax_3) s>> 5
    
    if (rsi_2 != 0)
        rdx = zx.d(*rbp_1)
    
    if (arg3 s< rdx)
        *arg7 = 1
        result = arg4
    else
        int32_t r14_1 = -1
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t rdx_1 = 2
        int16_t var_80_1 = 2
        
        if (rsi_2 == 0 || zx.d(*rbp_1) == 0)
        label_142b62ecb:
            
            if ((*(arg4 + 8) & 1) == 0)
                *(arg4 + 8) &= 0x1f
            else
                *(arg4 + 8) = 2
        else
            int32_t rbx_1 = 1
            
            if (rsi_2 s<= 1)
                goto label_142b62ecb
            
            do
                uint64_t rcx = zx.q(*(rbp_1 + (sx.q(rbx_1) << 1)))
                rbx_1 += 1
                
                if (rcx.d u>= 0x100)
                    rbx_1 = rbx_1 - 0x100 + rcx.d
                else if (*(arg2 + (rcx << 3)) == arg4)
                    if (rbx_1 == 2)
                        r14_1 = rcx.d
                    else if ((rdx_1 & 0xffe0) == 0 && (*(arg4 + 8) & 0xffe0) != 0)
                        sub_142a48100(&var_88, arg4)
                        rdx_1 = var_80_1
            while (rbx_1 s< rsi_2)
            
            if (r14_1 s< 0)
                goto label_142b62ecb
        
        void* result_1 = sub_142b628c0(rbp_1, rsi_2, arg2, arg4, &var_88, 0, arg5, arg6, arg7)
        sub_142a47ff0(&var_88)
        result = result_1

__security_check_cookie(rax_1 ^ &var_e8)
return result
