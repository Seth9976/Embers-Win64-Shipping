// 函数: sub_142a643e0
// 地址: 0x142a643e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = __RTtypeid(arg2)
int32_t result

if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax + 8) == 0)
    bool cond:1_1
    
    if ((*(arg1 + 0x10) & 1) == 0)
        int16_t rax_2 = *(arg1 + 0x10)
        int32_t r8_2
        
        if (rax_2 s< 0)
            r8_2 = *(arg1 + 0x14)
        else
            r8_2 = sx.d(rax_2) s>> 5
        
        int16_t rax_3 = *(arg2 + 0x10)
        
        if (rax_3 s< 0)
            result = *(arg2 + 0x14)
        else
            result = sx.d(rax_3) s>> 5
        
        if ((*(arg2 + 0x10) & 1) == 0 && r8_2 == result)
            cond:1_1 = sub_142a490e0(arg1 + 8, arg2 + 8, r8_2).b == 0
            goto label_142a6446b
    else
        result.b = *(arg2 + 0x10) & 1
        cond:1_1 = result.b == 0
    label_142a6446b:
        
        if (not(cond:1_1))
            result.b = 1
            return result

result.b = 0
return result
