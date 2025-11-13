// 函数: sub_142b55490
// 地址: 0x142b55490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1 != arg2)
    void* rax = __RTtypeid(arg2)
    
    if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax + 8) != 0)
        result.b = 0
        return result
    
    if (sub_142a643e0(arg1, arg2).b == 0)
        result.b = 0
        return result
    
    int64_t* rcx_4 = *(arg1 + 0x48)
    
    if ((*(*rcx_4 + 0x20))(rcx_4, *(arg2 + 0x48)).b != 0)
        result.b = 0
        return result
    
    if (sub_142b55700(*(arg1 + 0x50), *(arg2 + 0x50)).b == 0)
        result.b = 0
        return result
    
    if (sub_142b55700(*(arg1 + 0x58), *(arg2 + 0x58)).b == 0)
        result.b = 0
        return result

result.b = 1
return result
