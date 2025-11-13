// 函数: sub_142a963d0
// 地址: 0x142a963d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = __RTtypeid(arg2)
int32_t result

if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax + 8) == 0)
    if (arg1 == arg2)
        result.b = 1
        return result
    
    if (sub_142aea5f0(arg1 + 0x148, arg2 + 0x148).b != 0 && *(arg1 + 0x1e0) == *(arg2 + 0x1e0)
            && *(arg1 + 0x1e4) == *(arg2 + 0x1e4) && *(arg1 + 0x278) == *(arg2 + 0x278))
        int64_t* rcx_4 = *(arg2 + 0x1d8)
        int64_t* rdx_2 = *(arg1 + 0x1d8)
        
        if (rcx_4 == rdx_2)
            result.b = 1
            return result
        
        if (rdx_2 != 0 && rcx_4 != 0 && sub_142b0ec40(rcx_4, rdx_2).b != 0)
            result.b = 1
            return result

result.b = 0
return result
