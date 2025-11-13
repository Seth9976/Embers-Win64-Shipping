// 函数: sub_1411c7720
// 地址: 0x1411c7720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0xffff

if (*arg3 != 0xffff)
    int64_t* rcx = data_143f0f180
    int64_t* var_28
    (*(*rcx + 0xf8))(rcx, &var_28, arg4, &data_143e52aa0, 0, 1)
    int64_t* rbp_1 = var_28
    uint32_t r14_1 = zx.d(*arg3)
    void*** rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rsi_1 = *arg2
    void* rax_1 = &rcx_3[5]
    
    if (rax_1 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_3[5]
    
    *(arg1 + 0x30) = rax_1
    void**** rax_2 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_2 = rcx_3
    *(arg1 + 8) = &rcx_3[1]
    rcx_3[1] = 0
    result = 0x42da77a8
    rcx_3[3].d = r14_1
    rcx_3[4] = rbp_1
    *rcx_3 = &data_142da77a8
    rcx_3[2] = rsi_1
    int64_t* rbx_1 = var_28
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        rbx_1[1].d -= 1
        
        if (result == 1)
            if (rbx_1[2].b != 0)
                return (**rbx_1)(rbx_1, 1)
            
            if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
                return (**rbx_1)(rbx_1, 1)
            
            result = 0
            bool z_1
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_1 = true
            else
                result = *(rbx_1 + 0xc)
                z_1 = false
            
            if (z_1)
                return sub_1405dcc10(&data_143f02390, rbx_1)

return result
