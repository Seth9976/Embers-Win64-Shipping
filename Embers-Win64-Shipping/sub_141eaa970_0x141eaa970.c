// 函数: sub_141eaa970
// 地址: 0x141eaa970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x50))
int32_t rbx = 0

if (result.d s> 0)
    int64_t result_1 = result
    result = *(arg1 + 0x48)
    int64_t r9_1 = 0
    
    do
        if (*result == arg2)
            result = (*(*arg2 + 0x280))(arg2, zx.q(arg3))
            
            if (arg3 == 0)
                break
            
            int32_t rcx_1 = *(arg1 + 0x50)
            int32_t rax_2 = rcx_1 - rbx
            
            if (rax_2 != 1)
                memmove((sx.q(rbx) << 4) + *(arg1 + 0x48), (sx.q(rbx + 1) << 4) + *(arg1 + 0x48), 
                    (rax_2 - 1) << 4)
                rcx_1 = *(arg1 + 0x50)
            
            *(arg1 + 0x50) = rcx_1 - 1
            sub_1405a5010(arg1 + 0x48)
            return sub_141eac150(arg1, arg2)
        
        rbx += 1
        r9_1 += 1
        result += 0x10
    while (r9_1 s< result_1)

return result
