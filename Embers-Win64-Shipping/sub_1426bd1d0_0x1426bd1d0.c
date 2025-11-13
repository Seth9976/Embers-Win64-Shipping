// 函数: sub_1426bd1d0
// 地址: 0x1426bd1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2 - 2)

if (result.d u> 1)
    result = zx.q(*(arg1 + 0x260))
    int32_t r10_1 = *(arg1 + 0x118)
    
    if (result.d s< r10_1)
        void** r8_2 = result * 0x58 + *(arg1 + 0x110)
        void* r9_1 = r8_2[1]
        void* rdx
        
        if (r9_1 != 0)
            rdx = r9_1
            
            if (*(r8_2 + 0x41) != 0)
                rdx = *(r9_1 + 0x48)
        else
            rdx = *r8_2
            r9_1 = rdx
        
        char var_18_1 = 0
        return sub_1426bcb00(arg1, rdx, r10_1 - 1, r9_1, 0xffffffff, arg2)

return result
