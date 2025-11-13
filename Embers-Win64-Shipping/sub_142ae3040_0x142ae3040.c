// 函数: sub_142ae3040
// 地址: 0x142ae3040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t* rbx = arg4
int32_t* var_b0 = rbx
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** r10 = arg2
uint64_t r11 = arg1
uint64_t var_c8 = arg1
int32_t var_b8 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_90 = 2
arg1.b = 0
char var_d8 = 0
int16_t rax_3 = *(arg3 + 8)
int32_t r12_1

if (rax_3 s< 0)
    r12_1 = *(arg3 + 0xc)
else
    r12_1 = sx.d(rax_3) s>> 5

int32_t r13 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result

if (r12_1 s<= 0)
label_142ae335f:
    sub_142a47930(r10, &var_98)
    sub_142a47ff0(&var_98)
    result = arg2
else
    int64_t r15_1 = 0
    
    while (true)
        int16_t r8 = *(arg3 + 8)
        int32_t rax_5
        
        if (r8 s< 0)
            rax_5 = *(arg3 + 0xc)
        else
            rax_5 = sx.d(r8) s>> 5
        
        int16_t r9
        
        if (r13 u>= rax_5)
            r9 = -1
        label_142ae313b:
            
            if (arg1.b == 0)
                int16_t var_d0
                
                if (r9 == 0x6a || r9 == 0x43)
                    int32_t rbp_1 = 0
                    int32_t rdx_1 = r13 + 1
                    
                    while (rdx_1 s< r12_1)
                        int32_t rax_8
                        
                        if (r8 s< 0)
                            rax_8 = *(arg3 + 0xc)
                        else
                            rax_8 = sx.d(r8) s>> 5
                        
                        int16_t rcx_1
                        
                        if (rdx_1 u>= rax_8)
                            rcx_1 = -1
                        else
                            void* rax_9 = arg3 + 0xa
                            
                            if ((r8.b & 2) == 0)
                                rax_9 = *(arg3 + 0x18)
                            
                            rcx_1 = *(rax_9 + (r15_1 << 1) + 2)
                        
                        if (rcx_1 != r9)
                            break
                        
                        rbp_1 += 1
                        r13 += 1
                        rdx_1 += 1
                        r15_1 += 1
                    
                    int32_t i_1 = (rbp_1 & 1) + 1
                    int32_t i
                    
                    if (rbp_1 s>= 2)
                        i = (rbp_1 s>> 1) + 3
                    else
                        i = 1
                    
                    int16_t rbx_1 = 0x68
                    int16_t rsi_1 = 0x61
                    
                    if (r9 != 0x6a)
                        int32_t rcx_2 = *(r11 + 0x11dc)
                        
                        if (rcx_2 == 0xffffffff)
                            *arg5 = 3
                            *arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                            arg2[1].w = 2
                            sub_142a47ff0(&var_98)
                            result = arg2
                            break
                        
                        if (rcx_2 == 1 || rcx_2 - 8 u<= 1)
                            rbx_1 = 0x48
                        label_142ae325e:
                            
                            if (((rcx_2 - 5) & 0xfffffff9) == 0 && rcx_2 != 0xb)
                                rsi_1 = 0x42
                                goto label_142ae3285
                            
                            if (((rcx_2 - 4) & 0xfffffff9) != 0)
                                goto label_142ae3285
                            
                            if (rcx_2 != 0xa)
                                rsi_1 = 0x62
                            
                            goto label_142ae3285
                        
                        if (((rcx_2 - 2) & 0xfffffffa) != 0)
                            if (rcx_2 != 3)
                                goto label_142ae325e
                            
                            rbx_1 = 0x6b
                        else
                            if (rcx_2 != 3)
                                rbx_1 = 0x4b
                                goto label_142ae325e
                            
                            rbx_1 = 0x6b
                    else
                        rbx_1 = *(r11 + 0x11d8)
                    label_142ae3285:
                        
                        if (rbx_1 != 0x48 && rbx_1 != 0x6b && i s> 0)
                            do
                                i -= 1
                                var_d0 = rsi_1
                                sub_142a48d70(&var_98, &var_d0, 0, 1)
                            while (i s> 0)
                    
                    do
                        i_1 -= 1
                        var_d0 = rbx_1
                        sub_142a48d70(&var_98, &var_d0, 0, 1)
                    while (i_1 s> 0)
                    
                    rbx = var_b0
                else
                    int16_t* rdx = &var_d0
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx = &var_98
                    
                    if (r9 != 0x4a)
                        var_d0 = r9
                        sub_142a48d70(rcx, rdx, 0, 1)
                    else
                        var_d0 = 0x48
                        sub_142a48d70(rcx, rdx, 0, 1)
                        *rbx |= 2
                arg1 = zx.q(var_d8)
                r11 = var_c8
        else
            void* rax_6 = arg3 + 0xa
            
            if ((r8.b & 2) == 0)
                rax_6 = *(arg3 + 0x18)
            
            r9 = *(rax_6 + (r15_1 << 1))
            
            if (r9 != 0x27)
                goto label_142ae313b
            
            arg1.b = arg1.b == 0
            var_d8 = arg1.b
        r13 += 1
        r15_1 += 1
        
        if (r15_1 s>= sx.q(r12_1))
            r10 = arg2
            goto label_142ae335f

__security_check_cookie(rax_1 ^ &var_f8)
return result
