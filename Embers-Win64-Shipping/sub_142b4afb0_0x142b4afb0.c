// 函数: sub_142b4afb0
// 地址: 0x142b4afb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rax_1 = __RTtypeid(arg2)
    
    if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax_1 + 8) != 0)
        int32_t rax_3
        rax_3.b = 0
        return rax_3
    
    if (sub_142b4abf0(*(arg1 + 0x50), *(arg2 + 0x50)) == 0 || *(arg1 + 0x58) != *(arg2 + 0x58)
            || *(arg1 + 0x5c) != *(arg2 + 0x5c))
        return 0

int32_t rax
rax.b = 1
return rax
