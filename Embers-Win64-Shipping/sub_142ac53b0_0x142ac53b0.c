// 函数: sub_142ac53b0
// 地址: 0x142ac53b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax

if (arg1 != arg2)
    void* rax_1 = __RTtypeid(arg2)
    
    if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax_1 + 8) != 0)
        int32_t rax_3
        rax_3.b = 0
        return rax_3
    
    if (*(arg1 + 0x64) != *(arg2 + 0x64))
        return 0
    
    rax = zx.d(*(arg1 + 0x68))
    
    if (rax.b != *(arg2 + 0x68))
        return 0
    
    if (rax.b != 0 && (*(arg1 + 0x74) != *(arg2 + 0x74) || *(arg1 + 0x6c) != *(arg2 + 0x6c)
            || *(arg1 + 0x48) != *(arg2 + 0x48) || *(arg1 + 0x49) != *(arg2 + 0x49)
            || *(arg1 + 0x4a) != *(arg2 + 0x4a) || *(arg1 + 0x4c) != *(arg2 + 0x4c)
            || *(arg1 + 0x50) != *(arg2 + 0x50) || *(arg1 + 0x70) != *(arg2 + 0x70)
            || *(arg1 + 0x58) != *(arg2 + 0x58) || *(arg1 + 0x59) != *(arg2 + 0x59)
            || *(arg1 + 0x5a) != *(arg2 + 0x5a) || *(arg1 + 0x5c) != *(arg2 + 0x5c)
            || *(arg1 + 0x54) != *(arg2 + 0x54) || *(arg1 + 0x60) != *(arg2 + 0x60)))
        return 0

rax.b = 1
return rax
