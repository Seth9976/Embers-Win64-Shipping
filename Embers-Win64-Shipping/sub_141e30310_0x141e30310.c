// 函数: sub_141e30310
// 地址: 0x141e30310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x108))

if (result.d != *(arg1 + 0x12c))
    void* var_38
    sub_141df26b0(&var_38, arg1)
    void* var_28
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_28 + 0x10); i = i_1)
        void* rcx_1 = var_38
        void* rax_1 = *(rcx_1 + 0x100)
        
        if (rax_1 != 0)
            rcx_1 = rax_1
        
        int64_t rcx_2 = *(rcx_1 + (sx.q(i) << 6) + 0x28)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int32_t var_2c
        int32_t var_20 = var_20 & not.d(var_2c)
        void var_30
        sub_140b4fe60(&var_30)
    
    *(arg1 + 0x108) = 0
    
    if (*(arg1 + 0x10c) s<= 0xffffffff)
        sub_141e0be30(arg1, 0)
    
    void* rdi_1 = arg1 + 0x110
    *(arg1 + 0x128) = 0xffffffff
    void* rsi_1 = rdi_1 + 0x10
    *(arg1 + 0x12c) = 0
    void* rax_7 = *(rdi_1 + 8)
    uint32_t rdx_4 = (*rsi_1 + 0x1f) u>> 5
    
    if (rax_7 != 0)
        rdi_1 = rax_7
    
    if (rdx_4 u> 8)
        memset(rdi_1, 0, zx.q(rdx_4) << 2)
    else if (rdx_4 != 0)
        __builtin_memset(rdi_1, 0, zx.q(rdx_4) << 2)
    
    *rsi_1 = 0
    void* result_1 = arg1 + 0x130
    int64_t rcx_7 = sx.q(*(arg1 + 0x140))
    result = *(result_1 + 8)
    
    if (rcx_7 s> 0)
        if (result != 0)
            result_1 = result
        
        result = 0xffffffff
        __builtin_memset(result_1, 0xffffffff, rcx_7 << 2)

return result
