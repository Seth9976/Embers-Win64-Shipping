// 函数: sub_142aa1530
// 地址: 0x142aa1530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
uint64_t result

if (arg1 != arg2)
    if (sub_142a57090(arg1, arg2).b != 0)
        if (sub_142b26ff0(arg1[2], arg2[2]).b == 0)
            result.b = 0
        else
            result = arg1[1]
            void* rcx_1 = arg2[1]
            
            if (result == rcx_1)
                result.b = 1
            else
                int64_t rdx_1 = *(result + 0x20)
                int64_t r8_1 = *(rcx_1 + 0x20)
                rcx_1.b = r8_1 == 0
                result.b = rdx_1 == 0
                
                if (result.b != rcx_1.b)
                    result.b = 0
                else
                    if ((rdx_1 == 0 || (*(arg1[3] + 0x30) & 0xffe0) != 0)
                            && (r8_1 == 0 || (*(arg2[3] + 0x30) & 0xffe0) != 0))
                        result = sub_142a48110(arg1[3] + 0x28, arg2[3] + 0x28)
                    
                    if ((rdx_1 != 0 && (*(arg1[3] + 0x30) & 0xffe0) == 0)
                            || (r8_1 != 0 && (*(arg2[3] + 0x30) & 0xffe0) == 0) || result.b == 0)
                        int32_t arg_8 = 0
                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_3 =
                            (*(*arg1 + 0xf0))(arg1, &arg_8)
                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** arg_10 = rax_3
                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_5 =
                            (*(*arg2 + 0xf0))(arg2, &arg_8)
                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** arg_18 = rax_5
                        int64_t rsi
                        
                        if (arg_8 s> 0)
                            rsi.b = 0
                        else if (sub_142a9dc80(rax_3, rax_5) == 0)
                            rsi.b = 0
                        else
                            rsi.b = 1
                        
                        if (rax_5 != 0)
                            sub_142a9dbc0(rax_5)
                            sub_142a47920(rax_5)
                        
                        if (rax_3 != 0)
                            sub_142a9dbc0(rax_3)
                            sub_142a47920(rax_3)
                        
                        return zx.q(rsi.b)
                    
                    result.b = 1
    else
        result.b = 0
else
    result.b = 1

return result
