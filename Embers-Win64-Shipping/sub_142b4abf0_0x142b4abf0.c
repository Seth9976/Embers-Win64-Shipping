// 函数: sub_142b4abf0
// 地址: 0x142b4abf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1 != arg2)
    void* rax = __RTtypeid(arg2)
    
    if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax + 8) != 0 || *(arg1 + 8) != *(arg2 + 8)
            || *(arg1 + 0xc) != *(arg2 + 0xc) || *(arg1 + 0x10) != *(arg2 + 0x10)
            || *(arg1 + 0x14) != *(arg2 + 0x14) || *(arg1 + 0x18) != *(arg2 + 0x18)
            || *(arg1 + 0x1c) != *(arg2 + 0x1c) || *(arg1 + 0x20) != *(arg2 + 0x20))
        result.b = 0
        return result

result.b = 1
return result
