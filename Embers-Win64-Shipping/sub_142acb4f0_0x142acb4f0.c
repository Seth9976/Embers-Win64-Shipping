// 函数: sub_142acb4f0
// 地址: 0x142acb4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg5 != 0)
    *arg5 = 0

int16_t rax = *(arg2 + 8)
int64_t rbx = sx.q(*(arg3 + 8))
int32_t rcx_1

if (rax s< 0)
    rcx_1 = *(arg2 + 0xc)
else
    rcx_1 = sx.d(rax) s>> 5

if (rbx.d s>= rcx_1)
    *(arg3 + 0xc) = rbx.d
    return 0

int32_t rcx_3

if (rax s< 0)
    rcx_3 = *(arg2 + 0xc)
else
    rcx_3 = sx.d(rax) s>> 5

if (rbx.d u>= rcx_3)
    *(arg3 + 0xc) = rbx.d
else
    void* rcx_4 = arg2 + 0xa
    
    if ((rax.b & 2) == 0)
        rcx_4 = *(arg2 + 0x18)
    
    int16_t rcx_5 = *(rcx_4 + (rbx << 1))
    
    if ((0xffdf & (rcx_5 - 0x5a)) == 0)
        *(arg3 + 8) = (rbx + 1).d
    else
        int32_t r15_1
        
        if (rcx_5 == 0x2b)
            r15_1 = 1
        label_142acb5be:
            int32_t r12_1 = (rbx + 1).d
            struct icu_64::UObject::icu_64::ParsePosition::VTable* var_48 =
                &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
            int32_t var_40_1 = r12_1
            int32_t var_3c_1 = 0xffffffff
            int32_t var_58_1 = 2
            int32_t rsi_1 = sub_142aca7d0(arg2, &var_48, 0x3a, 0, 2)
            int32_t rsi_2
            
            if (var_3c_1 != 0xffffffff)
                *(arg3 + 0xc) = rbx.d
                rsi_2 = 0
            else
                int32_t rcx_7
                
                if (arg4 != 0)
                label_142acb668:
                    rcx_7 = var_40_1
                label_142acb66c:
                    *(arg3 + 8) = rcx_7
                    
                    if (arg5 != 0)
                        *arg5 = 1
                    
                    rsi_2 = rsi_1 * r15_1
                else
                    rcx_7 = var_40_1
                    
                    if (rcx_7 - rbx.d s> 3)
                        goto label_142acb66c
                    
                    struct icu_64::UObject::icu_64::ParsePosition::VTable* var_38 =
                        &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
                    int32_t var_2c_1 = 0xffffffff
                    var_58_1.b = arg4
                    int32_t rax_6 = sub_142aca310(arg2, &var_38, 0, 2, 2)
                    
                    if (var_2c_1 == 0xffffffff && r12_1 s> var_40_1)
                        rsi_1 = rax_6
                        var_40_1 = r12_1
                    
                    sub_142aa8450(&var_38)
                    
                    if (var_3c_1 == 0xffffffff)
                        goto label_142acb668
                    
                    *(arg3 + 0xc) = rbx.d
                    rsi_2 = 0
            
            sub_142aa8450(&var_48)
            return zx.q(rsi_2)
        
        if (rcx_5 == 0x2d)
            r15_1 = -1
            goto label_142acb5be
        
        *(arg3 + 0xc) = rbx.d

return 0
