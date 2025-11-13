// 函数: sub_140ba28c0
// 地址: 0x140ba28c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x1b0)
uint64_t result = zx.q(*(arg1 + 0x168))

if (result.d != *(arg1 + 0x194))
    int32_t rax = *(arg1 + 0x16c)
    *(arg1 + 0x168) = 0
    
    if (rax s< 0 && rax != 0)
        sub_1405a5410(arg1 + 0x160, 0)
    
    *(arg1 + 0x190) = 0xffffffff
    *(arg1 + 0x194) = 0
    sub_140774790(arg1 + 0x170)
    int64_t rcx_3 = sx.q(*(arg1 + 0x1a8))
    void* result_1 = arg1 + 0x198
    result = *(result_1 + 8)
    
    if (rcx_3 s> 0)
        if (result != 0)
            result_1 = result
        
        result = 0xffffffff
        __builtin_memset(result_1, 0xffffffff, rcx_3 << 2)

if (arg1 == -0x1b0)
    return result

return LeaveCriticalSection(arg1 + 0x1b0)
