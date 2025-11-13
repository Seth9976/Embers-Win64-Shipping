// 函数: sub_141cc1810
// 地址: 0x141cc1810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x50)

if (rcx != 0)
    sub_141cc6b90(rcx)
    void var_18
    
    if (arg1 + 0x50 != &var_18)
        *(arg1 + 0x50) = 0
        int64_t* rdi_1 = *(arg1 + 0x58)
        
        if (rdi_1 != 0)
            *(arg1 + 0x58) = 0
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    sub_141bdc410(arg1 + 0x60)

void* result = zx.q(*(arg1 + 0x128))

if (result.d != *(arg1 + 0x154))
    int32_t rax_3 = *(arg1 + 0x12c)
    *(arg1 + 0x128) = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_1405a5410(arg1 + 0x120, 0)
    
    *(arg1 + 0x150) = 0xffffffff
    *(arg1 + 0x154) = 0
    sub_140774790(arg1 + 0x130)
    int64_t rcx_6 = sx.q(*(arg1 + 0x168))
    void* result_1 = arg1 + 0x158
    result = *(result_1 + 8)
    
    if (rcx_6 s> 0)
        if (result != 0)
            result_1 = result
        
        result = 0xffffffff
        __builtin_memset(result_1, 0xffffffff, rcx_6 << 2)

return result
