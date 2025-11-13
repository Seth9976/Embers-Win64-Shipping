// 函数: sub_141d21dc0
// 地址: 0x141d21dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2[1].d)

if (result.d != 0)
    int64_t i = result - 1
    result = *arg2
    int32_t rdi_1 = *(result + (i << 2))
    
    for (; i s> -1; i -= 1)
        int64_t rax = *arg2
        
        if (i != 0)
            int32_t rdx_1 = *(rax + (i << 2))
            result = zx.q(*(rax + (i << 2) - 4) + 1)
            
            if (rdx_1 != result.d)
                sub_140dbae50(arg1 + 8, rdx_1, rdi_1 - rdx_1 + 1, 0)
                result = *arg2
                rdi_1 = *(result + (i << 2) - 4)
        else
            int32_t rdx = *rax
            result = sub_140dbae50(arg1 + 8, rdx, rdi_1 - rdx + 1, 0)
    
    int32_t rdx_2 = *(arg1 + 0x10)
    
    if (*(arg1 + 0x14) != rdx_2)
        return sub_1405a5410(arg1 + 8, rdx_2)

return result
