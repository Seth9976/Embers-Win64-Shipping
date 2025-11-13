// 函数: sub_142b81680
// 地址: 0x142b81680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = __RTtypeid(arg2)
int32_t result

if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax + 8) == 0 && *(arg1 + 8) == *(arg2 + 8))
    int32_t rcx_3
    rcx_3.b = *(arg2 + 0x10) == 0
    result.b = *(arg1 + 0x10) == 0
    
    if (result == rcx_3)
        int64_t* rcx_4 = *(arg1 + 0x18)
        int32_t rdx_1
        
        if (rcx_4 != 0)
            rdx_1 = sx.d((*(*rcx_4 + 0x10))(rcx_4, *(arg2 + 0x18)).b)
        else
            rdx_1.b = *(arg2 + 0x18) == 0
        
        if (rdx_1 != 0)
            result.b = 1
            return result

result.b = 0
return result
