// 函数: sub_1415128c0
// 地址: 0x1415128c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d)

if (result.d != *(arg1 + 0x34))
    int32_t rax = *(arg1 + 0xc)
    arg1[1].d = 0
    
    if (rax s< 0 && rax != 0)
        sub_1405a5410(arg1, 0)
    
    void* rdi_1 = &arg1[2]
    arg1[6].d = 0xffffffff
    void* rsi_1 = rdi_1 + 0x18
    *(arg1 + 0x34) = 0
    void* rax_1 = *(rdi_1 + 0x10)
    uint32_t rdx_3 = (*rsi_1 + 0x1f) u>> 5
    
    if (rax_1 != 0)
        rdi_1 = rax_1
    
    if (rdx_3 u> 8)
        memset(rdi_1, 0, zx.q(rdx_3) << 2)
    else if (rdx_3 != 0)
        __builtin_memset(rdi_1, 0, zx.q(rdx_3) << 2)
    
    *rsi_1 = 0
    void* result_1 = &arg1[7]
    int64_t rcx_2 = sx.q(arg1[9].d)
    result = *(result_1 + 8)
    
    if (rcx_2 s> 0)
        if (result != 0)
            result_1 = result
        
        result = 0xffffffff
        __builtin_memset(result_1, 0xffffffff, rcx_2 << 2)

return result
