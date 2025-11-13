// 函数: sub_141dd4b30
// 地址: 0x141dd4b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x138))

if (result.d != *(arg1 + 0x164))
    void* r8_1 = *(arg1 + 0x170)
    void* r9_1 = arg1 + 0x168
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    result = zx.q(
        *(r9_1 + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & (sx.q(*(arg1 + 0x178)) - 1)) << 2)))
    
    if (result.d != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x130)
        int64_t rdx_2
        
        while (true)
            rdx_2 = sx.q(result.d)
            int64_t rcx_2 = rdx_2 * 3
            
            if (*(r8_2 + (rcx_2 << 3)) == arg2)
                break
            
            result = zx.q(*(r8_2 + (rcx_2 << 3) + 0x10))
            
            if (result.d == 0xffffffff)
                return result
        
        if (result.d != 0xffffffff)
            result = rdx_2 * 3
            void* rbx_1 = r8_2 + (result << 3)
            
            if (rbx_1 != 0)
                void* rbx_2 = *(rbx_1 + 8)
                
                if (rbx_2 != 0)
                    sub_1407c23d0(arg1 + 0x130, arg2)
                    return sub_141db9670(rbx_2, 1) __tailcall

return result
