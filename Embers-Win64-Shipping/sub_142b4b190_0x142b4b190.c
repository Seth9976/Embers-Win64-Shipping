// 函数: sub_142b4b190
// 地址: 0x142b4b190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1 != arg2)
    void* rax = __RTtypeid(arg2)
    
    if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax + 8) != 0)
        result.b = 0
        return result
    
    if (sub_142a48110(arg1 + 8, arg2 + 8).b == 0 || *(arg1 + 0x48) != *(arg2 + 0x48)
            || *(arg1 + 0x4c) != *(arg2 + 0x4c))
        result.b = 0
        return result

result.b = 1
return result
