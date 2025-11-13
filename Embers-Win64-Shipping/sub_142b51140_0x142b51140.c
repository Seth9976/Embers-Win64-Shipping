// 函数: sub_142b51140
// 地址: 0x142b51140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_10 = arg2
int64_t var_10 = -2
int32_t rdi = 0
int32_t var_18 = 0
sub_142a47e10(arg2, arg3, 0xffffffff)
int32_t var_18_1 = 1

if (sub_142a4a1f0(arg2) s> 0)
    int16_t* rsi_1 = nullptr
    int32_t rax_5
    
    do
        int16_t rcx_2 = arg2[1].w
        int32_t rax_3
        
        if (rcx_2 s< 0)
            rax_3 = *(arg2 + 0xc)
        else
            rax_3 = sx.d(rcx_2) s>> 5
        
        if (rdi u< rax_3)
            void* rax_4 = arg2 + 0xa
            
            if ((rcx_2.b & 2) == 0)
                rax_4 = arg2[3]
            
            if (*(rsi_1 + rax_4) == 0x3a)
                sub_142a4a800(arg2, rdi, 0x2f)
        
        rdi += 1
        rsi_1 = &rsi_1[1]
        rax_5 = sub_142a4a1f0(arg2)
    while (rdi s< rax_5)

return arg2
