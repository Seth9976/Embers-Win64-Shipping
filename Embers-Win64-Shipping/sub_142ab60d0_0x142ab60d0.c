// 函数: sub_142ab60d0
// 地址: 0x142ab60d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (arg1 != arg2)
    void* rax_1 = __RTtypeid(arg2)
    
    if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax_1 + 8) != 0)
        int32_t rax_3
        rax_3.b = 0
        return rax_3
    
    uint32_t i
    uint32_t rdx_1
    
    if (*(arg1 + 8) == *(arg2 + 8) && *(arg1 + 0xc) == *(arg2 + 0xc))
        rax = arg1 + 0x10
        int64_t r8_2 = arg2 + 0x10 - rax
        
        do
            rdx_1 = zx.d(*rax)
            i = zx.d(*(rax + r8_2))
            
            if (rdx_1 != i)
                break
            
            rax += 1
        while (i != 0)
    
    if (*(arg1 + 8) != *(arg2 + 8) || *(arg1 + 0xc) != *(arg2 + 0xc) || rdx_1 - i != 0)
        return 0

rax.b = 1
return rax
