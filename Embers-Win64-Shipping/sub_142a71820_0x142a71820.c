// 函数: sub_142a71820
// 地址: 0x142a71820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rax_1 = __RTtypeid(arg2)
    
    if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax_1 + 8) != 0)
        int32_t rax_3
        rax_3.b = 0
        return rax_3
    
    if (*(arg1 + 0x18) != *(arg2 + 0x18) || *(arg1 + 8) != *(arg2 + 8)
            || *(arg1 + 0xc) != *(arg2 + 0xc) || *(arg1 + 0x10) != *(arg2 + 0x10)
            || *(arg1 + 0x14) != *(arg2 + 0x14))
        return 0

int32_t rax
rax.b = 1
return rax
