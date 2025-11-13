// 函数: sub_142a72400
// 地址: 0x142a72400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rax_1 = __RTtypeid(arg2)
    
    if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax_1 + 8) != 0)
        int32_t rax_3
        rax_3.b = 0
        return rax_3
    
    if (sub_142a48110(arg1 + 0x20, arg2 + 0x20) == 0 || *(arg1 + 0xc) != *(arg2 + 0xc)
            || *(arg1 + 0x10) != *(arg2 + 0x10) || *(arg1 + 0x14) != *(arg2 + 0x14))
        return 0

int32_t rax
rax.b = 1
return rax
