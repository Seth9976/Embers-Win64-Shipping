// 函数: sub_142b61c30
// 地址: 0x142b61c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
int32_t var_78 = 0

if (*arg5 s> 0)
    sub_142a47a60(arg2, 0, u"other", 5)
else
    if (*(arg1 + 0x10) == 0)
        *(arg1 + 0x10) = sub_142a6f930(*(arg1 + 8) + 0x148, *(arg1 + 0x18), arg5)
    
    if (*(arg1 + 0x10) == 0 && *arg5 s> 0)
        sub_142a47a60(arg2, 0, u"other", 5)
    else
        int32_t rax_2 = sub_142b5fcf0(*(arg1 + 8), *arg3)
        int32_t rax_3 = sub_142b5fa80(*(arg1 + 8), rax_2, *(arg3 + 8))
        arg3[0x22] = rax_3
        
        if (rax_3 s> 0)
            int64_t* rcx_5 = *(*(arg1 + 8) + 0x2e0)
            
            if (rcx_5 != 0)
                *(arg3 + 0x90) = sub_142a86d40(rcx_5, rax_3)
        
        if (*(arg3 + 0x90) == 0)
            *(arg3 + 0x90) = sub_142b60e50(*(arg1 + 8), arg5)
            arg3[0x36].b = 1
        
        double zmm0_1 = sub_142aa7d40(&arg3[4], arg5)
        zmm0_1 f- arg4[0].q
        
        if (is_unordered.q(zmm0_1, arg4[0].q) || zmm0_1 f!= arg4[0].q)
            *arg5 = 5
            sub_142a47a60(arg2, 0, u"other", 5)
        else
            sub_142aa8370(*(arg3 + 0x90), &arg3[4], &arg3[0x26], arg5)
            void* rax_6 = __RTDynamicCast(*(arg3 + 0x90), 0, 
                &class icu_64::Format `RTTI Type Descriptor', 
                &class icu_64::DecimalFormat `RTTI Type Descriptor', 0)
            
            if (rax_6 == 0)
                sub_142a71450(*(arg1 + 0x10), arg2, arg4)
            else
                void var_68
                sub_142ab2be0(&var_68)
                uint128_t zmm0_2 = sub_142a5cbf0(rax_6, &arg3[4], &var_68, arg5)
                
                if (*arg5 s<= 0)
                    sub_142a71320(*(arg1 + 0x10), arg2, &var_68, zmm0_2)
                    sub_142ab2c10(&var_68)
                else
                    sub_142a47a60(arg2, 0, u"other", 5)
                    sub_142ab2c10(&var_68)

return arg2
