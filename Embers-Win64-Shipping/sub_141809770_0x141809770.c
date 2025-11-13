// 函数: sub_141809770
// 地址: 0x141809770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
void* rcx = *(arg4 + 0xa0)
*(arg4 + 0x114) = 0

if (rcx != 0)
    uint32_t count = arg3 * arg2
    
    if (count != 0)
        int32_t rax_1 = *(rcx + 0x18) + count
        *(rcx + 0x18) = rax_1
        
        if (rax_1 s> *(rcx + 0x1c))
            sub_1405daba0(rcx + 0x10)
        
        void* rcx_2 = *(arg4 + 0xa0)
        int32_t rax_2 = 0
        int64_t rdx_1 = *(rcx_2 + 0x10)
        
        if (0 == *(rcx_2 + 0x20))
            *(rcx_2 + 0x20) = 0
        else
            rax_2 = *(rcx_2 + 0x20)
        
        result = zx.q(count)
        memcpy(sx.q(rax_2) + rdx_1, arg1, count)
        void* rcx_5 = *(arg4 + 0xa0)
        *(rcx_5 + 0x20)
        *(rcx_5 + 0x20) += count

return result
