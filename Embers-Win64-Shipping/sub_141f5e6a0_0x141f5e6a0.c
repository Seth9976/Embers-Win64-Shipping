// 函数: sub_141f5e6a0
// 地址: 0x141f5e6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x430)
int32_t i = 0

if (result != 0)
    int32_t rcx_2 = *(result + 0x1b0)
    int32_t r8_2 = *(arg2 + 0xc)
    arg2[1].d = 0
    int32_t rdx_1 = 0
    
    if (r8_2 != rcx_2)
        sub_140638c50(arg2, rcx_2)
        rdx_1 = arg2[1].d
        r8_2 = *(arg2 + 0xc)
    
    int32_t rax_3 = *(*(arg1 + 0x430) + 0x1b0) + rdx_1
    arg2[1].d = rax_3
    
    if (rax_3 s> r8_2)
        sub_1405a4d70(arg2)
    
    result = *(arg1 + 0x430)
    
    if (*(result + 0x1b0) s> 0)
        int64_t rdx_3 = 0
        int64_t r8_3 = 0
        
        do
            r8_3 += 0xc
            rdx_3 += 8
            i += 1
            *(rdx_3 + *arg2 - 8) = *(r8_3 + *(result + 0x1a8) - 0xc)
            result = *(arg1 + 0x430)
        while (i s< *(result + 0x1b0))
else
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        return sub_140638c50(arg2, 0) __tailcall

return result
