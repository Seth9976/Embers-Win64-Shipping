// 函数: sub_142b22060
// 地址: 0x142b22060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = __RTtypeid(arg2)
uint64_t result

if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax + 8).d == 0)
    int64_t rcx_3 = sx.q(*(arg1 + 0x18))
    
    if (rcx_3.d == *(arg2 + 0x18) && *(arg1 + 0x170) == *(arg2 + 0x170)
            && *(arg1 + 0x180) == *(arg2 + 0x180) && *(arg1 + 0x184) == *(arg2 + 0x184))
        if (rcx_3.d s> 0)
            result = *(arg2 + 0x20)
            int64_t rdx_1 = 0
            int64_t r8_2 = *(arg1 + 0x20) - result
            
            do
                if (*(r8_2 + result) != *result)
                    goto label_142b2210e
                
                rdx_1 += 1
                result += 8
            while (rdx_1 s< rcx_3)
        
        result.b = 1
        return result

label_142b2210e:
result.b = 0
return result
