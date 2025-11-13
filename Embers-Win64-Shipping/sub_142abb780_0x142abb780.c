// 函数: sub_142abb780
// 地址: 0x142abb780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_8 = arg1
int64_t var_30 = -2
int32_t var_38 = 0
int32_t rsi = 0
int32_t rbp = 0
*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[1].w = 2
int32_t var_38_1 = 1

if (sub_142a4a1f0(arg2) s> 0)
    int16_t arg_18
    int32_t rax_5
    
    do
        int32_t rax_1 = sub_142a486d0(arg2, rbp)
        bool cond:0_1
        
        if (rax_1 s<= 0x2d)
            if (((rax_1 - 0x25) & 0xfffffff7) == 0)
                goto label_142abb86a
            
            if (rax_1 != 0x27)
                cond:0_1 = rax_1 == 0x2b
                goto label_142abb83b
            
            sub_142a48d70(arg1, &data_143655278, 0, 0xffffffff)
        else if (rax_1 == 0xa4)
        label_142abb86a:
            
            if (rsi != 0)
                sub_142a48580(arg1, rax_1)
            else
                arg_18 = 0x27
                sub_142a48d70(arg1, &arg_18, 0, rsi + 1)
                sub_142a48580(arg1, rax_1)
                rsi = 2
        else
            cond:0_1 = rax_1 == 0x2030
        label_142abb83b:
            
            if (cond:0_1)
                goto label_142abb86a
            
            if (rsi != 2)
                sub_142a48580(arg1, rax_1)
            else
                arg_18 = 0x27
                sub_142a48d70(arg1, &arg_18, 0, rsi - 1)
                sub_142a48580(arg1, rax_1)
                rsi = 0
        int32_t rax_3
        rax_3.b = rax_1 u> 0xffff
        rbp += rax_3 + 1
        rax_5 = sub_142a4a1f0(arg2)
    while (rbp s< rax_5)
    
    if (rsi == 2)
        arg_18 = 0x27
        sub_142a48d70(arg1, &arg_18, 0, rsi - 1)

return arg1
