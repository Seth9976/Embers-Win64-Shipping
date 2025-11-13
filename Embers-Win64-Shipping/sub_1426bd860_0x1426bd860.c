// 函数: sub_1426bd860
// 地址: 0x1426bd860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d)

if (result.d != *(arg1 + 0x34))
    int64_t var_38
    sub_1407453e0(&var_38, arg1)
    void* var_28
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_28 + 0x18); i = i_1)
        int64_t* rdi_4 = *((sx.q(i) << 5) + *var_38 + 0x10)
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t temp1_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        int32_t var_2c
        int32_t var_20 = var_20 & not.d(var_2c)
        void var_30
        sub_14059bdd0(&var_30)
    
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) s<= 0xffffffff)
        sub_1405a51b0(arg1, 0)
    
    void* rdi_5 = &arg1[2]
    arg1[6].d = 0xffffffff
    void* rsi_1 = rdi_5 + 0x18
    *(arg1 + 0x34) = 0
    void* rax_7 = *(rdi_5 + 0x10)
    uint32_t rdx_4 = (*rsi_1 + 0x1f) u>> 5
    
    if (rax_7 != 0)
        rdi_5 = rax_7
    
    if (rdx_4 u> 8)
        memset(rdi_5, 0, zx.q(rdx_4) << 2)
    else if (rdx_4 != 0)
        __builtin_memset(rdi_5, 0, zx.q(rdx_4) << 2)
    
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
