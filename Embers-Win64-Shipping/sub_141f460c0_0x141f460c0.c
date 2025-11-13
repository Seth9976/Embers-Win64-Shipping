// 函数: sub_141f460c0
// 地址: 0x141f460c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d)

if (result.d != *(arg1 + 0x34))
    int64_t var_38
    sub_1407453e0(&var_38, arg1)
    void* var_28
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_28 + 0x18); i = i_1)
        void* rdi_3 = sx.q(i) * 0xa0 + *var_38
        int64_t rcx_1 = *(rdi_3 + 0x20)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *(rdi_3 + 0x10)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int32_t var_2c
        int32_t var_20 = var_20 & not.d(var_2c)
        void var_30
        sub_14059bdd0(&var_30)
    
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) s<= 0xffffffff)
        sub_1407c4520(arg1, 0)
    
    void* rdi_4 = &arg1[2]
    arg1[6].d = 0xffffffff
    void* rsi_1 = rdi_4 + 0x18
    *(arg1 + 0x34) = 0
    void* rax_6 = *(rdi_4 + 0x10)
    uint32_t rdx_4 = (*rsi_1 + 0x1f) u>> 5
    
    if (rax_6 != 0)
        rdi_4 = rax_6
    
    if (rdx_4 u> 8)
        memset(rdi_4, 0, zx.q(rdx_4) << 2)
    else if (rdx_4 != 0)
        __builtin_memset(rdi_4, 0, zx.q(rdx_4) << 2)
    
    *rsi_1 = 0
    void* result_1 = &arg1[7]
    int64_t rcx_7 = sx.q(arg1[9].d)
    result = *(result_1 + 8)
    
    if (rcx_7 s> 0)
        if (result != 0)
            result_1 = result
        
        result = 0xffffffff
        __builtin_memset(result_1, 0xffffffff, rcx_7 << 2)

return result
