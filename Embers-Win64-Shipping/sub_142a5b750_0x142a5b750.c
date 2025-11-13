// 函数: sub_142a5b750
// 地址: 0x142a5b750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = __RTDynamicCast(arg2, 0, &class icu_64::Format `RTTI Type Descriptor', 
    &class icu_64::DecimalFormat `RTTI Type Descriptor', 0)

if (result != 0)
    int64_t* rcx_1 = *(arg1 + 0x170)
    
    if (rcx_1 != 0)
        int64_t* rdx = *(result + 0x170)
        
        if (rdx != 0)
            if (sub_142aba980(*rcx_1, *rdx, 0) != 0
                    && sub_142aac160(*(*(arg1 + 0x170) + 8), *(*(result + 0x170) + 8)) != 0)
                return 1
            
            return 0

result.b = 0
return result
